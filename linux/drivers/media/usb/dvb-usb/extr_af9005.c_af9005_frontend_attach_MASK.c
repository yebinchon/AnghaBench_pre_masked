
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_device {int dummy; } ;
struct dvb_usb_adapter {TYPE_2__* dev; TYPE_1__* fe_adap; } ;
struct TYPE_5__ {struct usb_device* udev; } ;
struct TYPE_4__ {int fe; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int *,int) ;
 int FUNC_2 (int *,int,int (*) (char*)) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct usb_device*,int ) ;
 int FUNC_5 (struct usb_device*,int) ;
 int FUNC_6 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_adapter *VAR_1)
{
 u8 VAR_2[8];
 int VAR_3;





 struct usb_device *VAR_4 = VAR_1->dev->udev;
 FUNC_4(VAR_4, FUNC_6(VAR_4, 2));
 FUNC_4(VAR_4, FUNC_5(VAR_4, 1));
 if (VAR_0) {
  FUNC_3("EEPROM DUMP\n");
  for (VAR_3 = 0; VAR_3 < 255; VAR_3 += 8) {
   FUNC_1(VAR_1->dev, VAR_3, VAR_2, 8);
   FUNC_2(VAR_2, 8, FUNC_3);
  }
 }
 VAR_1->fe_adap[0].fe = FUNC_0(VAR_1->dev);
 return 0;
}
