
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmci_host {TYPE_1__* ops; } ;
struct TYPE_2__ {int get_datactrl_cfg; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct mmci_host *VAR_2)
{
 VAR_2->ops = &VAR_0;
 VAR_2->ops->get_datactrl_cfg = VAR_1;
}
