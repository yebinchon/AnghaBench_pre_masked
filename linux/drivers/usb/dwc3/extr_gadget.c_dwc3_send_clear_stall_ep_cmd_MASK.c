
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dwc3_gadget_ep_cmd_params {int dummy; } ;
struct dwc3_ep {scalar_t__ direction; struct dwc3* dwc; } ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct dwc3 {scalar_t__ revision; TYPE_1__ gadget; } ;
typedef int params ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dwc3_ep*,int ,struct dwc3_gadget_ep_cmd_params*) ;
 int FUNC_1 (struct dwc3_gadget_ep_cmd_params*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dwc3_ep *VAR_4)
{
 struct dwc3 *VAR_5 = VAR_4->dwc;
 struct dwc3_gadget_ep_cmd_params VAR_6;
 u32 VAR_7 = VAR_1;
 if (VAR_4->direction && (VAR_5->revision >= VAR_2) &&
     (VAR_5->gadget.speed >= VAR_3))
  VAR_7 |= VAR_0;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));

 return FUNC_0(VAR_4, VAR_7, &VAR_6);
}
