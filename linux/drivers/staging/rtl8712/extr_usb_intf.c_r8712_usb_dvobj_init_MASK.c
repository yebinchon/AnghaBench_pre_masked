
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct usb_interface_descriptor {int bNumEndpoints; } ;
struct usb_host_interface {struct usb_interface_descriptor desc; } ;
struct usb_device {scalar_t__ speed; int dev; } ;
struct dvobj_priv {int ishighspeed; int nr_endpoint; struct _adapter* padapter; struct usb_device* pusbdev; } ;
struct _adapter {int eeprom_address_size; struct dvobj_priv dvobjpriv; } ;
struct TYPE_2__ {struct usb_host_interface* altsetting; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_1 (struct _adapter*) ;

__attribute__((used)) static uint FUNC_2(struct _adapter *VAR_4)
{
 uint VAR_5 = VAR_2;
 struct usb_host_interface *VAR_6;
 struct usb_interface_descriptor *VAR_7;
 struct dvobj_priv *VAR_8 = &VAR_4->dvobjpriv;
 struct usb_device *VAR_9 = VAR_8->pusbdev;

 VAR_8->padapter = VAR_4;
 VAR_4->eeprom_address_size = 6;
 VAR_6 = &VAR_3->altsetting[0];
 VAR_7 = &VAR_6->desc;
 VAR_8->nr_endpoint = VAR_7->bNumEndpoints;
 if (VAR_9->speed == VAR_0) {
  VAR_8->ishighspeed = 1;
  FUNC_0(&VAR_9->dev, "r8712u: USB_SPEED_HIGH with %d endpoints\n",
    VAR_8->nr_endpoint);
 } else {
  VAR_8->ishighspeed = 0;
  FUNC_0(&VAR_9->dev, "r8712u: USB_SPEED_LOW with %d endpoints\n",
    VAR_8->nr_endpoint);
 }
 if ((FUNC_1(VAR_4)) == VAR_1)
  VAR_5 = VAR_1;
 return VAR_5;
}
