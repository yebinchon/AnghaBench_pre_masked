
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_gadget_ep_cmd_params {int dummy; } ;
struct dwc3_ep {int flags; scalar_t__ resource_index; struct dwc3* dwc; } ;
struct dwc3 {scalar_t__ revision; } ;
typedef int params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dwc3*) ;
 int FUNC_3 (struct dwc3_ep*,int ,struct dwc3_gadget_ep_cmd_params*) ;
 int FUNC_4 (struct dwc3_gadget_ep_cmd_params*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct dwc3_ep *VAR_5, bool VAR_6,
 bool VAR_7)
{
 struct dwc3 *VAR_8 = VAR_5->dwc;
 struct dwc3_gadget_ep_cmd_params VAR_9;
 u32 VAR_10;
 int VAR_11;

 if (!(VAR_5->flags & VAR_3))
  return;
 VAR_10 = VAR_1;
 VAR_10 |= VAR_6 ? VAR_2 : 0;
 VAR_10 |= VAR_7 ? VAR_0 : 0;
 VAR_10 |= FUNC_0(VAR_5->resource_index);
 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_11 = FUNC_3(VAR_5, VAR_10, &VAR_9);
 FUNC_1(VAR_11);
 VAR_5->resource_index = 0;

 if (FUNC_2(VAR_8) || VAR_8->revision < VAR_4)
  FUNC_5(100);
}
