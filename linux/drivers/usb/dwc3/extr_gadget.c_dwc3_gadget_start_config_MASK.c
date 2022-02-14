
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_gadget_ep_cmd_params {int dummy; } ;
struct dwc3_ep {struct dwc3* dwc; scalar_t__ number; } ;
struct dwc3 {struct dwc3_ep** eps; } ;
typedef int params ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc3_ep*) ;
 int FUNC_1 (struct dwc3_ep*,int ,struct dwc3_gadget_ep_cmd_params*) ;
 int FUNC_2 (struct dwc3_gadget_ep_cmd_params*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dwc3_ep *VAR_2)
{
 struct dwc3_gadget_ep_cmd_params VAR_3;
 struct dwc3 *VAR_4;
 u32 VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_2->number)
  return 0;

 FUNC_2(&VAR_3, 0x00, sizeof(VAR_3));
 VAR_5 = VAR_0;
 VAR_4 = VAR_2->dwc;

 VAR_7 = FUNC_1(VAR_2, VAR_5, &VAR_3);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct dwc3_ep *VAR_8 = VAR_4->eps[VAR_6];

  if (!VAR_8)
   continue;

  VAR_7 = FUNC_0(VAR_8);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
