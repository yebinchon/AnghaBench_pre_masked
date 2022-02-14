
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_cmd_hdr {int cmd_id; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_10_4_event_id { ____Placeholder_wmi_10_4_event_id } wmi_10_4_event_id ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int) ;
 int FUNC_3 (struct ath10k*,int,struct sk_buff*) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 int FUNC_5 (struct ath10k*,struct sk_buff*) ;
 int FUNC_6 (struct ath10k*,struct sk_buff*) ;
 int FUNC_7 (struct ath10k*,struct sk_buff*) ;
 int FUNC_8 (struct ath10k*,struct sk_buff*) ;
 int FUNC_9 (struct ath10k*,struct sk_buff*) ;
 int FUNC_10 (struct ath10k*,struct sk_buff*) ;
 int FUNC_11 (struct ath10k*,struct sk_buff*) ;
 int FUNC_12 (struct ath10k*,struct sk_buff*) ;
 int FUNC_13 (struct ath10k*,struct sk_buff*) ;
 int FUNC_14 (struct ath10k*,struct sk_buff*) ;
 int FUNC_15 (struct ath10k*,struct sk_buff*) ;
 int FUNC_16 (struct ath10k*,struct sk_buff*) ;
 int FUNC_17 (struct ath10k*,struct sk_buff*) ;
 int FUNC_18 (struct ath10k*,struct sk_buff*) ;
 int FUNC_19 (struct ath10k*,struct sk_buff*) ;
 int FUNC_20 (struct ath10k*,struct sk_buff*) ;
 int FUNC_21 (struct ath10k*,struct sk_buff*) ;
 int FUNC_22 (struct ath10k*,struct sk_buff*) ;
 int FUNC_23 (struct ath10k*,struct sk_buff*) ;
 int FUNC_24 (struct ath10k*,struct sk_buff*) ;
 int FUNC_25 (struct ath10k*,struct sk_buff*) ;
 int FUNC_26 (struct ath10k*,struct sk_buff*) ;
 int FUNC_27 (struct ath10k*,struct sk_buff*) ;
 int FUNC_28 (struct ath10k*) ;
 int FUNC_29 (struct sk_buff*) ;
 int FUNC_30 (struct sk_buff*,int) ;
 int FUNC_31 (struct ath10k*,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_32(struct ath10k *VAR_2, struct sk_buff *VAR_3)
{
 struct wmi_cmd_hdr *VAR_4;
 enum wmi_10_4_event_id VAR_5;
 bool VAR_6;

 VAR_4 = (struct wmi_cmd_hdr *)VAR_3->data;
 VAR_5 = FUNC_0(FUNC_1(VAR_4->cmd_id), VAR_1);

 if (!FUNC_30(VAR_3, sizeof(struct wmi_cmd_hdr)))
  goto out;

 FUNC_31(VAR_2, VAR_5, VAR_3->data, VAR_3->len);

 VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_3);





 if (VAR_6 && VAR_5 != 138) {
  FUNC_2(VAR_2, VAR_0,
      "wmi testmode consumed 0x%x\n", VAR_5);
  goto out;
 }

 switch (VAR_5) {
 case 147:
  FUNC_11(VAR_2, VAR_3);

  return;
 case 149:
  FUNC_9(VAR_2, VAR_3);
  break;
 case 152:
  FUNC_6(VAR_2, VAR_3);
  FUNC_28(VAR_2);
  break;
 case 135:
  FUNC_20(VAR_2, VAR_3);
  return;
 case 136:
  FUNC_19(VAR_2, VAR_3);
  FUNC_28(VAR_2);
  break;
 case 154:
  FUNC_5(VAR_2, VAR_3);
  break;
 case 139:
  FUNC_16(VAR_2, VAR_3);
  break;
 case 138:
  FUNC_17(VAR_2, VAR_3);
  FUNC_28(VAR_2);
  break;
 case 141:
  FUNC_14(VAR_2, VAR_3);
  break;
 case 137:
  FUNC_18(VAR_2, VAR_3);
  FUNC_28(VAR_2);
  break;
 case 148:
  FUNC_10(VAR_2, VAR_3);
  break;
 case 134:
  FUNC_21(VAR_2, VAR_3);
  break;
 case 151:
  FUNC_7(VAR_2, VAR_3);
  FUNC_28(VAR_2);
  break;
 case 131:
  FUNC_25(VAR_2, VAR_3);
  FUNC_28(VAR_2);
  break;
 case 130:
  FUNC_26(VAR_2, VAR_3);
  FUNC_28(VAR_2);
  break;
 case 128:
 case 142:
 case 129:
 case 153:
  FUNC_2(VAR_2, VAR_0,
      "received event id %d not implemented\n", VAR_5);
  break;
 case 132:
  FUNC_24(VAR_2, VAR_3);
  break;
 case 145:
  FUNC_22(VAR_2, VAR_3);
  break;
 case 146:
  FUNC_12(VAR_2, VAR_3);
  break;
 case 144:
  FUNC_13(VAR_2, VAR_3);
  break;
 case 133:
  FUNC_27(VAR_2, VAR_3);
  break;
 case 143:
  FUNC_23(VAR_2, VAR_3);
  break;
 case 150:
  FUNC_8(VAR_2, VAR_3);
  break;
 case 140:
  FUNC_15(VAR_2, VAR_3);
  break;
 default:
  FUNC_4(VAR_2, "Unknown eventid: %d\n", VAR_5);
  break;
 }

out:
 FUNC_29(VAR_3);
}
