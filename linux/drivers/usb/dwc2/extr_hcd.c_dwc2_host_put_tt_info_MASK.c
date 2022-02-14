
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_tt {int refcount; TYPE_1__* usb_tt; } ;
struct dwc2_hsotg {int dummy; } ;
struct TYPE_2__ {int * hcpriv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dwc2_tt*) ;

void FUNC_2(struct dwc2_hsotg *VAR_0, struct dwc2_tt *VAR_1)
{

 if (!VAR_1)
  return;

 FUNC_0(VAR_1->refcount < 1);

 VAR_1->refcount--;
 if (!VAR_1->refcount) {
  VAR_1->usb_tt->hcpriv = ((void*)0);
  FUNC_1(VAR_1);
 }
}
