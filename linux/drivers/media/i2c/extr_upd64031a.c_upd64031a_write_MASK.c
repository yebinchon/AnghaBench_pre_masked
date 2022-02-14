
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int *,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int ,int ) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int ,int ) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_3(VAR_1);
 u8 VAR_5[2];

 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_3;
 FUNC_1(1, VAR_0, VAR_1, "write reg: %02X val: %02X\n", VAR_2, VAR_3);
 if (FUNC_0(VAR_4, VAR_5, 2) != 2)
  FUNC_2(VAR_1, "I/O error write 0x%02x/0x%02x\n", VAR_2, VAR_3);
}
