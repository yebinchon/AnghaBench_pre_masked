
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct musb {int softconnect; int lock; int gadget_work; } ;


 struct musb* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_0, int VAR_1)
{
 struct musb *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 VAR_1 = !!VAR_1;




 FUNC_2(&VAR_2->lock, VAR_3);
 if (VAR_1 != VAR_2->softconnect) {
  VAR_2->softconnect = VAR_1;
  FUNC_1(&VAR_2->gadget_work, 0);
 }
 FUNC_3(&VAR_2->lock, VAR_3);

 return 0;
}
