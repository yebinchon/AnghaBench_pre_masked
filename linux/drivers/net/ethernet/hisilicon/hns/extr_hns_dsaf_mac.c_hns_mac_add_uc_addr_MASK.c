
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hns_mac_cb {int mac_id; struct dsaf_device* dsaf_dev; } ;
struct dsaf_drv_mac_single_dest_entry {int port_num; int in_port_num; int addr; } ;
struct dsaf_device {int dummy; } ;
typedef int mac_entry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dsaf_device*) ;
 int FUNC_1 (struct dsaf_device*,struct dsaf_drv_mac_single_dest_entry*) ;
 int FUNC_2 (struct hns_mac_cb*,int ,int *) ;
 int FUNC_3 (int ,unsigned char const*,int) ;
 int FUNC_4 (struct dsaf_drv_mac_single_dest_entry*,int ,int) ;

int FUNC_5(struct hns_mac_cb *VAR_1, u8 VAR_2,
   const unsigned char *VAR_3)
{
 struct dsaf_device *VAR_4 = VAR_1->dsaf_dev;
 struct dsaf_drv_mac_single_dest_entry VAR_5;
 int VAR_6;

 if (FUNC_0(VAR_4))
  return -VAR_0;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 FUNC_3(VAR_5.addr, VAR_3, sizeof(VAR_5.addr));
 VAR_5.in_port_num = VAR_1->mac_id;
 VAR_6 = FUNC_2(VAR_1, VAR_2, &VAR_5.port_num);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_4, &VAR_5);
}
