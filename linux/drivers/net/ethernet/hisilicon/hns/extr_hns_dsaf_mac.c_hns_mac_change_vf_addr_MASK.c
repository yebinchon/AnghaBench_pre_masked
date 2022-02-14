
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct mac_entry_idx {int valid; int addr; int vlan_id; } ;
struct mac_driver {int (* set_mac_addr ) (int ,char*) ;} ;
struct TYPE_2__ {int mac; } ;
struct hns_mac_cb {TYPE_1__ priv; int mac_id; struct mac_entry_idx* addr_entry_idx; struct dsaf_device* dsaf_dev; } ;
struct dsaf_drv_mac_single_dest_entry {int port_num; int in_port_num; int in_vlan_id; int addr; } ;
struct dsaf_device {int dummy; } ;


 int FUNC_0 (struct dsaf_device*) ;
 int FUNC_1 (struct dsaf_device*,int ,int ,int ) ;
 int FUNC_2 (struct dsaf_device*,struct dsaf_drv_mac_single_dest_entry*) ;
 struct mac_driver* FUNC_3 (struct hns_mac_cb*) ;
 int FUNC_4 (struct hns_mac_cb*,int ,int *) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*) ;

int FUNC_8(struct hns_mac_cb *VAR_0,
      u32 VAR_1, char *VAR_2)
{
 int VAR_3;
 struct mac_driver *VAR_4 = FUNC_3(VAR_0);
 struct dsaf_device *VAR_5 = VAR_0->dsaf_dev;
 struct dsaf_drv_mac_single_dest_entry VAR_6;
 struct mac_entry_idx *VAR_7;

 VAR_7 = &VAR_0->addr_entry_idx[VAR_1];
 if (!FUNC_0(VAR_5)) {
  FUNC_6(VAR_6.addr, VAR_2, sizeof(VAR_6.addr));
  VAR_6.in_vlan_id = VAR_7->vlan_id;
  VAR_6.in_port_num = VAR_0->mac_id;
  VAR_3 = FUNC_4(VAR_0, (u8)VAR_1,
       &VAR_6.port_num);
  if (VAR_3)
   return VAR_3;

  if ((VAR_7->valid != 0) &&
      (FUNC_5(VAR_7->addr,
      VAR_2, sizeof(VAR_6.addr)) != 0)) {
   VAR_3 = FUNC_1(VAR_5,
           VAR_7->vlan_id,
           VAR_0->mac_id,
           VAR_7->addr);
   if (VAR_3)
    return VAR_3;
  }

  VAR_3 = FUNC_2(VAR_5, &VAR_6);
  if (VAR_3)
   return VAR_3;
 }

 if ((VAR_4->set_mac_addr) && (VAR_1 == 0))
  VAR_4->set_mac_addr(VAR_0->priv.mac, VAR_2);

 FUNC_6(VAR_7->addr, VAR_2, sizeof(VAR_7->addr));
 VAR_7->valid = 1;
 return 0;
}
