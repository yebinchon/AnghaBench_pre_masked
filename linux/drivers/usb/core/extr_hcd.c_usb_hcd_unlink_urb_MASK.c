
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct usb_device {int dev; int bus; } ;
struct urb {struct usb_device* dev; int use_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct usb_hcd* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,struct urb*,int) ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_6 (struct usb_device*) ;
 int FUNC_7 (struct usb_device*) ;

int FUNC_8 (struct urb *VAR_4, int VAR_5)
{
 struct usb_hcd *VAR_6;
 struct usb_device *VAR_7 = VAR_4->dev;
 int VAR_8 = -VAR_1;
 unsigned long VAR_9;






 FUNC_3(&VAR_3, VAR_9);
 if (FUNC_0(&VAR_4->use_count) > 0) {
  VAR_8 = 0;
  FUNC_6(VAR_7);
 }
 FUNC_4(&VAR_3, VAR_9);
 if (VAR_8 == 0) {
  VAR_6 = FUNC_1(VAR_4->dev->bus);
  VAR_8 = FUNC_5(VAR_6, VAR_4, VAR_5);
  if (VAR_8 == 0)
   VAR_8 = -VAR_2;
  else if (VAR_8 != -VAR_1 && VAR_8 != -VAR_0)
   FUNC_2(&VAR_7->dev, "hcd_unlink_urb %pK fail %d\n",
     VAR_4, VAR_8);
  FUNC_7(VAR_7);
 }
 return VAR_8;
}
