
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int width; unsigned int height; } ;
struct v4l2_subdev_selection {scalar_t__ which; TYPE_2__ r; int flags; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int width; int height; } ;
struct smiapp_sensor {unsigned int nbinning_subtypes; unsigned int binning_vertical; unsigned int binning_horizontal; TYPE_1__* binning_subtypes; } ;
struct TYPE_3__ {int horizontal; int vertical; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int,unsigned int,int,unsigned int,int ) ;
 struct smiapp_sensor* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_2,
          struct v4l2_subdev_pad_config *VAR_3,
          struct v4l2_subdev_selection *VAR_4,
          struct v4l2_rect **VAR_5,
          struct v4l2_rect *VAR_6)
{
 struct smiapp_sensor *VAR_7 = FUNC_1(VAR_2);
 unsigned int VAR_8;
 unsigned int VAR_9 = 1, VAR_10 = 1;
 int VAR_11 = FUNC_0(
  VAR_2,
  VAR_5[VAR_0]->width, VAR_4->r.width,
  VAR_5[VAR_0]->height, VAR_4->r.height, VAR_4->flags);

 for (VAR_8 = 0; VAR_8 < VAR_7->nbinning_subtypes; VAR_8++) {
  int VAR_12 = FUNC_0(
   VAR_2,
   VAR_5[VAR_0]->width
   / VAR_7->binning_subtypes[VAR_8].horizontal,
   VAR_4->r.width,
   VAR_5[VAR_0]->height
   / VAR_7->binning_subtypes[VAR_8].vertical,
   VAR_4->r.height, VAR_4->flags);

  if (VAR_12 > VAR_11) {
   VAR_9 = VAR_7->binning_subtypes[VAR_8].horizontal;
   VAR_10 = VAR_7->binning_subtypes[VAR_8].vertical;
   VAR_11 = VAR_12;
  }
 }
 if (VAR_4->which == VAR_1) {
  VAR_7->binning_vertical = VAR_10;
  VAR_7->binning_horizontal = VAR_9;
 }

 VAR_4->r.width = (VAR_5[VAR_0]->width / VAR_9) & ~1;
 VAR_4->r.height = (VAR_5[VAR_0]->height / VAR_10) & ~1;
}
