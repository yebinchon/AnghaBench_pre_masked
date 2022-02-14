
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int,int ,struct i2c_client*,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, u16 VAR_3, u16 *VAR_4)
{
 u8 VAR_5[2] = {VAR_3 >> 8, VAR_3 & 0xFF};
 struct i2c_msg VAR_6[2];
 u8 VAR_7[2];
 int VAR_8;

 VAR_6[0].addr = VAR_2->addr;
 VAR_6[0].flags = 0;
 VAR_6[0].len = 2;
 VAR_6[0].buf = VAR_5;

 VAR_6[1].addr = VAR_2->addr;
 VAR_6[1].flags = VAR_0;
 VAR_6[1].len = 2;
 VAR_6[1].buf = VAR_7;

 VAR_8 = FUNC_1(VAR_2->adapter, VAR_6, 2);
 *VAR_4 = FUNC_0(*((__be16 *)VAR_7));

 FUNC_2(3, VAR_1, VAR_2, "i2c_read: 0x%04X : 0x%04x\n", VAR_3, *VAR_4);

 return VAR_8 == 2 ? 0 : VAR_8;
}
