
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct fotg210_udc {int lock; int * driver; } ;


 int FUNC_0 (struct fotg210_udc*) ;
 struct fotg210_udc* FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_0)
{
 struct fotg210_udc *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_2(&VAR_1->lock, VAR_2);

 FUNC_0(VAR_1);
 VAR_1->driver = ((void*)0);

 FUNC_3(&VAR_1->lock, VAR_2);

 return 0;
}
