
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_usb_device {int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_1, u8 VAR_2[6])
{
 int VAR_3;
 u8 VAR_4[] = { 0x1f, 0xf0 };
 u8 VAR_5[] = { 0 };
 struct i2c_msg VAR_6[] = {
  {
   .addr = 0x51,
   .flags = 0,
   .buf = VAR_4,
   .len = 2,
  }, {
   .addr = 0x51,
   .flags = VAR_0,
   .buf = VAR_5,
   .len = 1,

  }
 };

 for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
  VAR_4[1] = 0xf0 + VAR_3;
  if (FUNC_0(&VAR_1->i2c_adap, VAR_6, 2) != 2)
   break;
  else
   VAR_2[VAR_3] = VAR_5[0];
 }

 return 0;
}
