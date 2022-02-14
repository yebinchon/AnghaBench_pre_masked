
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct ak881x {int lines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_client*,int ,int,int) ;
 struct ak881x* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_7, v4l2_std_id VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_2(VAR_7);
 struct ak881x *VAR_10 = FUNC_1(VAR_9);
 u8 VAR_11;

 if (VAR_8 == VAR_3) {
  VAR_11 = 3;
  VAR_10->lines = 480;
 } else if (VAR_8 == VAR_6) {
  VAR_11 = 5;
  VAR_10->lines = 480;
 } else if (VAR_8 == VAR_5) {
  VAR_11 = 7;
  VAR_10->lines = 480;
 } else if (VAR_8 & VAR_2) {
  VAR_11 = 0;
  VAR_10->lines = 480;
 } else if (VAR_8 & VAR_4) {
  VAR_11 = 0xf;
  VAR_10->lines = 576;
 } else {

  return -VAR_1;
 }

 FUNC_0(VAR_9, VAR_0, VAR_11, 0xf);

 return 0;
}
