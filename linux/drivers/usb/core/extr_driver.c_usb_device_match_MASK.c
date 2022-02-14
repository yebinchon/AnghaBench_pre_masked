
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_driver {int id_table; } ;
struct usb_device_id {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device_driver*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 struct usb_driver* FUNC_3 (struct device_driver*) ;
 struct usb_interface* FUNC_4 (struct device*) ;
 struct usb_device_id* FUNC_5 (struct usb_interface*,struct usb_driver*) ;
 struct usb_device_id* FUNC_6 (struct usb_interface*,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0, struct device_driver *VAR_1)
{

 if (FUNC_0(VAR_0)) {


  if (!FUNC_1(VAR_1))
   return 0;


  return 1;

 } else if (FUNC_2(VAR_0)) {
  struct usb_interface *VAR_2;
  struct usb_driver *VAR_3;
  const struct usb_device_id *VAR_4;


  if (FUNC_1(VAR_1))
   return 0;

  VAR_2 = FUNC_4(VAR_0);
  VAR_3 = FUNC_3(VAR_1);

  VAR_4 = FUNC_6(VAR_2, VAR_3->id_table);
  if (VAR_4)
   return 1;

  VAR_4 = FUNC_5(VAR_2, VAR_3);
  if (VAR_4)
   return 1;
 }

 return 0;
}
