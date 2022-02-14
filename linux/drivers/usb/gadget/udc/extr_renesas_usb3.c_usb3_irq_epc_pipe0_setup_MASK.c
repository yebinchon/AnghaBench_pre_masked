
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ctrlrequest {int dummy; } ;
struct renesas_usb3_ep {scalar_t__ started; } ;
struct renesas_usb3 {int gadget; TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ (* setup ) (int *,struct usb_ctrlrequest*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct usb_ctrlrequest*) ;
 struct renesas_usb3_ep* FUNC_1 (struct renesas_usb3*,int ) ;
 int FUNC_2 (struct renesas_usb3_ep*) ;
 int FUNC_3 (struct renesas_usb3*,struct usb_ctrlrequest*) ;
 int FUNC_4 (struct renesas_usb3*,struct usb_ctrlrequest*) ;
 int FUNC_5 (struct renesas_usb3*) ;
 int FUNC_6 (struct renesas_usb3_ep*,int ,int ) ;
 int FUNC_7 (struct renesas_usb3*) ;

__attribute__((used)) static void FUNC_8(struct renesas_usb3 *VAR_1)
{
 struct usb_ctrlrequest VAR_2;
 struct renesas_usb3_ep *VAR_3 = FUNC_1(VAR_1, 0);


 if (VAR_3->started)
  FUNC_6(VAR_3, FUNC_2(VAR_3),
      -VAR_0);

 FUNC_5(VAR_1);
 FUNC_3(VAR_1, &VAR_2);
 if (!FUNC_4(VAR_1, &VAR_2))
  if (VAR_1->driver->setup(&VAR_1->gadget, &VAR_2) < 0)
   FUNC_7(VAR_1);
}
