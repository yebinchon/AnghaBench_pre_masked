
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct dvb_usb_adapter {TYPE_2__* dev; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_4__ {int i2c_adap; } ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_1, int VAR_2)
{
 static u8 VAR_3[] = { 0 };
 static u8 VAR_4[] = { 1 };
 struct i2c_msg VAR_5 = {
  .addr = VAR_0,
  .flags = 0,
  .buf = VAR_3,
  .len = 1
 };
 struct dvb_usb_adapter *VAR_6 =
  (struct dvb_usb_adapter *)(VAR_1->dvb->priv);

 if (VAR_2)
  VAR_5.buf = VAR_4;
 FUNC_0(&VAR_6->dev->i2c_adap, &VAR_5, 1);
}
