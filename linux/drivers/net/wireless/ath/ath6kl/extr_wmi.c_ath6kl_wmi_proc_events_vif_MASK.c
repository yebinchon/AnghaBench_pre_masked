
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi {int parent_dev; } ;
struct ath6kl_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 struct ath6kl_vif* FUNC_1 (int ,int) ;
 int FUNC_2 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_3 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_4 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_5 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_6 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_7 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_8 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_9 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_10 (struct wmi*,struct ath6kl_vif*) ;
 int FUNC_11 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_12 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_13 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_14 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_15 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_16 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_17 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_18 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_19 (struct wmi*,int *,int ,struct ath6kl_vif*) ;
 int FUNC_20 (struct wmi*,int *,int ,struct ath6kl_vif*) ;

__attribute__((used)) static int FUNC_21(struct wmi *VAR_2, u16 VAR_3, u16 VAR_4,
     u8 *VAR_5, u32 VAR_6)
{
 struct ath6kl_vif *VAR_7;

 VAR_7 = FUNC_1(VAR_2->parent_dev, VAR_3);
 if (!VAR_7) {
  FUNC_0(VAR_0,
      "Wmi event for unavailable vif, vif_index:%d\n",
       VAR_3);
  return -VAR_1;
 }

 switch (VAR_4) {
 case 142:
  FUNC_0(VAR_0, "WMI_CONNECT_EVENTID\n");
  return FUNC_6(VAR_2, VAR_5, VAR_6, VAR_7);
 case 140:
  FUNC_0(VAR_0, "WMI_DISCONNECT_EVENTID\n");
  return FUNC_8(VAR_2, VAR_5, VAR_6, VAR_7);
 case 130:
  FUNC_0(VAR_0, "WMI_TKIP_MICERR_EVENTID\n");
  return FUNC_18(VAR_2, VAR_5, VAR_6, VAR_7);
 case 145:
  FUNC_0(VAR_0, "WMI_BSSINFO_EVENTID\n");
  return FUNC_3(VAR_2, VAR_5, VAR_6, VAR_7);
 case 138:
  FUNC_0(VAR_0, "WMI_NEIGHBOR_REPORT_EVENTID\n");
  return FUNC_11(VAR_2, VAR_5, VAR_6,
          VAR_7);
 case 132:
  FUNC_0(VAR_0, "WMI_SCAN_COMPLETE_EVENTID\n");
  return FUNC_16(VAR_2, VAR_5, VAR_6, VAR_7);
 case 135:
  FUNC_0(VAR_0, "WMI_REPORT_STATISTICS_EVENTID\n");
  return FUNC_17(VAR_2, VAR_5, VAR_6, VAR_7);
 case 144:
  FUNC_0(VAR_0, "WMI_CAC_EVENTID\n");
  return FUNC_4(VAR_2, VAR_5, VAR_6, VAR_7);
 case 137:
  FUNC_0(VAR_0, "WMI_PSPOLL_EVENTID\n");
  return FUNC_12(VAR_2, VAR_5, VAR_6, VAR_7);
 case 139:
  FUNC_0(VAR_0, "WMI_DTIMEXPIRY_EVENTID\n");
  return FUNC_9(VAR_2, VAR_5, VAR_6, VAR_7);
 case 146:
  FUNC_0(VAR_0, "WMI_ADDBA_REQ_EVENTID\n");
  return FUNC_2(VAR_2, VAR_5, VAR_6, VAR_7);
 case 141:
  FUNC_0(VAR_0, "WMI_DELBA_REQ_EVENTID\n");
  return FUNC_7(VAR_2, VAR_5, VAR_6, VAR_7);
 case 131:
  FUNC_0(VAR_0,
      "WMI_SET_HOST_SLEEP_MODE_CMD_PROCESSED_EVENTID");
  return FUNC_10(VAR_2, VAR_7);
 case 136:
  FUNC_0(VAR_0, "WMI_REMAIN_ON_CHNL_EVENTID\n");
  return FUNC_13(VAR_2, VAR_5, VAR_6, VAR_7);
 case 143:
  FUNC_0(VAR_0,
      "WMI_CANCEL_REMAIN_ON_CHNL_EVENTID\n");
  return FUNC_5(VAR_2, VAR_5,
         VAR_6, VAR_7);
 case 128:
  FUNC_0(VAR_0, "WMI_TX_STATUS_EVENTID\n");
  return FUNC_19(VAR_2, VAR_5, VAR_6, VAR_7);
 case 133:
  FUNC_0(VAR_0, "WMI_RX_PROBE_REQ_EVENTID\n");
  return FUNC_15(VAR_2, VAR_5, VAR_6, VAR_7);
 case 134:
  FUNC_0(VAR_0, "WMI_RX_ACTION_EVENTID\n");
  return FUNC_14(VAR_2, VAR_5, VAR_6, VAR_7);
 case 129:
  FUNC_0(VAR_0, "WMI_TXE_NOTIFY_EVENTID\n");
  return FUNC_20(VAR_2, VAR_5, VAR_6, VAR_7);
 default:
  FUNC_0(VAR_0, "unknown cmd id 0x%x\n", VAR_4);
  return -VAR_1;
 }

 return 0;
}
