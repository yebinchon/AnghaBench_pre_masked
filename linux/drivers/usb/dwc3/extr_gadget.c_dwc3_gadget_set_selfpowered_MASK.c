
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int is_selfpowered; } ;
struct dwc3 {int lock; } ;


 struct dwc3* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct usb_gadget *VAR_0,
  int VAR_1)
{
 struct dwc3 *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 VAR_0->is_selfpowered = !!VAR_1;
 FUNC_2(&VAR_2->lock, VAR_3);

 return 0;
}
