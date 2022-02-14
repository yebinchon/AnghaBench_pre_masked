
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_driver {int dummy; } ;
struct usb_serial {scalar_t__ minors_reserved; int disc_mutex; int kref; int interface; struct usb_serial_driver* type; int dev; } ;
struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct usb_serial* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static struct usb_serial *FUNC_5(struct usb_device *VAR_1,
     struct usb_interface *VAR_2,
     struct usb_serial_driver *VAR_3)
{
 struct usb_serial *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->dev = FUNC_3(VAR_1);
 VAR_4->type = VAR_3;
 VAR_4->interface = FUNC_4(VAR_2);
 FUNC_0(&VAR_4->kref);
 FUNC_2(&VAR_4->disc_mutex);
 VAR_4->minors_reserved = 0;

 return VAR_4;
}
