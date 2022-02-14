
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_vf_info {int * sriov_vlans; } ;
struct qlcnic_sriov {int num_vfs; struct qlcnic_vf_info* vf_info; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {struct qlcnic_sriov* sriov; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct qlcnic_adapter *VAR_0)
{
 struct qlcnic_sriov *VAR_1 = VAR_0->ahw->sriov;
 struct qlcnic_vf_info *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_vfs; VAR_3++) {
  VAR_2 = &VAR_1->vf_info[VAR_3];
  FUNC_0(VAR_2->sriov_vlans);
  VAR_2->sriov_vlans = ((void*)0);
 }
}
