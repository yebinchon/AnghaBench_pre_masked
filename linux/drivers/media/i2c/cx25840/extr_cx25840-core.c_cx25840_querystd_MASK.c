
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
typedef size_t u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct i2c_client*,char*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, v4l2_std_id *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(VAR_1);

 static const v4l2_std_id VAR_4[] = {
             128,

             136,
             135,
             137,
             134,
             132,
             131,
             130,
             133,

             128,
             128,
             128,
             129,
             128,
             128,
             128
 };

 u32 VAR_5 = (FUNC_0(VAR_3, 0x40c) >> 8) & 0xf;
 *VAR_2 = VAR_4[VAR_5];

 FUNC_2(1, VAR_0, VAR_3,
  "querystd fmt = %x, v4l2_std_id = 0x%x\n",
  VAR_5, (unsigned int)VAR_4[VAR_5]);

 return 0;
}
