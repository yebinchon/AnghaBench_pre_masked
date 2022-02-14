
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {scalar_t__ len; int * buf; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int ,int *,int) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int ,int *,scalar_t__) ;
 struct dvb_usb_device* FUNC_2 (struct i2c_adapter*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_1, struct i2c_msg VAR_2[],
      int VAR_3)
{


 struct dvb_usb_device *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;
 u8 VAR_6, VAR_7;
 u8 *VAR_8;

 if (FUNC_3(&VAR_4->i2c_mutex) < 0)
  return -VAR_0;

 if (VAR_3 > 2)
  FUNC_5("more than 2 i2c messages at a time is not handled yet. TODO.");

 if (VAR_3 == 2) {

  VAR_6 = *VAR_2[0].buf;
  VAR_7 = VAR_2[0].addr;
  VAR_8 = VAR_2[1].buf;
  VAR_5 = FUNC_0(VAR_4, VAR_7, VAR_6, VAR_8, 1);
  if (VAR_5 == 0)
   VAR_5 = 2;
 } else {

  VAR_6 = VAR_2[0].buf[0];
  VAR_7 = VAR_2[0].addr;
  VAR_8 = &VAR_2[0].buf[1];
  VAR_5 = FUNC_1(VAR_4, VAR_7, VAR_6, VAR_8, VAR_2[0].len - 1);
  if (VAR_5 == 0)
   VAR_5 = 1;
 }

 FUNC_4(&VAR_4->i2c_mutex);
 return VAR_5;
}
