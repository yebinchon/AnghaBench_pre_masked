
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int field; int code; int height; int width; } ;
struct v4l2_subdev_format {scalar_t__ which; TYPE_1__ format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct ov5695_mode {int height; int width; } ;
struct ov5695 {int mutex; struct ov5695_mode* cur_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ov5695* FUNC_2 (struct v4l2_subdev*) ;
 TYPE_1__* FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_4,
     struct v4l2_subdev_pad_config *VAR_5,
     struct v4l2_subdev_format *VAR_6)
{
 struct ov5695 *VAR_7 = FUNC_2(VAR_4);
 const struct ov5695_mode *VAR_8 = VAR_7->cur_mode;

 FUNC_0(&VAR_7->mutex);
 if (VAR_6->which == VAR_3) {



  FUNC_1(&VAR_7->mutex);
  return -VAR_0;

 } else {
  VAR_6->format.width = VAR_8->width;
  VAR_6->format.height = VAR_8->height;
  VAR_6->format.code = VAR_1;
  VAR_6->format.field = VAR_2;
 }
 FUNC_1(&VAR_7->mutex);

 return 0;
}
