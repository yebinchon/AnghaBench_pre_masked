
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct tw9910_priv {int norm; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_client*,int ,unsigned int) ;
 struct tw9910_priv* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int,int) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_8, v4l2_std_id VAR_9)
{
 struct i2c_client *VAR_10 = FUNC_3(VAR_8);
 struct tw9910_priv *VAR_11 = FUNC_1(VAR_10);
 const unsigned int VAR_12 = 720;
 const unsigned int VAR_13 = 15;
 unsigned int VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 if (!(VAR_9 & (VAR_3 | VAR_4)))
  return -VAR_1;

 VAR_11->norm = VAR_9;
 if (VAR_9 & VAR_2) {
  VAR_14 = 240;
  VAR_15 = 18;
  VAR_16 = FUNC_2(VAR_10, VAR_7, 0x10, 0x10);
 } else {
  VAR_14 = 288;
  VAR_15 = 24;
  VAR_16 = FUNC_2(VAR_10, VAR_7, 0x10, 0x00);
 }
 if (!VAR_16)
  VAR_16 = FUNC_0(VAR_10, VAR_0,
      ((VAR_15 >> 2) & 0xc0) |
      ((VAR_14 >> 4) & 0x30) |
      ((VAR_13 >> 6) & 0x0c) |
      ((VAR_12 >> 8) & 0x03));
 if (!VAR_16)
  VAR_16 = FUNC_0(VAR_10, VAR_6,
      VAR_15 & 0xff);
 if (!VAR_16)
  VAR_16 = FUNC_0(VAR_10, VAR_5,
      VAR_14 & 0xff);

 return VAR_16;
}
