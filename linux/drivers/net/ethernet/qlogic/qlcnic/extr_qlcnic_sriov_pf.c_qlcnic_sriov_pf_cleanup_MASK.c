
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_adapter {int state; TYPE_1__* ahw; } ;
struct TYPE_2__ {int op_mode; int pci_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_5 (struct qlcnic_adapter*,int ) ;
 int FUNC_6 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_7 (struct qlcnic_adapter*) ;

void FUNC_8(struct qlcnic_adapter *VAR_2)
{
 u8 VAR_3 = VAR_2->ahw->pci_func;

 if (!FUNC_3(VAR_2))
  return;

 FUNC_7(VAR_2);
 FUNC_2(VAR_2, 0);
 FUNC_6(VAR_2, 0, VAR_3);
 FUNC_4(VAR_2, VAR_3, 0);
 FUNC_5(VAR_2, 0);
 FUNC_0(VAR_2);
 VAR_2->ahw->op_mode = VAR_0;
 FUNC_1(VAR_1, &VAR_2->state);
}
