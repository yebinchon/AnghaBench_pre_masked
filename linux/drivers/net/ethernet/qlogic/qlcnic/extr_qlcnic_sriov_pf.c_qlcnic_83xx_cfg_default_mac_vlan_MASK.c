
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qlcnic_vf_info {TYPE_1__* vp; int vlan_list_lock; scalar_t__* sriov_vlans; scalar_t__ num_vlan; } ;
struct qlcnic_sriov {int num_allowed_vlans; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {struct qlcnic_sriov* sriov; } ;
struct TYPE_3__ {scalar_t__ vlan_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_vf_info*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct qlcnic_vf_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct qlcnic_adapter *VAR_1,
          struct qlcnic_vf_info *VAR_2,
          int VAR_3)
{
 struct qlcnic_sriov *VAR_4;
 u16 VAR_5;
 int VAR_6;

 VAR_4 = VAR_1->ahw->sriov;

 FUNC_3(&VAR_2->vlan_list_lock);
 if (VAR_2->num_vlan) {
  for (VAR_6 = 0; VAR_6 < VAR_4->num_allowed_vlans; VAR_6++) {
   VAR_5 = VAR_2->sriov_vlans[VAR_6];
   if (VAR_5)
    FUNC_1(VAR_1, VAR_2, VAR_5,
           VAR_3);
  }
 }
 FUNC_4(&VAR_2->vlan_list_lock);

 if (VAR_2->vp->vlan_mode != VAR_0) {
  if (FUNC_0(VAR_1) &&
      FUNC_2(VAR_2))
   return;
  FUNC_1(VAR_1, VAR_2, 0, VAR_3);
 }
}
