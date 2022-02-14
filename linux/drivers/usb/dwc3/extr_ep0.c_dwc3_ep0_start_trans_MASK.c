
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_gadget_ep_cmd_params {int param1; int param0; } ;
struct dwc3_ep {int flags; struct dwc3* dwc; } ;
struct dwc3 {int ep0_next_event; int ep0_trb_addr; } ;
typedef int params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dwc3_ep*,int ,struct dwc3_gadget_ep_cmd_params*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dwc3_gadget_ep_cmd_params*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dwc3_ep *VAR_3)
{
 struct dwc3_gadget_ep_cmd_params VAR_4;
 struct dwc3 *VAR_5;
 int VAR_6;

 if (VAR_3->flags & VAR_2)
  return 0;

 VAR_5 = VAR_3->dwc;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.param0 = FUNC_3(VAR_5->ep0_trb_addr);
 VAR_4.param1 = FUNC_1(VAR_5->ep0_trb_addr);

 VAR_6 = FUNC_0(VAR_3, VAR_0, &VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->ep0_next_event = VAR_1;

 return 0;
}
