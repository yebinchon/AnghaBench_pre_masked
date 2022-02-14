
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_npar_info {int promisc_mode; int offload_flags; int mac_anti_spoof; int discard_tagged; int mac_override; int pvid; } ;
struct qlcnic_esw_func_cfg {int pci_func; int op_mode; int promisc_mode; int offload_flags; int mac_anti_spoof; int discard_tagged; int mac_override; int vlan_id; } ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*,struct qlcnic_esw_func_cfg*) ;

__attribute__((used)) static int
FUNC_1(struct qlcnic_adapter *VAR_3,
   struct qlcnic_npar_info *VAR_4, int VAR_5)
{
 struct qlcnic_esw_func_cfg VAR_6;
 VAR_6.op_mode = VAR_2;
 VAR_6.pci_func = VAR_5;
 VAR_6.vlan_id = VAR_4->pvid;
 VAR_6.mac_override = VAR_4->mac_override;
 VAR_6.discard_tagged = VAR_4->discard_tagged;
 VAR_6.mac_anti_spoof = VAR_4->mac_anti_spoof;
 VAR_6.offload_flags = VAR_4->offload_flags;
 VAR_6.promisc_mode = VAR_4->promisc_mode;
 if (FUNC_0(VAR_3, &VAR_6))
  return -VAR_0;

 VAR_6.op_mode = VAR_1;
 if (FUNC_0(VAR_3, &VAR_6))
  return -VAR_0;

 return 0;
}
