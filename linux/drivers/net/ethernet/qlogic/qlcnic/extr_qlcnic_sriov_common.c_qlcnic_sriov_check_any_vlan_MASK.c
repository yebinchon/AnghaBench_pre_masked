
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_vf_info {int vlan_list_lock; scalar_t__ num_vlan; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct qlcnic_vf_info *VAR_0)
{
 bool VAR_1 = 0;

 FUNC_0(&VAR_0->vlan_list_lock);

 if (VAR_0->num_vlan)
  VAR_1 = 1;

 FUNC_1(&VAR_0->vlan_list_lock);
 return VAR_1;
}
