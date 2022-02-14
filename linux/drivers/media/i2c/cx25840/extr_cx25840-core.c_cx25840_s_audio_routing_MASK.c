
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int vid_input; } ;


 int FUNC_0 (struct i2c_client*) ;
 scalar_t__ FUNC_1 (struct cx25840_state*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 struct cx25840_state* FUNC_3 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0,
       u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct cx25840_state *VAR_4 = FUNC_3(VAR_0);
 struct i2c_client *VAR_5 = FUNC_4(VAR_0);

 if (FUNC_1(VAR_4))
  FUNC_0(VAR_5);
 return FUNC_2(VAR_5, VAR_4->vid_input, VAR_1);
}
