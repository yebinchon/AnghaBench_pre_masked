
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int buf; } ;
struct friio_priv {TYPE_1__* i2c_client_demod; } ;
struct dvb_usb_device {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 struct friio_priv* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct dvb_usb_device *VAR_0, struct i2c_msg *VAR_1)
{
 struct friio_priv *VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = VAR_2->i2c_client_demod->addr;
 return FUNC_1(VAR_0, VAR_3, VAR_1->buf, VAR_1->len);
}
