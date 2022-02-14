
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct TYPE_2__ {int bt_real_fw_ver; int bt_fw_ver; int bt_supported_feature; int bt_supported_version; int bt_ant_det_val; int bt_ble_scan_para; int bt_ble_scan_type; void* bt_forb_slot_val; void* bt_device_info; int afh_map_h; void* afh_map_m; void* afh_map_l; } ;
struct btc_coexist {int bt_mp_comp; TYPE_1__ bt_info; } ;
typedef int __le32 ;
typedef int __le16 ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 struct btc_coexist* FUNC_4 (struct rtl_priv*) ;

void FUNC_5(struct rtl_priv *VAR_2, u8 *VAR_3, u8 VAR_4)
{
 struct btc_coexist *VAR_5 = FUNC_4(VAR_2);
 u8 VAR_6, VAR_7;
 u16 VAR_8;
 u8 VAR_9;
 u8 *VAR_10;

 if (!VAR_5)
  return;

 if ((VAR_4 < 4) || (!VAR_3))
  return;

 VAR_6 = VAR_3[0];

 if (VAR_6 != 1)
  return;

 VAR_7 = VAR_3[2] >> 4;
 VAR_10 = &VAR_3[3];


 switch (VAR_7) {
 case 128:
  VAR_8 = VAR_3[3] | (VAR_3[4] << 8);
  VAR_9 = VAR_3[5];

  VAR_5->bt_info.bt_real_fw_ver = VAR_8;
  VAR_5->bt_info.bt_fw_ver = VAR_9;
  break;
 case 136:
  VAR_5->bt_info.afh_map_l = FUNC_3(*(__le32 *)VAR_10);
  break;
 case 135:
  VAR_5->bt_info.afh_map_m = FUNC_3(*(__le32 *)VAR_10);
  break;
 case 137:
  VAR_5->bt_info.afh_map_h = FUNC_2(*(__le16 *)VAR_10);
  break;
 case 131:
  VAR_5->bt_info.bt_supported_feature = VAR_3[3] |
         (VAR_3[4] << 8);
  break;
 case 130:
  VAR_5->bt_info.bt_supported_version = VAR_3[3] |
         (VAR_3[4] << 8);
  break;
 case 134:
  VAR_5->bt_info.bt_ant_det_val = VAR_3[3];
  break;
 case 133:
  VAR_5->bt_info.bt_ble_scan_para = VAR_3[3] |
            (VAR_3[4] << 8) |
            (VAR_3[5] << 16) |
            (VAR_3[6] << 24);
  break;
 case 132:
  VAR_5->bt_info.bt_ble_scan_type = VAR_3[3];
  break;
 case 129:
  VAR_5->bt_info.bt_device_info =
      FUNC_3(*(__le32 *)VAR_10);
  break;
 case 138:
  VAR_5->bt_info.bt_forb_slot_val =
      FUNC_3(*(__le32 *)VAR_10);
  break;
 }

 FUNC_0(VAR_2, VAR_0, VAR_1,
   "btmpinfo complete req_num=%d\n", VAR_7);

 FUNC_1(&VAR_5->bt_mp_comp);
}
