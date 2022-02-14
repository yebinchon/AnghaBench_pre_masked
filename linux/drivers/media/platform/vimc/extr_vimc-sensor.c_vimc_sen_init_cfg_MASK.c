
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {unsigned int num_pads; } ;
struct v4l2_subdev {TYPE_1__ entity; } ;
struct v4l2_mbus_framefmt {int dummy; } ;


 struct v4l2_mbus_framefmt VAR_0 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
        struct v4l2_subdev_pad_config *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->entity.num_pads; VAR_3++) {
  struct v4l2_mbus_framefmt *VAR_4;

  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  *VAR_4 = VAR_0;
 }

 return 0;
}
