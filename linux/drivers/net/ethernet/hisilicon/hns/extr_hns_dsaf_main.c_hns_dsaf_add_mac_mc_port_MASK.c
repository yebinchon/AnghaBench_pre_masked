
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


typedef int u8 ;
typedef scalar_t__ u16 ;
struct dsaf_tbl_tcam_mcast_cfg {int tbl_mcast_item_vld; scalar_t__ tbl_mcast_old_en; int * tbl_mcast_port_msk; } ;
struct dsaf_tbl_tcam_data {int tbl_tcam_data_low; int tbl_tcam_data_high; } ;
struct TYPE_12__ {int val; } ;
struct TYPE_9__ {int val; } ;
struct dsaf_drv_tbl_tcam_key {TYPE_6__ low; TYPE_3__ high; } ;
struct TYPE_10__ {int val; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_11__ {TYPE_4__ low; TYPE_2__ high; } ;
struct dsaf_drv_soft_mac_tbl {TYPE_5__ tcam_key; scalar_t__ index; } ;
struct dsaf_drv_priv {struct dsaf_drv_soft_mac_tbl* soft_mac_tbl; } ;
struct dsaf_drv_mac_single_dest_entry {int in_port_num; int in_vlan_id; int port_num; int addr; } ;
struct TYPE_7__ {int name; } ;
struct dsaf_device {TYPE_1__ ae_dev; int dev; int dsaf_ver; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int *,int ) ;
 struct dsaf_drv_priv* FUNC_6 (struct dsaf_device*) ;
 scalar_t__ FUNC_7 (struct dsaf_device*) ;
 scalar_t__ FUNC_8 (struct dsaf_device*,struct dsaf_drv_tbl_tcam_key*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct dsaf_device*,struct dsaf_drv_tbl_tcam_key*,int,int,int *) ;
 int FUNC_11 (struct dsaf_device*,int,int *,int ) ;
 int FUNC_12 (struct dsaf_device*,scalar_t__,struct dsaf_tbl_tcam_data*,struct dsaf_tbl_tcam_data*,struct dsaf_tbl_tcam_mcast_cfg*) ;
 int FUNC_13 (struct dsaf_device*,scalar_t__,struct dsaf_tbl_tcam_data*,struct dsaf_tbl_tcam_mcast_cfg*) ;
 int FUNC_14 (struct dsaf_tbl_tcam_mcast_cfg*,int ,int) ;

int FUNC_15(struct dsaf_device *VAR_5,
        struct dsaf_drv_mac_single_dest_entry *VAR_6)
{
 u16 VAR_7 = VAR_1;
 struct dsaf_drv_tbl_tcam_key VAR_8;
 struct dsaf_drv_tbl_tcam_key VAR_9;
 struct dsaf_tbl_tcam_data *VAR_10 = ((void*)0);
 struct dsaf_tbl_tcam_mcast_cfg VAR_11;
 struct dsaf_drv_priv *VAR_12 = FUNC_6(VAR_5);
 struct dsaf_drv_soft_mac_tbl *VAR_13 = VAR_12->soft_mac_tbl;
 struct dsaf_tbl_tcam_data VAR_14;
 u8 VAR_15[VAR_4];
 int VAR_16;


 if (FUNC_1(VAR_6->addr)) {
  FUNC_3(VAR_5->dev, "set_entry failed,addr %pM!\n",
   VAR_6->addr);
  return -VAR_3;
 }

 FUNC_5(VAR_15, VAR_6->addr);
 if (!FUNC_0(VAR_5->dsaf_ver)) {
  u8 VAR_17[VAR_4];


  FUNC_11(VAR_5, VAR_6->in_port_num,
           VAR_17, VAR_6->addr);
  FUNC_9(VAR_15, VAR_17);


  FUNC_10(VAR_5, &VAR_9,
         0x0,
         0xff,
         VAR_17);

  VAR_10 = (struct dsaf_tbl_tcam_data *)(&VAR_9);
 }


 FUNC_10(
  VAR_5, &VAR_8, VAR_6->in_vlan_id,
  VAR_6->in_port_num, VAR_15);

 FUNC_14(&VAR_11, 0, sizeof(struct dsaf_tbl_tcam_mcast_cfg));


 VAR_7 = FUNC_8(VAR_5, &VAR_8);
 if (VAR_7 == VAR_1) {

  VAR_7 = FUNC_7(VAR_5);
  if (VAR_7 == VAR_1) {

   FUNC_3(VAR_5->dev,
    "set_uc_entry failed, %s Mac key(%#x:%#x)\n",
    VAR_5->ae_dev.name, VAR_8.high.val,
    VAR_8.low.val);
   return -VAR_3;
  }
 } else {

  FUNC_13(VAR_5, VAR_7, &VAR_14,
         &VAR_11);
 }


 if (VAR_6->port_num < VAR_2) {
  VAR_16 = VAR_6->port_num;
 } else if (VAR_6->port_num >= VAR_0) {
  VAR_16 = VAR_6->port_num -
   VAR_0 + VAR_2;
 } else {
  FUNC_3(VAR_5->dev,
   "%s,pnum(%d)error,key(%#x:%#x)\n",
   VAR_5->ae_dev.name, VAR_6->port_num,
   VAR_8.high.val, VAR_8.low.val);
  return -VAR_3;
 }
 FUNC_4(VAR_11.tbl_mcast_port_msk[VAR_16 / 32], VAR_16 % 32, 1);
 VAR_11.tbl_mcast_old_en = 0;
 VAR_11.tbl_mcast_item_vld = 1;

 FUNC_2(VAR_5->dev,
  "set_uc_entry, %s Mac key(%#x:%#x) entry_index%d\n",
  VAR_5->ae_dev.name, VAR_8.high.val,
  VAR_8.low.val, VAR_7);

 VAR_14.tbl_tcam_data_high = VAR_8.high.val;
 VAR_14.tbl_tcam_data_low = VAR_8.low.val;


 FUNC_12(VAR_5, VAR_7, &VAR_14,
        VAR_10, &VAR_11);


 VAR_13 += VAR_7;
 VAR_13->index = VAR_7;
 VAR_13->tcam_key.high.val = VAR_8.high.val;
 VAR_13->tcam_key.low.val = VAR_8.low.val;

 return 0;
}
