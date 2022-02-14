
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_esw_func_cfg {int pci_func; } ;
struct qlcnic_adapter {int flags; TYPE_1__* ahw; } ;
struct TYPE_2__ {int pci_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*,struct qlcnic_esw_func_cfg*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_esw_func_cfg*) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_esw_func_cfg*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_esw_func_cfg*) ;

int FUNC_4(struct qlcnic_adapter *VAR_2)
{
 struct qlcnic_esw_func_cfg VAR_3;

 if (!(VAR_2->flags & VAR_1))
  return 0;

 VAR_3.pci_func = VAR_2->ahw->pci_func;
 if (FUNC_0(VAR_2, &VAR_3))
   return -VAR_0;
 FUNC_3(VAR_2, &VAR_3);
 FUNC_1(VAR_2, &VAR_3);
 FUNC_2(VAR_2, &VAR_3);

 return 0;
}
