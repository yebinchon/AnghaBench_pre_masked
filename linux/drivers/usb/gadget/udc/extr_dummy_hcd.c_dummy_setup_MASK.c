
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* root_hub; int sg_tablesize; int controller; } ;
struct usb_hcd {TYPE_4__ self; int speed; } ;
struct dummy {TYPE_2__* ss_hcd; TYPE_1__* hs_hcd; } ;
struct TYPE_7__ {int speed; } ;
struct TYPE_6__ {struct dummy* dum; } ;
struct TYPE_5__ {struct dummy* dum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (struct usb_hcd*) ;
 scalar_t__ FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_4)
{
 struct dummy *VAR_5;

 VAR_5 = *((void **)FUNC_0(VAR_4->self.controller));
 VAR_4->self.sg_tablesize = ~0;
 if (FUNC_2(VAR_4)) {
  VAR_5->hs_hcd = FUNC_1(VAR_4);
  VAR_5->hs_hcd->dum = VAR_5;





  VAR_4->speed = VAR_0;
  VAR_4->self.root_hub->speed = VAR_2;
 } else {
  VAR_5->ss_hcd = FUNC_1(VAR_4);
  VAR_5->ss_hcd->dum = VAR_5;
  VAR_4->speed = VAR_1;
  VAR_4->self.root_hub->speed = VAR_3;
 }
 return 0;
}
