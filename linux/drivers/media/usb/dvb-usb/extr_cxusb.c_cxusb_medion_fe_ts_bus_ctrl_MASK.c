
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_device {int dummy; } ;
struct dvb_usb_adapter {struct dvb_usb_device* dev; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_2__ {struct dvb_usb_adapter* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int ) ;
 int FUNC_1 (struct dvb_usb_device*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct dvb_usb_adapter *VAR_3 = VAR_1->dvb->priv;
 struct dvb_usb_device *VAR_4 = VAR_3->dev;

 if (VAR_2)
  return FUNC_0(VAR_4, VAR_0);

 FUNC_1(VAR_4);

 return 0;
}
