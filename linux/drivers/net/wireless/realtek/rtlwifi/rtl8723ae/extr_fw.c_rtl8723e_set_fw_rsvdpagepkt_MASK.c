
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
 int VAR_11 ;
 struct sk_buff* FUNC_11 (int) ;
 int * VAR_12 ;
 int FUNC_12 (struct ieee80211_hw*,int ,int,int *) ;
 int FUNC_13 (struct ieee80211_hw*,struct sk_buff*) ;
 struct rtl_mac* FUNC_14 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_15 (struct ieee80211_hw*) ;
 int FUNC_16 (struct sk_buff*,int **,int) ;

void FUNC_17(struct ieee80211_hw *VAR_13, bool VAR_14)
{
 struct rtl_priv *VAR_15 = FUNC_15(VAR_13);
 struct rtl_mac *VAR_16 = FUNC_14(FUNC_15(VAR_13));
 struct sk_buff *VAR_17 = ((void*)0);
 u32 VAR_18;
 bool VAR_19;
 u8 VAR_20[3] = { 0 };
 bool VAR_21 = 0;
 u8 *VAR_22;
 u8 *VAR_23;
 u8 *VAR_24;
 u8 *VAR_25;





 VAR_22 = &VAR_12[VAR_0 * 128];
 FUNC_3(VAR_22, VAR_16->mac_addr);
 FUNC_4(VAR_22, VAR_16->bssid);





 VAR_23 = &VAR_12[VAR_10 * 128];
 FUNC_5(VAR_23, (VAR_16->assoc_id | 0xc000));
 FUNC_6(VAR_23, VAR_16->bssid);
 FUNC_7(VAR_23, VAR_16->mac_addr);

 FUNC_10(VAR_20, VAR_10);





 VAR_24 = &VAR_12[VAR_8 * 128];
 FUNC_2(VAR_24, VAR_16->bssid);
 FUNC_3(VAR_24, VAR_16->mac_addr);
 FUNC_4(VAR_24, VAR_16->bssid);

 FUNC_8(VAR_20, VAR_8);





 VAR_25 = &VAR_12[VAR_9 * 128];
 FUNC_2(VAR_25, VAR_16->bssid);
 FUNC_3(VAR_25, VAR_16->mac_addr);
 FUNC_4(VAR_25, VAR_16->bssid);

 FUNC_9(VAR_20, VAR_9);

 VAR_18 = VAR_11;

 FUNC_0(VAR_15, VAR_1, VAR_5,
        "rtl8723e_set_fw_rsvdpagepkt(): HW_VAR_SET_TX_CMD: ALL\n",
        &VAR_12[0], VAR_18);
 FUNC_0(VAR_15, VAR_1, VAR_4,
        "rtl8723e_set_fw_rsvdpagepkt(): HW_VAR_SET_TX_CMD: ALL\n",
        VAR_20, 3);

 VAR_17 = FUNC_11(VAR_18);
 if (!VAR_17)
  return;
 FUNC_16(VAR_17, &VAR_12, VAR_18);

 VAR_19 = FUNC_13(VAR_13, VAR_17);

 if (VAR_19)
  VAR_21 = 1;

 if (VAR_21) {
  FUNC_1(VAR_15, VAR_3, VAR_5,
    "Set RSVD page location to Fw.\n");
  FUNC_0(VAR_15, VAR_1, VAR_4,
         "H2C_RSVDPAGE:\n",
         VAR_20, 3);
  FUNC_12(VAR_13, VAR_7,
          sizeof(VAR_20), VAR_20);
 } else
  FUNC_1(VAR_15, VAR_2, VAR_6,
    "Set RSVD page location to Fw FAIL!!!!!!.\n");
}
