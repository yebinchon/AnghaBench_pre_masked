
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct dwc3 {int ev_buf; int irq_gadget; int lock; int * gadget_driver; int dev; } ;


 int FUNC_0 (struct dwc3*) ;
 int FUNC_1 (int ,int ) ;
 struct dwc3* FUNC_2 (struct usb_gadget*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct usb_gadget *VAR_0)
{
 struct dwc3 *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2;

 FUNC_4(&VAR_1->lock, VAR_2);

 if (FUNC_3(VAR_1->dev))
  goto out;

 FUNC_0(VAR_1);

out:
 VAR_1->gadget_driver = ((void*)0);
 FUNC_5(&VAR_1->lock, VAR_2);

 FUNC_1(VAR_1->irq_gadget, VAR_1->ev_buf);

 return 0;
}
