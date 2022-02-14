
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ttusb {int i2c_adap; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static u8 FUNC_1(struct ttusb* VAR_1)
{
 u8 VAR_2 = 0xff;
 u8 VAR_3;
 struct i2c_msg VAR_4[] = { { .addr = 0x50,.flags = 0,.buf = &VAR_2,.len = 1 },
    { .addr = 0x50,.flags = VAR_0,.buf = &VAR_3,.len = 1} };

 if ((FUNC_0(&VAR_1->i2c_adap, VAR_4, 2) != 2) || (VAR_3 == 0xff))
  VAR_3 = 0x48;

 return VAR_3;
}
