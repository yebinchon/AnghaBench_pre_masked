
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct dsaf_tbl_tcam_ucast_cfg {int tbl_ucast_item_vld; int tbl_ucast_out_port; scalar_t__ tbl_ucast_dvc; scalar_t__ tbl_ucast_old_en; scalar_t__ tbl_ucast_mac_discard; } ;
struct dsaf_tbl_tcam_data {int tbl_tcam_data_low; int tbl_tcam_data_high; } ;
struct TYPE_12__ {int val; } ;
struct TYPE_9__ {int val; } ;
struct dsaf_drv_tbl_tcam_key {TYPE_6__ low; TYPE_3__ high; } ;
struct TYPE_10__ {int val; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_11__ {TYPE_4__ low; TYPE_2__ high; } ;
struct dsaf_drv_soft_mac_tbl {TYPE_5__ tcam_key; scalar_t__ index; } ;
struct dsaf_drv_priv {struct dsaf_drv_soft_mac_tbl* soft_mac_tbl; } ;
struct dsaf_drv_mac_single_dest_entry {int port_num; int addr; int in_port_num; int in_vlan_id; } ;
struct TYPE_7__ {int name; } ;
struct dsaf_device {TYPE_1__ ae_dev; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int ,char*,int ,int ,...) ;
 scalar_t__ FUNC_5 (struct dsaf_device*) ;
 scalar_t__ FUNC_6 (struct dsaf_device*) ;
 scalar_t__ FUNC_7 (struct dsaf_device*,struct dsaf_drv_tbl_tcam_key*) ;
 int FUNC_8 (struct dsaf_device*,struct dsaf_drv_tbl_tcam_key*,int ,int ,int ) ;
 int FUNC_9 (struct dsaf_device*,scalar_t__,struct dsaf_tbl_tcam_data*,struct dsaf_tbl_tcam_ucast_cfg*) ;

int FUNC_10(
 struct dsaf_device *VAR_2,
 struct dsaf_drv_mac_single_dest_entry *VAR_3)
{
 u16 VAR_4 = VAR_0;
 struct dsaf_drv_tbl_tcam_key VAR_5;
 struct dsaf_tbl_tcam_ucast_cfg VAR_6;
 struct dsaf_drv_priv *VAR_7 =
     (struct dsaf_drv_priv *)FUNC_5(VAR_2);
 struct dsaf_drv_soft_mac_tbl *VAR_8 = VAR_7->soft_mac_tbl;
 struct dsaf_tbl_tcam_data VAR_9;


 if (FUNC_0(VAR_3->addr) ||
     FUNC_1(VAR_3->addr) ||
     FUNC_2(VAR_3->addr)) {
  FUNC_4(VAR_2->dev, "set_uc %s Mac %pM err!\n",
   VAR_2->ae_dev.name, VAR_3->addr);
  return -VAR_1;
 }


 FUNC_8(VAR_2, &VAR_5, VAR_3->in_vlan_id,
        VAR_3->in_port_num, VAR_3->addr);


 VAR_4 = FUNC_7(VAR_2, &VAR_5);
 if (VAR_4 == VAR_0) {

  VAR_4 = FUNC_6(VAR_2);
  if (VAR_4 == VAR_0) {

   FUNC_4(VAR_2->dev,
    "set_uc_entry failed, %s Mac key(%#x:%#x)\n",
    VAR_2->ae_dev.name,
    VAR_5.high.val, VAR_5.low.val);
   return -VAR_1;
  }
 }

 FUNC_3(VAR_2->dev,
  "set_uc_entry, %s Mac key(%#x:%#x) entry_index%d\n",
  VAR_2->ae_dev.name, VAR_5.high.val,
  VAR_5.low.val, VAR_4);


 VAR_6.tbl_ucast_item_vld = 1;
 VAR_6.tbl_ucast_mac_discard = 0;
 VAR_6.tbl_ucast_old_en = 0;

 VAR_6.tbl_ucast_dvc = 0;
 VAR_6.tbl_ucast_out_port = VAR_3->port_num;
 VAR_9.tbl_tcam_data_high = VAR_5.high.val;
 VAR_9.tbl_tcam_data_low = VAR_5.low.val;

 FUNC_9(VAR_2, VAR_4, &VAR_9, &VAR_6);


 VAR_8 += VAR_4;
 VAR_8->index = VAR_4;
 VAR_8->tcam_key.high.val = VAR_5.high.val;
 VAR_8->tcam_key.low.val = VAR_5.low.val;

 return 0;
}
