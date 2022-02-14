
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int* buf; int len; int addr; } ;
struct dvb_usb_adapter {TYPE_1__* dev; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_2, int VAR_3)
{
 int VAR_4 = 0x04;
 u8 VAR_5[3];
 struct i2c_msg VAR_6[] = {
  {.addr = VAR_0,.buf = VAR_5,.len = 3},
 };
 if (VAR_1)
  FUNC_1("%s hw-pidfilter", VAR_3 ? "enable" : "disable");
 for (; VAR_4 < 0x7e; VAR_4 += 2) {
  VAR_5[0] = VAR_4;
  VAR_5[1] = 0;
  VAR_5[2] = 0x80;
  FUNC_0(&VAR_2->dev->i2c_adap, VAR_6, 1);
 }
 return 0;
}
