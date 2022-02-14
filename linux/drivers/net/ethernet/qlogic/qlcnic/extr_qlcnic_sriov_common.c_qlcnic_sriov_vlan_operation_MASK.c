
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qlcnic_vf_info {int vlan_list_lock; int sriov_vlans; struct qlcnic_adapter* adapter; } ;
struct qlcnic_sriov {int dummy; } ;
struct qlcnic_adapter {int netdev; TYPE_1__* ahw; } ;
typedef enum qlcnic_vlan_operations { ____Placeholder_qlcnic_vlan_operations } qlcnic_vlan_operations ;
struct TYPE_2__ {struct qlcnic_sriov* sriov; } ;




 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct qlcnic_sriov*,struct qlcnic_vf_info*,int ) ;
 int FUNC_2 (struct qlcnic_sriov*,struct qlcnic_vf_info*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct qlcnic_vf_info *VAR_0, u16 VAR_1,
     enum qlcnic_vlan_operations VAR_2)
{
 struct qlcnic_adapter *VAR_3 = VAR_0->adapter;
 struct qlcnic_sriov *VAR_4;

 VAR_4 = VAR_3->ahw->sriov;

 if (!VAR_0->sriov_vlans)
  return;

 FUNC_3(&VAR_0->vlan_list_lock);

 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_4, VAR_0, VAR_1);
  break;
 case 128:
  FUNC_2(VAR_4, VAR_0, VAR_1);
  break;
 default:
  FUNC_0(VAR_3->netdev, "Invalid VLAN operation\n");
 }

 FUNC_4(&VAR_0->vlan_list_lock);
 return;
}
