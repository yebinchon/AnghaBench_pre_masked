
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_usb_device {int rc_dev; int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_2)
{
 u8 VAR_3[4];
 struct i2c_msg VAR_4 = {
  .addr = 0x6b,
  .flags = VAR_0,
  .buf = VAR_3,
  .len = 4
 };

 if (FUNC_1(&VAR_2->i2c_adap, &VAR_4, 1) != 1)
  return 0;

 if (VAR_3[1] || VAR_3[2])
  FUNC_2(VAR_2->rc_dev, VAR_1,
      FUNC_0(~VAR_3[1] & 0xff, VAR_3[2]), 0);
 return 0;
}
