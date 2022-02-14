
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; int ctrl_handler; } ;
struct s5k5baf {struct v4l2_subdev cis_sd; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 struct s5k5baf* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct s5k5baf *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1);
 FUNC_4(VAR_1->ctrl_handler);
 FUNC_1(&VAR_1->entity);

 VAR_1 = &VAR_2->cis_sd;
 FUNC_5(VAR_1);
 FUNC_1(&VAR_1->entity);

 return 0;
}
