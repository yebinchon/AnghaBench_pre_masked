
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct usb_dev_state {int ifclaimed; int interface_allowed_mask; scalar_t__ privileges_dropped; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int *) ;
 scalar_t__ FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (int *,struct usb_interface*,struct usb_dev_state*) ;
 struct usb_interface* FUNC_3 (struct usb_device*,unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct usb_dev_state *VAR_4, unsigned int VAR_5)
{
 struct usb_device *VAR_6 = VAR_4->dev;
 struct usb_interface *VAR_7;
 int VAR_8;

 if (VAR_5 >= 8*sizeof(VAR_4->ifclaimed))
  return -VAR_1;

 if (FUNC_1(VAR_5, &VAR_4->ifclaimed))
  return 0;

 if (VAR_4->privileges_dropped &&
   !FUNC_1(VAR_5, &VAR_4->interface_allowed_mask))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_6, VAR_5);
 if (!VAR_7)
  VAR_8 = -VAR_2;
 else
  VAR_8 = FUNC_2(&VAR_3, VAR_7, VAR_4);
 if (VAR_8 == 0)
  FUNC_0(VAR_5, &VAR_4->ifclaimed);
 return VAR_8;
}
