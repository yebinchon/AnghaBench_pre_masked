
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct dsaf_tbl_tcam_ucast_cfg {scalar_t__ tbl_ucast_out_port; } ;
struct dsaf_tbl_tcam_data {int dummy; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_5__ {int val; } ;
struct dsaf_drv_tbl_tcam_key {TYPE_3__ low; TYPE_2__ high; } ;
struct dsaf_drv_mac_single_dest_entry {scalar_t__ port_num; int addr; int in_port_num; int in_vlan_id; } ;
struct TYPE_4__ {int name; } ;
struct dsaf_device {TYPE_1__ ae_dev; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct dsaf_device*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct dsaf_device*,struct dsaf_drv_tbl_tcam_key*) ;
 int FUNC_5 (struct dsaf_device*,struct dsaf_drv_tbl_tcam_key*,int ,int ,int ) ;
 int FUNC_6 (struct dsaf_device*,scalar_t__,struct dsaf_tbl_tcam_data*,struct dsaf_tbl_tcam_ucast_cfg*) ;
 int FUNC_7 (int ) ;

int FUNC_8(
 struct dsaf_device *VAR_3,
 struct dsaf_drv_mac_single_dest_entry *VAR_4)
{
 u16 VAR_5 = VAR_0;
 struct dsaf_tbl_tcam_ucast_cfg VAR_6;
 struct dsaf_drv_tbl_tcam_key VAR_7;


 if (!FUNC_7(VAR_4->addr)) {
  FUNC_1(VAR_3->dev, "rm_uc_addr %s Mac %pM err!\n",
   VAR_3->ae_dev.name, VAR_4->addr);
  return -VAR_2;
 }


 FUNC_5(VAR_3, &VAR_7, VAR_4->in_vlan_id,
        VAR_4->in_port_num, VAR_4->addr);

 VAR_5 = FUNC_4(VAR_3, &VAR_7);
 if (VAR_5 == VAR_0) {

  FUNC_2(VAR_3->dev,
    "rm_uc_addr no tcam, %s Mac key(%#x:%#x)\n",
    VAR_3->ae_dev.name,
    VAR_7.high.val, VAR_7.low.val);
  return 0;
 }

 FUNC_0(VAR_3->dev,
  "rm_uc_addr, %s Mac key(%#x:%#x) entry_index%d\n",
  VAR_3->ae_dev.name, VAR_7.high.val,
  VAR_7.low.val, VAR_5);

 FUNC_6(
   VAR_3, VAR_5,
   (struct dsaf_tbl_tcam_data *)&VAR_7,
   &VAR_6);


 if (VAR_4->port_num != VAR_6.tbl_ucast_out_port)
  return -VAR_1;

 return FUNC_3(VAR_3,
          VAR_4->in_vlan_id,
          VAR_4->in_port_num,
          VAR_4->addr);
}
