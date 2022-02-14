
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mantis_pci {int adapter; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,int,int,int) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct mantis_pci *VAR_3, u8 *VAR_4, u8 VAR_5)
{
 int VAR_6;
 struct i2c_msg VAR_7[] = {
  {
   .addr = 0x50,
   .flags = 0,
   .buf = VAR_4,
   .len = 1
  }, {
   .addr = 0x50,
   .flags = VAR_0,
   .buf = VAR_4,
   .len = VAR_5
  },
 };

 VAR_6 = FUNC_1(&VAR_3->adapter, VAR_7, 2);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2, VAR_1, 1,
   "ERROR: i2c read: < err=%i d0=0x%02x d1=0x%02x >",
   VAR_6, VAR_4[0], VAR_4[1]);

  return VAR_6;
 }

 return 0;
}
