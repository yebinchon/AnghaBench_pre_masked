
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hns_mac_cb {int mac_id; struct dsaf_device* dsaf_dev; } ;
struct dsaf_drv_mac_single_dest_entry {int port_num; int in_port_num; scalar_t__ in_vlan_id; int addr; } ;
struct TYPE_2__ {int name; } ;
struct dsaf_device {TYPE_1__ ae_dev; int dev; } ;


 int FUNC_0 (struct dsaf_device*) ;
 int FUNC_1 (int ,char*,int ,int ,int) ;
 int FUNC_2 (struct dsaf_device*,struct dsaf_drv_mac_single_dest_entry*) ;
 int FUNC_3 (struct dsaf_device*,struct dsaf_drv_mac_single_dest_entry*) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(struct hns_mac_cb *VAR_0,
        u32 VAR_1, char *VAR_2, bool VAR_3)
{
 int VAR_4;
 struct dsaf_device *VAR_5 = VAR_0->dsaf_dev;
 struct dsaf_drv_mac_single_dest_entry VAR_6;

 if (!FUNC_0(VAR_5) && VAR_2) {
  FUNC_4(VAR_6.addr, VAR_2, sizeof(VAR_6.addr));
  VAR_6.in_vlan_id = 0;
  VAR_6.in_port_num = VAR_0->mac_id;
  VAR_6.port_num = VAR_1;

  if (!VAR_3)
   VAR_4 = FUNC_3(VAR_5, &VAR_6);
  else
   VAR_4 = FUNC_2(VAR_5, &VAR_6);
  if (VAR_4) {
   FUNC_1(VAR_5->dev,
    "set mac mc port failed, %s mac%d ret = %#x!\n",
    VAR_0->dsaf_dev->ae_dev.name,
    VAR_0->mac_id, VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
