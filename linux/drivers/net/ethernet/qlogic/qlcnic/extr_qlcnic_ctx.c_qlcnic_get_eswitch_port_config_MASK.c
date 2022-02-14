
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_esw_func_cfg {int pci_func; int discard_tagged; int host_vlan_tag; int promisc_mode; int mac_override; int mac_anti_spoof; int offload_flags; int vlan_id; } ;
struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__* npars; } ;
struct TYPE_4__ {scalar_t__ op_mode; int physical_port; } ;
struct TYPE_3__ {int phy_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*,int*,int*) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;

int
FUNC_3(struct qlcnic_adapter *VAR_6,
   struct qlcnic_esw_func_cfg *VAR_7)
{
 u32 VAR_8, VAR_9;
 int VAR_10;
 u8 VAR_11;

 if (VAR_6->ahw->op_mode == VAR_5) {
  VAR_10 = FUNC_2(VAR_6, VAR_7->pci_func);
  if (VAR_10 < 0)
   return -VAR_4;
  VAR_11 = VAR_6->npars[VAR_10].phy_port;
 } else {
  VAR_11 = VAR_6->ahw->physical_port;
 }
 VAR_8 = VAR_11;
 VAR_8 |= (VAR_7->pci_func << 8);
 if (FUNC_1(VAR_6, &VAR_8, &VAR_9))
  return -VAR_4;

 VAR_7->discard_tagged = !!(VAR_8 & VAR_0);
 VAR_7->host_vlan_tag = !!(VAR_8 & VAR_1);
 VAR_7->promisc_mode = !!(VAR_8 & VAR_2);
 VAR_7->mac_override = !!(VAR_8 & VAR_3);
 VAR_7->vlan_id = FUNC_0(VAR_8 >> 16);
 VAR_7->mac_anti_spoof = (VAR_9 & 0x1);
 VAR_7->offload_flags = ((VAR_9 >> 1) & 0x7);

 return 0;
}
