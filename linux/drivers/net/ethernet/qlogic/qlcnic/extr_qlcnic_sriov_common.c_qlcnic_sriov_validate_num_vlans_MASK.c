
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_vf_info {scalar_t__ num_vlan; int vlan_list_lock; } ;
struct qlcnic_sriov {scalar_t__ num_allowed_vlans; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_sriov *VAR_1,
        struct qlcnic_vf_info *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(&VAR_2->vlan_list_lock);

 if (VAR_2->num_vlan >= VAR_1->num_allowed_vlans)
  VAR_3 = -VAR_0;

 FUNC_1(&VAR_2->vlan_list_lock);
 return VAR_3;
}
