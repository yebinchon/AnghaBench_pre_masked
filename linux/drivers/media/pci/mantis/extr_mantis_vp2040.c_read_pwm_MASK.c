
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct mantis_pci {struct i2c_adapter adapter; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static u8 FUNC_1(struct mantis_pci *VAR_1)
{
 struct i2c_adapter *VAR_2 = &VAR_1->adapter;

 u8 VAR_3 = 0xff;
 u8 VAR_4;
 struct i2c_msg VAR_5[] = {
  {.addr = 0x50, .flags = 0, .buf = &VAR_3, .len = 1},
  {.addr = 0x50, .flags = VAR_0, .buf = &VAR_4, .len = 1}
 };

 if ((FUNC_0(VAR_2, VAR_5, 2) != 2)
     || (VAR_4 == 0xff))
  VAR_4 = 0x48;

 return VAR_4;
}
