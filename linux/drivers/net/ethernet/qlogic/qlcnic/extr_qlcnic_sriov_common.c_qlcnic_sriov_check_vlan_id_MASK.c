
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qlcnic_vf_info {scalar_t__* sriov_vlans; int vlan_list_lock; } ;
struct qlcnic_sriov {int num_allowed_vlans; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_sriov *VAR_1,
          struct qlcnic_vf_info *VAR_2, u16 VAR_3)
{
 int VAR_4, VAR_5 = -VAR_0;

 if (!VAR_2->sriov_vlans)
  return VAR_5;

 FUNC_0(&VAR_2->vlan_list_lock);

 for (VAR_4 = 0; VAR_4 < VAR_1->num_allowed_vlans; VAR_4++) {
  if (VAR_2->sriov_vlans[VAR_4] == VAR_3) {
   VAR_5 = 0;
   break;
  }
 }

 FUNC_1(&VAR_2->vlan_list_lock);
 return VAR_5;
}
