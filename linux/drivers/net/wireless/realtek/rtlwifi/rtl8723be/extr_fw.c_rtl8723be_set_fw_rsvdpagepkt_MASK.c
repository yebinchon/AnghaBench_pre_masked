
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u1rsvdpageloc ;
struct sk_buff {int dummy; } ;
struct rtl_priv {int dummy; } ;
struct rtl_mac {int assoc_id; int bssid; int mac_addr; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int *,int) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int VAR_13 ;
 struct sk_buff* FUNC_13 (int) ;
 int * VAR_14 ;
 int FUNC_14 (struct ieee80211_hw*,int ,int,int *) ;
 int FUNC_15 (struct ieee80211_hw*,struct sk_buff*) ;
 struct rtl_mac* FUNC_16 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_17 (struct ieee80211_hw*) ;
 int FUNC_18 (struct sk_buff*,int **,int) ;

void FUNC_19(struct ieee80211_hw *VAR_15,
      bool VAR_16)
{
 struct rtl_priv *VAR_17 = FUNC_17(VAR_15);
 struct rtl_mac *VAR_18 = FUNC_16(FUNC_17(VAR_15));
 struct sk_buff *VAR_19 = ((void*)0);

 u32 VAR_20;
 bool VAR_21;
 u8 VAR_22[5] = { 0 };
 bool VAR_23 = 0;

 u8 *VAR_24;
 u8 *VAR_25;
 u8 *VAR_26;
 u8 *VAR_27;
 u8 *VAR_28;
 u8 *VAR_29;




 VAR_24 = &VAR_14[VAR_0 * 128];
 FUNC_3(VAR_24, VAR_18->mac_addr);
 FUNC_4(VAR_24, VAR_18->bssid);





 VAR_25 = &VAR_14[VAR_11 * 128];
 FUNC_5(VAR_25, (VAR_18->assoc_id | 0xc000));
 FUNC_6(VAR_25, VAR_18->bssid);
 FUNC_7(VAR_25, VAR_18->mac_addr);

 FUNC_11(VAR_22, VAR_11);





 VAR_26 = &VAR_14[VAR_9 * 128];
 FUNC_2(VAR_26, VAR_18->bssid);
 FUNC_3(VAR_26, VAR_18->mac_addr);
 FUNC_4(VAR_26, VAR_18->bssid);

 FUNC_9(VAR_22, VAR_9);





 VAR_27 = &VAR_14[VAR_10 * 128];
 FUNC_2(VAR_27, VAR_18->bssid);
 FUNC_3(VAR_27, VAR_18->mac_addr);
 FUNC_4(VAR_27, VAR_18->bssid);

 FUNC_10(VAR_22, VAR_10);





 VAR_28 = &VAR_14[VAR_12 * 128];
 FUNC_2(VAR_28, VAR_18->bssid);
 FUNC_3(VAR_28, VAR_18->mac_addr);
 FUNC_4(VAR_28, VAR_18->bssid);

 FUNC_12(VAR_22, VAR_12);





 VAR_29 = &VAR_14[VAR_1 * 128];
 FUNC_2(VAR_29, VAR_18->bssid);
 FUNC_3(VAR_29, VAR_18->mac_addr);
 FUNC_4(VAR_29, VAR_18->bssid);

 FUNC_8(VAR_22, VAR_1);

 VAR_20 = VAR_13;

 FUNC_0(VAR_17, VAR_2, VAR_6,
        "rtl8723be_set_fw_rsvdpagepkt(): HW_VAR_SET_TX_CMD: ALL\n",
        &VAR_14[0], VAR_20);
 FUNC_0(VAR_17, VAR_2, VAR_5,
        "rtl8723be_set_fw_rsvdpagepkt(): HW_VAR_SET_TX_CMD: ALL\n",
        VAR_22, sizeof(VAR_22));

 VAR_19 = FUNC_13(VAR_20);
 if (!VAR_19)
  return;
 FUNC_18(VAR_19, &VAR_14, VAR_20);

 VAR_21 = FUNC_15(VAR_15, VAR_19);

 if (VAR_21)
  VAR_23 = 1;

 if (VAR_23) {
  FUNC_1(VAR_17, VAR_4, VAR_6,
    "Set RSVD page location to Fw.\n");
  FUNC_0(VAR_17, VAR_2, VAR_5, "H2C_RSVDPAGE:\n",
         VAR_22, sizeof(VAR_22));
  FUNC_14(VAR_15, VAR_8,
           sizeof(VAR_22), VAR_22);
 } else
  FUNC_1(VAR_17, VAR_3, VAR_7,
    "Set RSVD page location to Fw FAIL!!!!!!.\n");
}
