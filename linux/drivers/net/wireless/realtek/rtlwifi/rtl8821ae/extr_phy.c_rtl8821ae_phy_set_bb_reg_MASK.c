
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int,int) ;
 int FUNC_1 (int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;

void FUNC_5(struct ieee80211_hw *VAR_3,
         u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_2(VAR_3);
 u32 VAR_8, VAR_9;

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "regaddr(%#x), bitmask(%#x), data(%#x)\n",
   VAR_4, VAR_5, VAR_6);

 if (VAR_5 != VAR_2) {
  VAR_8 = FUNC_3(VAR_7, VAR_4);
  VAR_9 = FUNC_1(VAR_5);
  VAR_6 = ((VAR_8 & (~VAR_5)) |
   ((VAR_6 << VAR_9) & VAR_5));
 }

 FUNC_4(VAR_7, VAR_4, VAR_6);

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "regaddr(%#x), bitmask(%#x), data(%#x)\n",
   VAR_4, VAR_5, VAR_6);
}
