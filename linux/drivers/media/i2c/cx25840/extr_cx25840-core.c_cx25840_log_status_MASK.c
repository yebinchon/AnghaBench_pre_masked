
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int hdl; } ;


 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct cx25840_state*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*) ;
 struct cx25840_state* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int *,int ) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_0)
{
 struct cx25840_state *VAR_1 = FUNC_4(VAR_0);
 struct i2c_client *VAR_2 = FUNC_6(VAR_0);

 FUNC_3(VAR_2);
 if (!FUNC_1(VAR_1))
  FUNC_2(VAR_2);
 FUNC_0(VAR_0);
 FUNC_5(&VAR_1->hdl, VAR_0->name);
 return 0;
}
