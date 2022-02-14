
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_entity {int lock; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int pad; int format; int which; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vsp1_entity* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_subdev_pad_config* FUNC_3 (struct vsp1_entity*,struct v4l2_subdev_pad_config*,int ) ;
 int * FUNC_4 (struct vsp1_entity*,struct v4l2_subdev_pad_config*,int ) ;

int FUNC_5(struct v4l2_subdev *VAR_1,
          struct v4l2_subdev_pad_config *VAR_2,
          struct v4l2_subdev_format *VAR_3)
{
 struct vsp1_entity *VAR_4 = FUNC_2(VAR_1);
 struct v4l2_subdev_pad_config *VAR_5;

 VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_3->which);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_4->lock);
 VAR_3->format = *FUNC_4(VAR_4, VAR_5, VAR_3->pad);
 FUNC_1(&VAR_4->lock);

 return 0;
}
