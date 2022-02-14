
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface_descriptor {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceNumber; int bNumEndpoints; } ;
struct usb_interface {int dev; TYPE_1__* cur_altsetting; } ;
struct usb_device_id {unsigned long driver_info; int match_flags; } ;
struct driver_info {int data; } ;
struct TYPE_2__ {struct usb_interface_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_interface*,struct usb_device_id*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_5,
     const struct usb_device_id *VAR_6)
{
 struct usb_device_id *VAR_7 = (struct usb_device_id *)VAR_6;
 struct usb_interface_descriptor *VAR_8 = &VAR_5->cur_altsetting->desc;
 const struct driver_info *VAR_9;






 if (!VAR_7->driver_info) {
  FUNC_0(&VAR_5->dev, "setting defaults for dynamic device id\n");
  VAR_7->driver_info = (unsigned long)&VAR_4;
 }





 if (VAR_7->match_flags & VAR_3 &&
     VAR_8->bInterfaceClass != VAR_2) {
  FUNC_0(&VAR_5->dev,
   "Rejecting interface number match for class %02x\n",
   VAR_8->bInterfaceClass);
  return -VAR_0;
 }


 if (FUNC_1(VAR_5) && VAR_8->bInterfaceNumber == 0) {
  FUNC_0(&VAR_5->dev, "Quectel EC20 quirk, skipping interface 0\n");
  return -VAR_0;
 }







 VAR_9 = (void *)VAR_7->driver_info;

 if (VAR_9->data & VAR_1) {
  if (VAR_8->bNumEndpoints == 2)
   return -VAR_0;
 }

 return FUNC_2(VAR_5, VAR_7);
}
