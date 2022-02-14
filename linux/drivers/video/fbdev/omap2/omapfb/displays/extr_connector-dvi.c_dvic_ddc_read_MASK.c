
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u16 ;
struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_4,
  unsigned char *VAR_5, u16 VAR_6, u8 VAR_7)
{
 int VAR_8, VAR_9;

 for (VAR_9 = 3; VAR_9 > 0; VAR_9--) {
  struct i2c_msg VAR_10[] = {
   {
    .addr = VAR_0,
    .flags = 0,
    .len = 1,
    .buf = &VAR_7,
   }, {
    .addr = VAR_0,
    .flags = VAR_3,
    .len = VAR_6,
    .buf = VAR_5,
   }
  };

  VAR_8 = FUNC_0(VAR_4, VAR_10, 2);
  if (VAR_8 == 2)
   return 0;

  if (VAR_8 != -VAR_1)
   break;
 }

 return VAR_8 < 0 ? VAR_8 : -VAR_2;
}
