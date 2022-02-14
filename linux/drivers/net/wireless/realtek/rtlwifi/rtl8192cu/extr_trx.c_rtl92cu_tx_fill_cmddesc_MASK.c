
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int) ;

void FUNC_18(struct ieee80211_hw *VAR_6,
        u8 *VAR_7, bool VAR_8,
        bool VAR_9, struct sk_buff *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_3(VAR_6);
 u8 VAR_12 = VAR_3;
 struct ieee80211_hdr *VAR_13 = (struct ieee80211_hdr *)(VAR_10->data);
 __le16 VAR_14 = VAR_13->frame_control;
 __le32 *VAR_15 = (__le32 *)VAR_7;

 FUNC_2((void *)VAR_15, 0, VAR_5);
 if (VAR_8)
  FUNC_9(VAR_15, VAR_5);
 FUNC_16(VAR_15, VAR_2);
 FUNC_15(VAR_15, 0);
 FUNC_7(VAR_15, 0);
 FUNC_13(VAR_15, VAR_12);
 FUNC_4(VAR_15, 1);
 FUNC_6(VAR_15, 1);
 FUNC_14(VAR_15, 7);
 FUNC_8(VAR_15, 0);
 FUNC_10(VAR_15, 1);
 FUNC_12(VAR_15, (u16)VAR_10->len);
 FUNC_4(VAR_15, 1);
 FUNC_6(VAR_15, 1);
 FUNC_9(VAR_15, 0x20);
 FUNC_17(VAR_15, 1);
 if (!FUNC_1(VAR_14)) {
  FUNC_5(VAR_15, 1);
  FUNC_11(VAR_15, 8);
 }
 FUNC_0(VAR_11, VAR_0, VAR_1, "H2C Tx Cmd Content",
        VAR_15, VAR_4);
}
