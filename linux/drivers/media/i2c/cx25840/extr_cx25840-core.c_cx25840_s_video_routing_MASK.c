
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int aud_input; scalar_t__ generic_mode; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct cx25840_state*,scalar_t__) ;
 int FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 (struct cx25840_state*) ;
 scalar_t__ FUNC_4 (struct cx25840_state*) ;
 int FUNC_5 (struct i2c_client*,scalar_t__,int ) ;
 struct cx25840_state* FUNC_6 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_0,
       u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct cx25840_state *VAR_4 = FUNC_6(VAR_0);
 struct i2c_client *VAR_5 = FUNC_7(VAR_0);

 if (FUNC_3(VAR_4))
  FUNC_0(VAR_5);

 if (FUNC_4(VAR_4) && VAR_4->generic_mode && VAR_3) {
  FUNC_1(VAR_4, VAR_3);
  FUNC_2(VAR_5);
 }

 return FUNC_5(VAR_5, VAR_1, VAR_4->aud_input);
}
