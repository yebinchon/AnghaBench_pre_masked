
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct qlcnic_vf_info {int vlan_list_lock; scalar_t__* sriov_vlans; } ;
struct qlcnic_sriov {int num_allowed_vlans; struct qlcnic_vf_info* vf_info; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
typedef enum qlcnic_mac_type { ____Placeholder_qlcnic_mac_type } qlcnic_mac_type ;
struct TYPE_2__ {struct qlcnic_sriov* sriov; } ;


 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int const*,scalar_t__,int) ;
 int FUNC_3 (struct qlcnic_vf_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0, const u8 *VAR_1,
      enum qlcnic_mac_type VAR_2)
{
 struct qlcnic_adapter *VAR_3 = FUNC_0(VAR_0);
 struct qlcnic_sriov *VAR_4 = VAR_3->ahw->sriov;
 struct qlcnic_vf_info *VAR_5;
 u16 VAR_6;
 int VAR_7;

 VAR_5 = &VAR_3->ahw->sriov->vf_info[0];

 if (!FUNC_3(VAR_5)) {
  FUNC_2(VAR_3, VAR_1, 0, VAR_2);
 } else {
  FUNC_4(&VAR_5->vlan_list_lock);
  for (VAR_7 = 0; VAR_7 < VAR_4->num_allowed_vlans; VAR_7++) {
   VAR_6 = VAR_5->sriov_vlans[VAR_7];
   if (VAR_6)
    FUNC_2(VAR_3, VAR_1, VAR_6,
         VAR_2);
  }
  FUNC_5(&VAR_5->vlan_list_lock);
  if (FUNC_1(VAR_3))
   FUNC_2(VAR_3, VAR_1, 0, VAR_2);
 }
}
