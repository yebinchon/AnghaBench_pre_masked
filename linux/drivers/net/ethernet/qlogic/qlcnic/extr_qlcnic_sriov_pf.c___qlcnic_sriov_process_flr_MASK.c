
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_vf_info {int * flr_trans; int state; int pci_func; int rcv_act; int trans_work; int rcv_pend; struct qlcnic_adapter* adapter; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {int sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct qlcnic_vf_info*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_vf_info*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_vf_info*) ;
 int FUNC_6 (struct qlcnic_adapter*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct qlcnic_vf_info *VAR_2)
{
 struct qlcnic_adapter *VAR_3 = VAR_2->adapter;

 FUNC_3(&VAR_2->rcv_pend);
 FUNC_0(&VAR_2->trans_work);
 FUNC_3(&VAR_2->rcv_act);

 if (FUNC_7(VAR_1, &VAR_2->state)) {
  FUNC_5(VAR_3, VAR_2);
  FUNC_4(VAR_3, VAR_2);
 }

 FUNC_6(VAR_3, 0, VAR_2->pci_func);

 FUNC_1(VAR_0, &VAR_2->state);
 if (FUNC_7(VAR_1, &VAR_2->state)) {
  FUNC_2(VAR_3->ahw->sriov, VAR_2,
        VAR_2->flr_trans);
  FUNC_1(VAR_1, &VAR_2->state);
  VAR_2->flr_trans = ((void*)0);
 }
}
