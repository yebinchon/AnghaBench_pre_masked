
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_configuration {int bmAttributes; int descriptors; TYPE_1__* cdev; } ;
struct TYPE_2__ {int gadget; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct usb_configuration*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_configuration*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_configuration *VAR_6)
{
 int VAR_7;

 if (FUNC_2(VAR_6->cdev->gadget)) {
  VAR_6->descriptors = VAR_5;
  VAR_6->bmAttributes |= VAR_0;
 }

 VAR_2 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_2)) {
  VAR_7 = FUNC_1(VAR_2);
  goto err_get_ecm;
 }

 VAR_7 = FUNC_3(VAR_6, VAR_2);
 if (VAR_7)
  goto err_add_ecm;

 VAR_1 = FUNC_4(VAR_4);
 if (FUNC_0(VAR_1)) {
  VAR_7 = FUNC_1(VAR_1);
  goto err_get_acm;
 }

 VAR_7 = FUNC_3(VAR_6, VAR_1);
 if (VAR_7)
  goto err_add_acm;
 return 0;

err_add_acm:
 FUNC_5(VAR_1);
err_get_acm:
 FUNC_6(VAR_6, VAR_2);
err_add_ecm:
 FUNC_5(VAR_2);
err_get_ecm:
 return VAR_7;
}
