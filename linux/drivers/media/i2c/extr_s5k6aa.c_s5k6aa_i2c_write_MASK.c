
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int*,int) ;
 int FUNC_1 (int,int ,struct i2c_client*,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u8 VAR_4[4] = {VAR_2 >> 8, VAR_2 & 0xFF, VAR_3 >> 8, VAR_3 & 0xFF};

 int VAR_5 = FUNC_0(VAR_1, VAR_4, 4);
 FUNC_1(3, VAR_0, VAR_1, "i2c_write: 0x%04X : 0x%04x\n", VAR_2, VAR_3);

 return VAR_5 == 4 ? 0 : VAR_5;
}
