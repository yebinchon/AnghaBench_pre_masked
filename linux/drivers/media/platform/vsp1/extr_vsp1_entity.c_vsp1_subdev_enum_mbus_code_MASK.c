
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_entity {int lock; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ pad; unsigned int index; unsigned int code; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {unsigned int code; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vsp1_entity* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_subdev_pad_config* FUNC_3 (struct vsp1_entity*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_4 (struct vsp1_entity*,struct v4l2_subdev_pad_config*,int ) ;

int FUNC_5(struct v4l2_subdev *VAR_1,
          struct v4l2_subdev_pad_config *VAR_2,
          struct v4l2_subdev_mbus_code_enum *VAR_3,
          const unsigned int *VAR_4, unsigned int VAR_5)
{
 struct vsp1_entity *VAR_6 = FUNC_2(VAR_1);

 if (VAR_3->pad == 0) {
  if (VAR_3->index >= VAR_5)
   return -VAR_0;

  VAR_3->code = VAR_4[VAR_3->index];
 } else {
  struct v4l2_subdev_pad_config *VAR_7;
  struct v4l2_mbus_framefmt *VAR_8;





  if (VAR_3->index)
   return -VAR_0;

  VAR_7 = FUNC_3(VAR_6, VAR_2, VAR_3->which);
  if (!VAR_7)
   return -VAR_0;

  FUNC_0(&VAR_6->lock);
  VAR_8 = FUNC_4(VAR_6, VAR_7, 0);
  VAR_3->code = VAR_8->code;
  FUNC_1(&VAR_6->lock);
 }

 return 0;
}
