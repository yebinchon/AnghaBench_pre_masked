
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbport_trig_data {int dummy; } ;
struct usb_device {int maxchild; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct usbport_trig_data*,struct usb_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_0,
       void *VAR_1)
{
 struct usbport_trig_data *VAR_2 = VAR_1;
 int VAR_3;

 for (VAR_3 = 1; VAR_3 <= VAR_0->maxchild; VAR_3++)
  FUNC_1(VAR_2, VAR_0,
          FUNC_0(&VAR_0->dev), VAR_3);

 return 0;
}
