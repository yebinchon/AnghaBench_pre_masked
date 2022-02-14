
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
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct usb_configuration*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct usb_configuration *VAR_4)
{
 int VAR_5;



 if (FUNC_2(VAR_4->cdev->gadget)) {
  VAR_4->descriptors = VAR_3;
  VAR_4->bmAttributes |= VAR_0;
 }

 VAR_1 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_5 = FUNC_3(VAR_4, VAR_1);
 if (VAR_5 < 0)
  FUNC_5(VAR_1);

 return VAR_5;
}
