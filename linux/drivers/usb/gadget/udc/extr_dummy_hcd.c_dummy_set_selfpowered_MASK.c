
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int is_selfpowered; } ;
struct dummy {int devstatus; } ;
struct TYPE_2__ {struct dummy* dum; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_1(struct usb_gadget *VAR_1, int VAR_2)
{
 struct dummy *VAR_3;

 VAR_1->is_selfpowered = (VAR_2 != 0);
 VAR_3 = FUNC_0(VAR_1)->dum;
 if (VAR_2)
  VAR_3->devstatus |= (1 << VAR_0);
 else
  VAR_3->devstatus &= ~(1 << VAR_0);
 return 0;
}
