
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct usb_configuration {TYPE_1__* cdev; } ;
struct TYPE_4__ {int bmAttributes; int descriptors; } ;
struct TYPE_3__ {struct usb_gadget* gadget; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct usb_gadget*) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_3 (struct usb_configuration*,int ) ;
 int FUNC_4 (struct usb_gadget*) ;
 int FUNC_5 (struct usb_gadget*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct usb_configuration *VAR_5)
{
 struct usb_gadget *VAR_6 = VAR_5->cdev->gadget;
 int VAR_7 = 0;

 FUNC_4(VAR_6);

 FUNC_5(VAR_6);

 if (FUNC_2(VAR_6)) {
  VAR_4.descriptors = VAR_3;
  VAR_4.bmAttributes |= VAR_0;
 }

 VAR_1 = FUNC_6(VAR_2);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_7 = FUNC_3(VAR_5, VAR_1);
 if (VAR_7 < 0)
  FUNC_7(VAR_1);

 return VAR_7;
}
