
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {unsigned int num_pads; } ;
struct v4l2_subdev {TYPE_1__ entity; } ;
struct v4l2_rect {int dummy; } ;
struct smiapp_subdev {struct v4l2_rect compose; struct v4l2_rect* crop; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct smiapp_subdev* FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_rect* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_rect* FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_2,
        struct v4l2_subdev_pad_config *VAR_3,
        struct v4l2_rect **VAR_4,
        struct v4l2_rect **VAR_5, int VAR_6)
{
 struct smiapp_subdev *VAR_7 = FUNC_1(VAR_2);
 unsigned int VAR_8;

 if (VAR_6 == VAR_1) {
  if (VAR_4)
   for (VAR_8 = 0; VAR_8 < VAR_2->entity.num_pads; VAR_8++)
    VAR_4[VAR_8] = &VAR_7->crop[VAR_8];
  if (VAR_5)
   *VAR_5 = &VAR_7->compose;
 } else {
  if (VAR_4) {
   for (VAR_8 = 0; VAR_8 < VAR_2->entity.num_pads; VAR_8++) {
    VAR_4[VAR_8] = FUNC_3(VAR_2, VAR_3, VAR_8);
    FUNC_0(!VAR_4[VAR_8]);
   }
  }
  if (VAR_5) {
   *VAR_5 = FUNC_2(VAR_2, VAR_3,
            VAR_0);
   FUNC_0(!*VAR_5);
  }
 }
}
