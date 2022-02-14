
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qlcnic_vf_info {int num_vlan; scalar_t__* sriov_vlans; } ;
struct qlcnic_sriov {int num_allowed_vlans; } ;



void FUNC_0(struct qlcnic_sriov *VAR_0,
         struct qlcnic_vf_info *VAR_1, u16 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_allowed_vlans; VAR_3++) {
  if (!VAR_1->sriov_vlans[VAR_3]) {
   VAR_1->sriov_vlans[VAR_3] = VAR_2;
   VAR_1->num_vlan++;
   return;
  }
 }
}
