
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_gadget_ep_cmd_params {int dummy; } ;
struct dwc3_ep {scalar_t__ resource_index; } ;
struct dwc3 {int dummy; } ;
typedef int params ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dwc3_ep*,int ,struct dwc3_gadget_ep_cmd_params*) ;
 int FUNC_3 (struct dwc3_gadget_ep_cmd_params*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dwc3 *VAR_2, struct dwc3_ep *VAR_3)
{
 struct dwc3_gadget_ep_cmd_params VAR_4;
 u32 VAR_5;
 int VAR_6;

 if (!VAR_3->resource_index)
  return;

 VAR_5 = VAR_1;
 VAR_5 |= VAR_0;
 VAR_5 |= FUNC_0(VAR_3->resource_index);
 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_6 = FUNC_2(VAR_3, VAR_5, &VAR_4);
 FUNC_1(VAR_6);
 VAR_3->resource_index = 0;
}
