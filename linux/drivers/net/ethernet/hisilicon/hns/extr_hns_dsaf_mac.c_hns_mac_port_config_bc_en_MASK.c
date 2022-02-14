
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hns_mac_cb {scalar_t__ mac_type; int mac_id; struct dsaf_device* dsaf_dev; } ;
struct dsaf_drv_mac_single_dest_entry {int port_num; int in_port_num; int in_vlan_id; int addr; } ;
struct dsaf_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dsaf_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dsaf_device*,struct dsaf_drv_mac_single_dest_entry*) ;
 int FUNC_3 (struct dsaf_device*,struct dsaf_drv_mac_single_dest_entry*) ;

__attribute__((used)) static int FUNC_4(struct hns_mac_cb *VAR_1,
         u32 VAR_2, u16 VAR_3, bool VAR_4)
{
 int VAR_5;
 struct dsaf_device *VAR_6 = VAR_1->dsaf_dev;
 struct dsaf_drv_mac_single_dest_entry VAR_7;


 if (VAR_1->mac_type == VAR_0)
  return 0;

 if (!FUNC_0(VAR_6)) {
  FUNC_1(VAR_7.addr);
  VAR_7.in_vlan_id = VAR_3;
  VAR_7.in_port_num = VAR_1->mac_id;
  VAR_7.port_num = VAR_2;

  if (!VAR_4)
   VAR_5 = FUNC_3(VAR_6, &VAR_7);
  else
   VAR_5 = FUNC_2(VAR_6, &VAR_7);
  return VAR_5;
 }

 return 0;
}
