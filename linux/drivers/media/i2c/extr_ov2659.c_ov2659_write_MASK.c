
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int flags; int addr; } ;
typedef int buf ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct i2c_msg VAR_3;
 u8 VAR_4[3];
 int VAR_5;

 VAR_4[0] = VAR_1 >> 8;
 VAR_4[1] = VAR_1 & 0xFF;
 VAR_4[2] = VAR_2;

 VAR_3.addr = VAR_0->addr;
 VAR_3.flags = VAR_0->flags;
 VAR_3.buf = VAR_4;
 VAR_3.len = sizeof(VAR_4);

 VAR_5 = FUNC_1(VAR_0->adapter, &VAR_3, 1);
 if (VAR_5 >= 0)
  return 0;

 FUNC_0(&VAR_0->dev,
  "ov2659 write reg(0x%x val:0x%x) failed !\n", VAR_1, VAR_2);

 return VAR_5;
}
