
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_gadget_ep_cmd_params {int param0; } ;
struct dwc3_ep {int dummy; } ;
typedef int params ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dwc3_ep*,int ,struct dwc3_gadget_ep_cmd_params*) ;
 int FUNC_2 (struct dwc3_gadget_ep_cmd_params*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dwc3_ep *VAR_1)
{
 struct dwc3_gadget_ep_cmd_params VAR_2;

 FUNC_2(&VAR_2, 0x00, sizeof(VAR_2));

 VAR_2.param0 = FUNC_0(1);

 return FUNC_1(VAR_1, VAR_0,
   &VAR_2);
}
