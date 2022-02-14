
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {scalar_t__ aud_input; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_client*,int,int,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 int FUNC_2 (struct cx25840_state*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 struct cx25840_state* FUNC_4 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

int FUNC_6(struct v4l2_subdev *VAR_1, u32 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_5(VAR_1);
 struct cx25840_state *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;

 if (!FUNC_2(VAR_4))
  FUNC_0(VAR_3, 0x810, ~0x1, 1);
 if (VAR_4->aud_input != VAR_0) {
  FUNC_0(VAR_3, 0x803, ~0x10, 0);
  FUNC_1(VAR_3, 0x8d3, 0x1f);
 }
 VAR_5 = FUNC_3(VAR_3, VAR_2);
 if (VAR_4->aud_input != VAR_0)
  FUNC_0(VAR_3, 0x803, ~0x10, 0x10);
 if (!FUNC_2(VAR_4))
  FUNC_0(VAR_3, 0x810, ~0x1, 0);
 return VAR_5;
}
