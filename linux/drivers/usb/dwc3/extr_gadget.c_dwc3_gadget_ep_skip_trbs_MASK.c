
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_trb {int ctrl; } ;
struct dwc3_request {int num_trbs; struct dwc3_trb* trb; } ;
struct dwc3_ep {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dwc3_ep*) ;

__attribute__((used)) static void FUNC_1(struct dwc3_ep *VAR_1, struct dwc3_request *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->num_trbs; VAR_3++) {
  struct dwc3_trb *VAR_4;

  VAR_4 = VAR_2->trb + VAR_3;
  VAR_4->ctrl &= ~VAR_0;
  FUNC_0(VAR_1);
 }

 VAR_2->num_trbs = 0;
}
