
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int flags; int* buf; int len; int addr; } ;
struct i2c_client {int flags; int dev; int adapter; int addr; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, u16 VAR_2, u8 *VAR_3)
{
 struct i2c_msg VAR_4[2];
 u8 VAR_5[2];
 int VAR_6;

 VAR_5[0] = VAR_2 >> 8;
 VAR_5[1] = VAR_2 & 0xFF;

 VAR_4[0].addr = VAR_1->addr;
 VAR_4[0].flags = VAR_1->flags;
 VAR_4[0].buf = VAR_5;
 VAR_4[0].len = sizeof(VAR_5);

 VAR_4[1].addr = VAR_1->addr;
 VAR_4[1].flags = VAR_1->flags | VAR_0;
 VAR_4[1].buf = VAR_5;
 VAR_4[1].len = 1;

 VAR_6 = FUNC_1(VAR_1->adapter, VAR_4, 2);
 if (VAR_6 >= 0) {
  *VAR_3 = VAR_5[0];
  return 0;
 }

 FUNC_0(&VAR_1->dev,
  "ov2659 read reg(0x%x val:0x%x) failed !\n", VAR_2, *VAR_3);

 return VAR_6;
}
