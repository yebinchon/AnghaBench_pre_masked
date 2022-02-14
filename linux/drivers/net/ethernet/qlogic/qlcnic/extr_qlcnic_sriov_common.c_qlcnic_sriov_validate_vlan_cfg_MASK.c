
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qlcnic_vf_info {int dummy; } ;
struct qlcnic_sriov {scalar_t__ vlan_mode; int num_allowed_vlans; int * allowed_vlans; scalar_t__ any_vlan; struct qlcnic_vf_info* vf_info; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_vf_info*) ;
 scalar_t__ FUNC_2 (struct qlcnic_sriov*,struct qlcnic_vf_info*,int ) ;
 scalar_t__ FUNC_3 (struct qlcnic_sriov*,struct qlcnic_vf_info*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_2,
       u16 VAR_3, u8 VAR_4)
{
 struct qlcnic_sriov *VAR_5 = VAR_2->ahw->sriov;
 struct qlcnic_vf_info *VAR_6;
 bool VAR_7;
 u8 VAR_8 = 0;
 int VAR_9;

 VAR_6 = &VAR_2->ahw->sriov->vf_info[0];
 VAR_7 = FUNC_1(VAR_6);
 if (VAR_5->vlan_mode != VAR_1)
  return -VAR_0;

 if (VAR_4) {
  if (FUNC_0(VAR_2) && VAR_7)
   return -VAR_0;

  if (FUNC_3(VAR_5, VAR_6))
   return -VAR_0;

  if (VAR_5->any_vlan) {
   for (VAR_9 = 0; VAR_9 < VAR_5->num_allowed_vlans; VAR_9++) {
    if (VAR_5->allowed_vlans[VAR_9] == VAR_3)
     VAR_8 = 1;
   }

   if (!VAR_8)
    return -VAR_0;
  }
 } else {
  if (!VAR_7 || FUNC_2(VAR_5, VAR_6, VAR_3))
   return -VAR_0;
 }

 return 0;
}
