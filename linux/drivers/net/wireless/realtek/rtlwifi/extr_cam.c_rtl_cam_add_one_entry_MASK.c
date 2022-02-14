
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_5 ;
 int FUNC_1 (struct ieee80211_hw*,int,int*,int*,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

u8 FUNC_3(struct ieee80211_hw *VAR_6, u8 *VAR_7,
    u32 VAR_8, u32 VAR_9, u32 VAR_10,
    u32 VAR_11, u8 *VAR_12)
{
 u32 VAR_13;
 struct rtl_priv *VAR_14 = FUNC_2(VAR_6);

 FUNC_0(VAR_14, VAR_2, VAR_3,
   "EntryNo:%x, ulKeyId=%x, ulEncAlg=%x, ulUseDK=%x MacAddr %pM\n",
   VAR_9, VAR_8, VAR_10,
   VAR_11, VAR_7);

 if (VAR_8 == VAR_5) {
  FUNC_0(VAR_14, VAR_1, VAR_4,
    "ulKeyId exceed!\n");
  return 0;
 }

 if (VAR_11 == 1)
  VAR_13 = VAR_0 | ((u16) (VAR_10) << 2);
 else
  VAR_13 = VAR_0 | ((VAR_10) << 2) | VAR_8;

 FUNC_1(VAR_6, VAR_9, VAR_7,
         (u8 *)VAR_12, VAR_13);

 FUNC_0(VAR_14, VAR_2, VAR_3, "end\n");

 return 1;

}
