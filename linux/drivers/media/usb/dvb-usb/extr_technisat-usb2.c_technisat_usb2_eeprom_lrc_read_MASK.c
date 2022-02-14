
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct i2c_msg {int addr; scalar_t__* buf; int len; int flags; } ;
struct dvb_usb_device {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_2,
 u16 VAR_3, u8 *VAR_4, u16 VAR_5, u8 VAR_6)
{
 u8 VAR_7 = VAR_3 & 0xff;
 struct i2c_msg VAR_8[] = {
  {
   .addr = 0x50 | ((VAR_3 >> 8) & 0x3),
   .buf = &VAR_7,
   .len = 1
  }, {
   .addr = 0x50 | ((VAR_3 >> 8) & 0x3),
   .flags = VAR_1,
   .buf = VAR_4,
   .len = VAR_5
  }
 };

 while (VAR_6--) {
  int VAR_9;

  if (FUNC_0(&VAR_2->i2c_adap, VAR_8, 2) != 2)
   break;

  VAR_9 =
   FUNC_1(VAR_4, VAR_5 - 1) == VAR_4[VAR_5 - 1];

  if (VAR_9)
   return 0;
 }

 return -VAR_0;
}
