
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tw2804 {int norm; int channel; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct tw2804* FUNC_0 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct i2c_client*,int*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, v4l2_std_id VAR_2)
{
 struct tw2804 *VAR_3 = FUNC_0(VAR_1);
 struct i2c_client *VAR_4 = FUNC_1(VAR_1);
 bool VAR_5 = VAR_2 & VAR_0;
 u8 VAR_6[] = {
  0x01, VAR_5 ? 0xc4 : 0x84,
  0x09, VAR_5 ? 0x07 : 0x04,
  0x0a, VAR_5 ? 0xf0 : 0x20,
  0x0b, VAR_5 ? 0x07 : 0x04,
  0x0c, VAR_5 ? 0xf0 : 0x20,
  0x0d, VAR_5 ? 0x40 : 0x4a,
  0x16, VAR_5 ? 0x00 : 0x40,
  0x17, VAR_5 ? 0x00 : 0x40,
  0x20, VAR_5 ? 0x07 : 0x0f,
  0x21, VAR_5 ? 0x07 : 0x0f,
  0xff, 0xff,
 };

 FUNC_2(VAR_4, VAR_6, VAR_3->channel);
 VAR_3->norm = VAR_2;
 return 0;
}
