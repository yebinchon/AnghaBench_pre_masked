
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_cmd_hdr {int info1; int cmd_id; } ;
struct wmi {int dummy; } ;
struct sk_buff {int* data; int len; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int *,char*,int*,int ) ;
 int FUNC_2 (struct wmi*,int*,int ) ;
 int FUNC_3 (struct wmi*,int*,int ) ;
 int FUNC_4 (struct wmi*,int*,int ) ;
 int FUNC_5 (struct wmi*,struct sk_buff*) ;
 int FUNC_6 (struct wmi*,int*,int ) ;
 int FUNC_7 (struct wmi*,int*,int ) ;
 int FUNC_8 (struct wmi*,int*,int ) ;
 int FUNC_9 (int*,int ) ;
 int FUNC_10 (int*,int ) ;
 int FUNC_11 (struct wmi*,int*,int ) ;
 int FUNC_12 (struct wmi*,int,int,int*,int ) ;
 int FUNC_13 (struct wmi*,int*,int ) ;
 int FUNC_14 (struct wmi*,int*,int ) ;
 int FUNC_15 (struct wmi*,int*,int ) ;
 int FUNC_16 (struct wmi*,int*,int ) ;
 int FUNC_17 (struct wmi*,int*,int ) ;
 int FUNC_18 (struct wmi*,int*,int ) ;
 int FUNC_19 (struct wmi*,int*,int ) ;
 int FUNC_20 (struct wmi*,int*,int ) ;
 int FUNC_21 (int*,int ) ;
 int FUNC_22 (struct wmi*,int*,int ) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_26(struct wmi *VAR_3, struct sk_buff *VAR_4)
{
 struct wmi_cmd_hdr *VAR_5;
 int VAR_6 = 0;
 u32 VAR_7;
 u16 VAR_8;
 u8 VAR_9;
 u8 *VAR_10;

 VAR_5 = (struct wmi_cmd_hdr *) VAR_4->data;
 VAR_8 = FUNC_24(VAR_5->cmd_id);
 VAR_9 = FUNC_24(VAR_5->info1) & VAR_2;

 FUNC_25(VAR_4, sizeof(struct wmi_cmd_hdr));
 VAR_10 = VAR_4->data;
 VAR_7 = VAR_4->len;

 FUNC_0(VAR_0, "wmi rx id %d len %d\n", VAR_8, VAR_7);
 FUNC_1(VAR_1, ((void*)0), "wmi rx ",
   VAR_10, VAR_7);

 switch (VAR_8) {
 case 152:
  FUNC_0(VAR_0, "WMI_GET_BITRATE_CMDID\n");
  VAR_6 = FUNC_3(VAR_3, VAR_10, VAR_7);
  break;
 case 151:
  FUNC_0(VAR_0, "WMI_GET_CHANNEL_LIST_CMDID\n");
  VAR_6 = FUNC_4(VAR_3, VAR_10, VAR_7);
  break;
 case 147:
  FUNC_0(VAR_0, "WMI_GET_TX_PWR_CMDID\n");
  VAR_6 = FUNC_22(VAR_3, VAR_10, VAR_7);
  break;
 case 139:
  FUNC_0(VAR_0, "WMI_READY_EVENTID\n");
  VAR_6 = FUNC_15(VAR_3, VAR_10, VAR_7);
  break;
 case 141:
  FUNC_0(VAR_0, "WMI_PEER_NODE_EVENTID\n");
  VAR_6 = FUNC_11(VAR_3, VAR_10, VAR_7);
  break;
 case 138:
  FUNC_0(VAR_0, "WMI_REGDOMAIN_EVENTID\n");
  FUNC_16(VAR_3, VAR_10, VAR_7);
  break;
 case 140:
  FUNC_0(VAR_0, "WMI_PSTREAM_TIMEOUT_EVENTID\n");
  VAR_6 = FUNC_13(VAR_3, VAR_10, VAR_7);
  break;
 case 155:
  FUNC_0(VAR_0, "WMI_CMDERROR_EVENTID\n");
  VAR_6 = FUNC_6(VAR_3, VAR_10, VAR_7);
  break;
 case 133:
  FUNC_0(VAR_0, "WMI_RSSI_THRESHOLD_EVENTID\n");
  VAR_6 = FUNC_18(VAR_3, VAR_10, VAR_7);
  break;
 case 154:
  FUNC_0(VAR_0, "WMI_ERROR_REPORT_EVENTID\n");
  break;
 case 144:
  FUNC_0(VAR_0, "WMI_OPT_RX_FRAME_EVENTID\n");

  break;
 case 134:
  FUNC_0(VAR_0, "WMI_REPORT_ROAM_TBL_EVENTID\n");
  VAR_6 = FUNC_17(VAR_3, VAR_10, VAR_7);
  break;
 case 153:
  FUNC_0(VAR_0, "WMI_EXTENSION_EVENTID\n");
  VAR_6 = FUNC_5(VAR_3, VAR_4);
  break;
 case 156:
  FUNC_0(VAR_0, "WMI_CHANNEL_CHANGE_EVENTID\n");
  break;
 case 135:
  FUNC_0(VAR_0, "WMI_REPORT_ROAM_DATA_EVENTID\n");
  break;
 case 130:
  FUNC_0(VAR_0, "WMI_TEST_EVENTID\n");
  VAR_6 = FUNC_20(VAR_3, VAR_10, VAR_7);
  break;
 case 150:
  FUNC_0(VAR_0, "WMI_GET_FIXRATES_CMDID\n");
  VAR_6 = FUNC_14(VAR_3, VAR_10, VAR_7);
  break;
 case 128:
  FUNC_0(VAR_0, "WMI_TX_RETRY_ERR_EVENTID\n");
  break;
 case 131:
  FUNC_0(VAR_0, "WMI_SNR_THRESHOLD_EVENTID\n");
  VAR_6 = FUNC_19(VAR_3, VAR_10, VAR_7);
  break;
 case 145:
  FUNC_0(VAR_0, "WMI_LQ_THRESHOLD_EVENTID\n");
  break;
 case 157:
  FUNC_0(VAR_0, "WMI_APLIST_EVENTID\n");
  VAR_6 = FUNC_2(VAR_3, VAR_10, VAR_7);
  break;
 case 149:
  FUNC_0(VAR_0, "WMI_GET_KEEPALIVE_CMDID\n");
  VAR_6 = FUNC_8(VAR_3, VAR_10, VAR_7);
  break;
 case 146:
  FUNC_0(VAR_0, "WMI_GET_WOW_LIST_EVENTID\n");
  break;
 case 148:
  FUNC_0(VAR_0, "WMI_GET_PMKID_LIST_EVENTID\n");
  VAR_6 = FUNC_7(VAR_3, VAR_10, VAR_7);
  break;
 case 132:
  FUNC_0(VAR_0, "WMI_SET_PARAMS_REPLY_EVENTID\n");
  break;
 case 158:
  FUNC_0(VAR_0, "WMI_ADDBA_RESP_EVENTID\n");
  break;
 case 137:
  FUNC_0(VAR_0,
      "WMI_REPORT_BTCOEX_CONFIG_EVENTID\n");
  break;
 case 136:
  FUNC_0(VAR_0,
      "WMI_REPORT_BTCOEX_STATS_EVENTID\n");
  break;
 case 129:
  FUNC_0(VAR_0, "WMI_TX_COMPLETE_EVENTID\n");
  VAR_6 = FUNC_21(VAR_10, VAR_7);
  break;
 case 143:
  FUNC_0(VAR_0, "WMI_P2P_CAPABILITIES_EVENTID\n");
  VAR_6 = FUNC_9(VAR_10, VAR_7);
  break;
 case 142:
  FUNC_0(VAR_0, "WMI_P2P_INFO_EVENTID\n");
  VAR_6 = FUNC_10(VAR_10, VAR_7);
  break;
 default:

  VAR_6 = FUNC_12(VAR_3, VAR_9, VAR_8, VAR_10, VAR_7);
  break;
 }

 FUNC_23(VAR_4);
 return VAR_6;
}
