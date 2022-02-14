
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtmc_device_data {scalar_t__ iin_urb; scalar_t__ iin_ep_present; } ;
struct usb_interface {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct usbtmc_device_data* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_1)
{
 struct usbtmc_device_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = 0;

 if (VAR_2->iin_ep_present && VAR_2->iin_urb)
  VAR_3 = FUNC_2(VAR_2->iin_urb, VAR_0);
 if (VAR_3)
  FUNC_0(&VAR_1->dev, "Failed to submit iin_urb\n");

 return VAR_3;
}
