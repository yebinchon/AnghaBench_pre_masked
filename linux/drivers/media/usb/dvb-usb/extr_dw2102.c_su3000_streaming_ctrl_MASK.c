
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct dvb_usb_adapter {TYPE_1__* dev; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_1, int VAR_2)
{
 static u8 VAR_3[] = {0x00};
 static u8 VAR_4[] = {0x01};
 struct i2c_msg VAR_5 = {
  .addr = VAR_0,
  .flags = 0,
  .buf = VAR_2 ? VAR_3 : VAR_4,
  .len = 1
 };

 FUNC_0(&VAR_1->dev->i2c_adap, &VAR_5, 1);

 return 0;
}
