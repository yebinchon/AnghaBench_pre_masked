
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cdns3_device {scalar_t__ selected_ep; TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_sel; } ;


 int FUNC_0 (scalar_t__,int *) ;

void FUNC_1(struct cdns3_device *VAR_0, u32 VAR_1)
{
 if (VAR_0->selected_ep == VAR_1)
  return;

 VAR_0->selected_ep = VAR_1;
 FUNC_0(VAR_1, &VAR_0->regs->ep_sel);
}
