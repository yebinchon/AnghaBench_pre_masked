
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 scalar_t__ FUNC_2 (struct cx25840_state*) ;
 scalar_t__ FUNC_3 (struct cx25840_state*) ;
 scalar_t__ FUNC_4 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_5 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (int,int ,struct i2c_client*,char*,char*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct cx25840_state *VAR_3 = FUNC_5(VAR_1);
 struct i2c_client *VAR_4 = FUNC_6(VAR_1);
 u8 VAR_5;

 if (FUNC_4(VAR_3) || FUNC_3(VAR_3) || FUNC_2(VAR_3))
  return 0;

 FUNC_7(1, VAR_0, VAR_4, "%s audio output\n",
  VAR_2 ? "enable" : "disable");

 if (VAR_2) {
  VAR_5 = FUNC_0(VAR_4, 0x115) | 0x80;
  FUNC_1(VAR_4, 0x115, VAR_5);
  VAR_5 = FUNC_0(VAR_4, 0x116) | 0x03;
  FUNC_1(VAR_4, 0x116, VAR_5);
 } else {
  VAR_5 = FUNC_0(VAR_4, 0x115) & ~(0x80);
  FUNC_1(VAR_4, 0x115, VAR_5);
  VAR_5 = FUNC_0(VAR_4, 0x116) & ~(0x03);
  FUNC_1(VAR_4, 0x116, VAR_5);
 }
 return 0;
}
