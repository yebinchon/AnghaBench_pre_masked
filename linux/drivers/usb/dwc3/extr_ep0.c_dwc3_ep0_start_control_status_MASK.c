
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_ep {struct dwc3* dwc; } ;
struct dwc3 {int ep0_trb_addr; scalar_t__ three_stage_setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc3_ep*,int ,int ,int ,int) ;
 int FUNC_1 (struct dwc3_ep*) ;

__attribute__((used)) static int FUNC_2(struct dwc3_ep *VAR_2)
{
 struct dwc3 *VAR_3 = VAR_2->dwc;
 u32 VAR_4;

 VAR_4 = VAR_3->three_stage_setup ? VAR_1
  : VAR_0;

 FUNC_0(VAR_2, VAR_3->ep0_trb_addr, 0, VAR_4, 0);
 return FUNC_1(VAR_2);
}
