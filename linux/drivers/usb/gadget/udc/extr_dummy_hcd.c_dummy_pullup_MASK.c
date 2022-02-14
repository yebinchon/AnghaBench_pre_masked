
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dev; } ;
struct dummy_hcd {int dummy; } ;
struct dummy {int pullup; int lock; } ;


 int FUNC_0 (struct dummy_hcd*) ;
 struct dummy* FUNC_1 (int *) ;
 struct dummy_hcd* FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (struct dummy_hcd*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct usb_gadget *VAR_0, int VAR_1)
{
 struct dummy_hcd *VAR_2;
 struct dummy *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_1(&VAR_0->dev);
 VAR_2 = FUNC_2(VAR_0);

 FUNC_4(&VAR_3->lock, VAR_4);
 VAR_3->pullup = (VAR_1 != 0);
 FUNC_3(VAR_2);
 FUNC_5(&VAR_3->lock, VAR_4);

 FUNC_6(FUNC_0(VAR_2));
 return 0;
}
