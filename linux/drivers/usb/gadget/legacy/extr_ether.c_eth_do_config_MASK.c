
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_configuration {TYPE_1__* cdev; int bmAttributes; int descriptors; } ;
struct TYPE_2__ {int gadget; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (struct usb_configuration*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_7(struct usb_configuration *VAR_9)
{
 int VAR_10 = 0;



 if (FUNC_3(VAR_9->cdev->gadget)) {
  VAR_9->descriptors = VAR_7;
  VAR_9->bmAttributes |= VAR_0;
 }

 if (VAR_8) {
  VAR_2 = FUNC_5(VAR_5);
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);

  VAR_10 = FUNC_4(VAR_9, VAR_2);
  if (VAR_10 < 0)
   FUNC_6(VAR_2);

  return VAR_10;
 } else if (FUNC_2(VAR_9->cdev->gadget)) {
  VAR_1 = FUNC_5(VAR_4);
  if (FUNC_0(VAR_1))
   return FUNC_1(VAR_1);

  VAR_10 = FUNC_4(VAR_9, VAR_1);
  if (VAR_10 < 0)
   FUNC_6(VAR_1);

  return VAR_10;
 } else {
  VAR_3 = FUNC_5(VAR_6);
  if (FUNC_0(VAR_3))
   return FUNC_1(VAR_3);

  VAR_10 = FUNC_4(VAR_9, VAR_3);
  if (VAR_10 < 0)
   FUNC_6(VAR_3);

  return VAR_10;
 }

}
