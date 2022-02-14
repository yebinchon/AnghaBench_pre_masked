
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct mceusb_dev {int urb_in; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct mceusb_dev* FUNC_1 (struct usb_interface*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_2)
{
 struct mceusb_dev *VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3->dev, "resume");
 if (FUNC_2(VAR_3->urb_in, VAR_1))
  return -VAR_0;
 return 0;
}
