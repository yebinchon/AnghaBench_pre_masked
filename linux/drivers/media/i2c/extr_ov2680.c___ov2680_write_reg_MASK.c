
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ov2680_dev {struct i2c_client* i2c_client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct i2c_client*,int *,unsigned int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct ov2680_dev *VAR_2, u16 VAR_3,
         unsigned int VAR_4, u32 VAR_5)
{
 struct i2c_client *VAR_6 = VAR_2->i2c_client;
 u8 VAR_7[6];
 int VAR_8;

 if (VAR_4 > 4)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_7);
 FUNC_3(VAR_5 << (8 * (4 - VAR_4)), VAR_7 + 2);
 VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_4 + 2);
 if (VAR_8 != VAR_4 + 2) {
  FUNC_0(&VAR_6->dev, "write error: reg=0x%4x: %d\n", VAR_3, VAR_8);
  return -VAR_1;
 }

 return 0;
}
