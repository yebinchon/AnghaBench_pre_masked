
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct streamzap_ir {int dev; int urb_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct streamzap_ir* FUNC_1 (struct usb_interface*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_2)
{
 struct streamzap_ir *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_3->urb_in, VAR_1)) {
  FUNC_0(VAR_3->dev, "Error submitting urb\n");
  return -VAR_0;
 }

 return 0;
}
