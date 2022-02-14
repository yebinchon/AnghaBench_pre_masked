
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ during_mac0init_radiob; scalar_t__ during_mac1init_radioa; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_priv*,int) ;
 int FUNC_8 (struct rtl_priv*,int,int) ;

void FUNC_9(struct ieee80211_hw *VAR_3,
      u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_6(VAR_3);
 struct rtl_hal *VAR_8 = FUNC_5(VAR_7);
 u8 VAR_9 = 0;
 u32 VAR_10, VAR_11;

 FUNC_1(VAR_7, VAR_0, VAR_1,
   "regaddr(%#x), bitmask(%#x), data(%#x)\n",
   VAR_4, VAR_5, VAR_6);
 if (VAR_8->during_mac1init_radioa)
  VAR_9 = FUNC_0(3);
 else if (VAR_8->during_mac0init_radiob)

  VAR_9 = FUNC_0(3) | FUNC_0(2);
 if (VAR_5 != VAR_2) {
  if (VAR_8->during_mac1init_radioa ||
      VAR_8->during_mac0init_radiob)
   VAR_10 = FUNC_3(VAR_3,
     (u16) VAR_4,
     VAR_9);
  else
   VAR_10 = FUNC_7(VAR_7, VAR_4);
  VAR_11 = FUNC_2(VAR_5);
  VAR_6 = ((VAR_10 & (~VAR_5)) | (VAR_6 << VAR_11));
 }
 if (VAR_8->during_mac1init_radioa || VAR_8->during_mac0init_radiob)
  FUNC_4(VAR_3, (u16) VAR_4, VAR_6, VAR_9);
 else
  FUNC_8(VAR_7, VAR_4, VAR_6);
 FUNC_1(VAR_7, VAR_0, VAR_1,
   "regaddr(%#x), bitmask(%#x), data(%#x)\n",
   VAR_4, VAR_5, VAR_6);
}
