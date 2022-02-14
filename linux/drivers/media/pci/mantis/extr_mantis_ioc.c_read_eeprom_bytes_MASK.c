
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct mantis_pci {struct i2c_adapter adapter; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,int,int,int) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct mantis_pci *VAR_2, u8 VAR_3, u8 *VAR_4, u8 VAR_5)
{
 struct i2c_adapter *VAR_6 = &VAR_2->adapter;
 int VAR_7;
 u8 VAR_8 = VAR_3;

 struct i2c_msg VAR_9[] = {
  { .addr = 0x50, .flags = 0, .buf = &VAR_8, .len = 1 },
  { .addr = 0x50, .flags = VAR_0, .buf = VAR_4, .len = VAR_5 },
 };

 VAR_7 = FUNC_1(VAR_6, VAR_9, 2);
 if (VAR_7 < 0) {
  FUNC_0(VAR_1, 1, "ERROR: i2c read: < err=%i d0=0x%02x d1=0x%02x >",
   VAR_7, VAR_4[0], VAR_4[1]);

  return VAR_7;
 }

 return 0;
}
