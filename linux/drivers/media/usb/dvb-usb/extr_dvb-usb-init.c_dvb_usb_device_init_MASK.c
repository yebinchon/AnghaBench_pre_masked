
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct module {int dummy; } ;
struct dvb_usb_device_properties {int no_reconnect; } ;
struct dvb_usb_device_description {int name; } ;
struct dvb_usb_device {struct module* owner; struct dvb_usb_device_description* desc; int props; struct usb_device* udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_device*,struct dvb_usb_device_properties*) ;
 struct dvb_usb_device_description* FUNC_2 (struct usb_device*,struct dvb_usb_device_properties*,int*) ;
 int FUNC_3 (struct dvb_usb_device*,short*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,...) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 struct dvb_usb_device* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,struct dvb_usb_device_properties*,int) ;
 int FUNC_9 (struct usb_interface*,struct dvb_usb_device*) ;

int FUNC_10(struct usb_interface *VAR_3,
   struct dvb_usb_device_properties *VAR_4,
   struct module *VAR_5, struct dvb_usb_device **VAR_6,
   short *VAR_7)
{
 struct usb_device *VAR_8 = FUNC_6(VAR_3);
 struct dvb_usb_device *VAR_9 = ((void*)0);
 struct dvb_usb_device_description *VAR_10 = ((void*)0);

 int VAR_11 = -VAR_1, VAR_12 = 0;

 if (VAR_6 != ((void*)0))
  *VAR_6 = ((void*)0);

 if ((VAR_10 = FUNC_2(VAR_8, VAR_4, &VAR_12)) == ((void*)0)) {
  FUNC_0("something went very wrong, device was not found in current device list - let's see what comes next.\n");
  return -VAR_0;
 }

 if (VAR_12) {
  FUNC_5("found a '%s' in cold state, will try to load a firmware", VAR_10->name);
  VAR_11 = FUNC_1(VAR_8, VAR_4);
  if (!VAR_4->no_reconnect || VAR_11 != 0)
   return VAR_11;
 }

 FUNC_5("found a '%s' in warm state.", VAR_10->name);
 VAR_9 = FUNC_7(sizeof(struct dvb_usb_device), VAR_2);
 if (VAR_9 == ((void*)0)) {
  FUNC_4("no memory for 'struct dvb_usb_device'");
  return -VAR_1;
 }

 VAR_9->udev = VAR_8;
 FUNC_8(&VAR_9->props, VAR_4, sizeof(struct dvb_usb_device_properties));
 VAR_9->desc = VAR_10;
 VAR_9->owner = VAR_5;

 FUNC_9(VAR_3, VAR_9);

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_9;

 VAR_11 = FUNC_3(VAR_9, VAR_7);

 if (VAR_11 == 0)
  FUNC_5("%s successfully initialized and connected.", VAR_10->name);
 else
  FUNC_5("%s error while loading driver (%d)", VAR_10->name, VAR_11);
 return VAR_11;
}
