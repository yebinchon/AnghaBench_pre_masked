
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_ep {int dummy; } ;
struct dwc3 {int ep0_trb_addr; struct dwc3_ep** eps; int ep0_in_setup; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dwc3_ep*,int ,int,int ,int) ;
 int FUNC_3 (struct dwc3_ep*) ;

void FUNC_4(struct dwc3 *VAR_1)
{
 struct dwc3_ep *VAR_2;
 int VAR_3;

 FUNC_1(&VAR_1->ep0_in_setup);

 VAR_2 = VAR_1->eps[0];
 FUNC_2(VAR_2, VAR_1->ep0_trb_addr, 8,
   VAR_0, 0);
 VAR_3 = FUNC_3(VAR_2);
 FUNC_0(VAR_3 < 0);
}
