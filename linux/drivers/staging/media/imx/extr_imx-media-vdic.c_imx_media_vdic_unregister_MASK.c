
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdic_priv {int lock; } ;
struct v4l2_subdev {int entity; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 struct vdic_priv* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*,char*) ;

int FUNC_5(struct v4l2_subdev *VAR_0)
{
 struct vdic_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_0, "Removing\n");

 FUNC_2(VAR_0);
 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_0->entity);

 return 0;
}
