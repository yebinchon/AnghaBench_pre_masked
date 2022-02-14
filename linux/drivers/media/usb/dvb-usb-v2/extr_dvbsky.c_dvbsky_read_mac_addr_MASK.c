
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_usb_device {int i2c_adap; } ;
struct dvb_usb_adapter {int dummy; } ;


 int VAR_0 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_1, u8 VAR_2[6])
{
 struct dvb_usb_device *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4[] = { 0x1e, 0x00 };
 u8 VAR_5[6] = { 0 };
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
   .len = 6,
  }
 };

 if (FUNC_1(&VAR_3->i2c_adap, VAR_6, 2) == 2)
  FUNC_2(VAR_2, VAR_5, 6);

 return 0;
}
