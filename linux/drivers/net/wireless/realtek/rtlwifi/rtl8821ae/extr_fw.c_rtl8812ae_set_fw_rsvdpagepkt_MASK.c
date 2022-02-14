
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
 int VAR_15 ;
 struct sk_buff* FUNC_15 (int) ;
 int * VAR_16 ;
 int FUNC_16 (struct ieee80211_hw*,int ,int,int *) ;
 int FUNC_17 (struct ieee80211_hw*,struct sk_buff*) ;
 struct rtl_mac* FUNC_18 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_19 (struct ieee80211_hw*) ;
 int FUNC_20 (struct sk_buff*,int **,int) ;

void FUNC_21(struct ieee80211_hw *VAR_17,
      bool VAR_18, bool VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_19(VAR_17);
 struct rtl_mac *VAR_21 = FUNC_18(VAR_20);
 struct sk_buff *VAR_22 = ((void*)0);
 u32 VAR_23;
 bool VAR_24;
 u8 VAR_25[5] = { 0 };
 u8 VAR_26[7] = { 0 };
 bool VAR_27 = 0;
 u8 *VAR_28;
 u8 *VAR_29;
 u8 *VAR_30;
 u8 *VAR_31;
 u8 *VAR_32;
 u8 *VAR_33;





 VAR_28 = &VAR_16[VAR_1 * 512];
 FUNC_3(VAR_28, VAR_21->mac_addr);
 FUNC_4(VAR_28, VAR_21->bssid);

 if (VAR_18) {
  VAR_23 = 512 - 40;
  goto out;
 }




 VAR_29 = &VAR_16[VAR_12 * 512];
 FUNC_5(VAR_29, (VAR_21->assoc_id | 0xc000));
 FUNC_6(VAR_29, VAR_21->bssid);
 FUNC_7(VAR_29, VAR_21->mac_addr);

 FUNC_13(VAR_25, VAR_12);





 VAR_30 = &VAR_16[VAR_11 * 512];
 FUNC_2(VAR_30, VAR_21->bssid);
 FUNC_3(VAR_30, VAR_21->mac_addr);
 FUNC_4(VAR_30, VAR_21->bssid);

 FUNC_12(VAR_25, VAR_11);





 VAR_31 = &VAR_16[VAR_13 * 512];
 FUNC_2(VAR_31, VAR_21->bssid);
 FUNC_3(VAR_31, VAR_21->mac_addr);
 FUNC_4(VAR_31, VAR_21->bssid);

 FUNC_14(VAR_25, VAR_13);





 VAR_32 = &VAR_16[VAR_2 * 512];
 FUNC_2(VAR_32, VAR_21->bssid);
 FUNC_3(VAR_32, VAR_21->mac_addr);
 FUNC_4(VAR_32, VAR_21->bssid);

 FUNC_11(VAR_25, VAR_2);

 if (!VAR_19) {
  VAR_23 = 512 * (VAR_2 + 1) - 40;
  goto out;
 }




 VAR_33 = &VAR_16[VAR_0 * 512];
 FUNC_2(VAR_33, VAR_21->bssid);
 FUNC_3(VAR_33, VAR_21->mac_addr);
 FUNC_4(VAR_33, VAR_21->bssid);

 FUNC_8(VAR_26, VAR_0);





 FUNC_10(VAR_26,
        VAR_14);





 FUNC_9(VAR_26, VAR_8);

 VAR_23 = VAR_15 - 40;

out:
 FUNC_0(VAR_20, VAR_3, VAR_6,
        "rtl8812ae_set_fw_rsvdpagepkt(): packet data\n",
        &VAR_16[0], VAR_23);

 VAR_22 = FUNC_15(VAR_23);
 if (!VAR_22)
  return;
 FUNC_20(VAR_22, &VAR_16, VAR_23);

 VAR_24 = FUNC_17(VAR_17, VAR_22);

 if (VAR_24)
  VAR_27 = 1;

 if (!VAR_18 && VAR_27) {
  FUNC_0(VAR_20, VAR_3, VAR_5,
         "H2C_RSVDPAGE:\n", VAR_25, 5);
  FUNC_16(VAR_17, VAR_10,
           sizeof(VAR_25), VAR_25);
  if (VAR_19) {
   FUNC_0(VAR_20, VAR_3, VAR_5,
          "wowlan H2C_RSVDPAGE:\n", VAR_26, 7);
   FUNC_16(VAR_17, VAR_9,
            sizeof(VAR_26), VAR_26);
  }
 }

 if (!VAR_27)
  FUNC_1(VAR_20, VAR_4, VAR_7,
    "Set RSVD page location to Fw FAIL!!!!!!.\n");
}
