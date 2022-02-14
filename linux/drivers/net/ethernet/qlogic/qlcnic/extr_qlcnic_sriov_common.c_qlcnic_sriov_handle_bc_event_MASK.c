
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_vf_info {int ch_free_cmpl; int pci_func; } ;
struct qlcnic_sriov {struct qlcnic_vf_info* vf_info; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {struct qlcnic_sriov* sriov; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct qlcnic_adapter*,int ) ;
 int FUNC_5 (struct qlcnic_sriov*,struct qlcnic_vf_info*) ;
 int FUNC_6 (struct qlcnic_sriov*,struct qlcnic_vf_info*) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct qlcnic_adapter *VAR_0, u32 VAR_1)
{
 struct qlcnic_vf_info *VAR_2;
 struct qlcnic_sriov *VAR_3;
 int VAR_4;
 u8 VAR_5;

 VAR_3 = VAR_0->ahw->sriov;
 VAR_5 = FUNC_7(VAR_1);
 VAR_4 = FUNC_4(VAR_0, VAR_5);

 if (VAR_4 < 0)
  return;

 VAR_2 = &VAR_3->vf_info[VAR_4];
 VAR_2->pci_func = VAR_5;

 if (FUNC_2(VAR_1))
  FUNC_0(&VAR_2->ch_free_cmpl);

 if (FUNC_3(VAR_1)) {
  FUNC_5(VAR_3, VAR_2);
  return;
 }

 if (FUNC_1(VAR_1))
  FUNC_6(VAR_3, VAR_2);
}
