
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct state {struct platform_device** platform_device_tuner; int * i2c_client; TYPE_1__* af9033_config; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct platform_device {TYPE_3__ dev; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct dvb_usb_adapter {size_t id; } ;
struct TYPE_5__ {int owner; } ;
struct TYPE_4__ {int tuner; } ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct state* FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_adapter *VAR_0)
{
 struct state *VAR_1 = FUNC_1(VAR_0);
 struct dvb_usb_device *VAR_2 = FUNC_0(VAR_0);
 struct usb_interface *VAR_3 = VAR_2->intf;

 FUNC_3(&VAR_3->dev, "adap->id=%d\n", VAR_0->id);

 switch (VAR_1->af9033_config[VAR_0->id].tuner) {
 case 128:
 case 135:
  if (VAR_0->id == 1) {
   if (VAR_1->i2c_client[3])
    FUNC_2(VAR_2);
  } else if (VAR_0->id == 0) {
   if (VAR_1->i2c_client[1])
    FUNC_2(VAR_2);
  }
  break;
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 {
  struct platform_device *VAR_4;

  VAR_4 = VAR_1->platform_device_tuner[VAR_0->id];
  if (VAR_4) {
   FUNC_4(VAR_4->dev.driver->owner);
   FUNC_5(VAR_4);
  }
  break;
 }
 }

 return 0;
}
