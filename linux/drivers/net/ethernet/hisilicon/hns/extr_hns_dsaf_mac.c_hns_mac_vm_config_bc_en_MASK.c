
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct mac_entry_idx {int vlan_id; } ;
struct hns_mac_cb {scalar_t__ mac_type; int mac_id; struct mac_entry_idx* addr_entry_idx; struct dsaf_device* dsaf_dev; } ;
struct dsaf_drv_mac_single_dest_entry {int port_num; int in_port_num; int in_vlan_id; int addr; } ;
struct dsaf_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dsaf_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dsaf_device*,struct dsaf_drv_mac_single_dest_entry*) ;
 int FUNC_3 (struct dsaf_device*,struct dsaf_drv_mac_single_dest_entry*) ;
 int FUNC_4 (struct hns_mac_cb*,size_t,int *) ;

int FUNC_5(struct hns_mac_cb *VAR_1, u32 VAR_2, bool VAR_3)
{
 int VAR_4;
 struct dsaf_device *VAR_5 = VAR_1->dsaf_dev;
 u8 VAR_6;
 struct mac_entry_idx *VAR_7;
 struct dsaf_drv_mac_single_dest_entry VAR_8;

 if (VAR_1->mac_type == VAR_0)
  return 0;

 VAR_7 = &VAR_1->addr_entry_idx[VAR_2];

 if (!FUNC_0(VAR_5)) {
  FUNC_1(VAR_8.addr);
  VAR_8.in_vlan_id = VAR_7->vlan_id;
  VAR_8.in_port_num = VAR_1->mac_id;
  VAR_4 = FUNC_4(VAR_1, VAR_2, &VAR_6);
  if (VAR_4)
   return VAR_4;
  VAR_8.port_num = VAR_6;

  if (!VAR_3)
   VAR_4 = FUNC_3(VAR_5, &VAR_8);
  else
   VAR_4 = FUNC_2(VAR_5, &VAR_8);
  return VAR_4;
 }

 return 0;
}
