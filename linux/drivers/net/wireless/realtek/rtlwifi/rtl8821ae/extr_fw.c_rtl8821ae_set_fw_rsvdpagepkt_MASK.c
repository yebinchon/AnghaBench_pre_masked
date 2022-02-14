
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u1rsvdpageloc2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int *,int) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int VAR_16 ;
 struct sk_buff* FUNC_15 (int) ;
 int * VAR_17 ;
 int FUNC_16 (struct ieee80211_hw*,int ,int,int *) ;
 int FUNC_17 (struct ieee80211_hw*,struct sk_buff*) ;
 struct rtl_mac* FUNC_18 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_19 (struct ieee80211_hw*) ;
 int FUNC_20 (struct sk_buff*,int **,int) ;

void FUNC_21(struct ieee80211_hw *VAR_18,
      bool VAR_19, bool VAR_20)
{
 struct rtl_priv *VAR_21 = FUNC_19(VAR_18);
 struct rtl_mac *VAR_22 = FUNC_18(FUNC_19(VAR_18));
 struct sk_buff *VAR_23 = ((void*)0);
 u32 VAR_24;
 bool VAR_25;
 u8 VAR_26[5] = { 0 };
 u8 VAR_27[7] = { 0 };
 bool VAR_28 = 0;
 u8 *VAR_29;
 u8 *VAR_30;
 u8 *VAR_31;
 u8 *VAR_32;
 u8 *VAR_33;
 u8 *VAR_34;





 VAR_29 = &VAR_17[VAR_1 * 256];
 FUNC_3(VAR_29, VAR_22->mac_addr);
 FUNC_4(VAR_29, VAR_22->bssid);

 if (VAR_19) {
  VAR_24 = 256 - 40;
  goto out;
 }




 VAR_30 = &VAR_17[VAR_13 * 256];
 FUNC_5(VAR_30, (VAR_22->assoc_id | 0xc000));
 FUNC_6(VAR_30, VAR_22->bssid);
 FUNC_7(VAR_30, VAR_22->mac_addr);

 FUNC_13(VAR_26, VAR_13);





 VAR_31 = &VAR_17[VAR_12 * 256];
 FUNC_2(VAR_31, VAR_22->bssid);
 FUNC_3(VAR_31, VAR_22->mac_addr);
 FUNC_4(VAR_31, VAR_22->bssid);

 FUNC_12(VAR_26, VAR_12);





 VAR_32 = &VAR_17[VAR_14 * 256];
 FUNC_2(VAR_32, VAR_22->bssid);
 FUNC_3(VAR_32, VAR_22->mac_addr);
 FUNC_4(VAR_32, VAR_22->bssid);

 FUNC_14(VAR_26, VAR_14);





 VAR_33 = &VAR_17[VAR_2 * 256];
 FUNC_2(VAR_33, VAR_22->bssid);
 FUNC_3(VAR_33, VAR_22->mac_addr);
 FUNC_4(VAR_33, VAR_22->bssid);

 FUNC_11(VAR_26, VAR_2);

 if (!VAR_20) {
  VAR_24 = 256 * (VAR_2 + 1) - 40;
  goto out;
 }




 VAR_34 = &VAR_17[VAR_0 * 256];
 FUNC_2(VAR_34, VAR_22->bssid);
 FUNC_3(VAR_34, VAR_22->mac_addr);
 FUNC_4(VAR_34, VAR_22->bssid);

 FUNC_8(VAR_27, VAR_0);





 FUNC_10(VAR_27,
         VAR_15);





 FUNC_9(VAR_27, VAR_9);

 VAR_24 = VAR_16 - 40;

out:

 FUNC_0(VAR_21, VAR_3, VAR_7,
        "rtl8821ae_set_fw_rsvdpagepkt(): packet data\n",
        &VAR_17[0], VAR_24);

 VAR_23 = FUNC_15(VAR_24);
 if (!VAR_23)
  return;
 FUNC_20(VAR_23, &VAR_17, VAR_24);

 VAR_25 = FUNC_17(VAR_18, VAR_23);

 if (VAR_25)
  VAR_28 = 1;

 if (!VAR_19 && VAR_28) {
  FUNC_1(VAR_21, VAR_5, VAR_7,
    "Set RSVD page location to Fw.\n");
  FUNC_0(VAR_21, VAR_3, VAR_6,
    "H2C_RSVDPAGE:\n", VAR_26, 5);
  FUNC_16(VAR_18, VAR_11,
           sizeof(VAR_26), VAR_26);
  if (VAR_20) {
   FUNC_0(VAR_21, VAR_3, VAR_6,
          "wowlan H2C_RSVDPAGE:\n",
          VAR_27, 7);
   FUNC_16(VAR_18, VAR_10,
            sizeof(VAR_27),
            VAR_27);
  }
 }

 if (!VAR_28) {
  FUNC_1(VAR_21, VAR_4, VAR_8,
    "Set RSVD page location to Fw FAIL!!!!!!.\n");
 }
}
