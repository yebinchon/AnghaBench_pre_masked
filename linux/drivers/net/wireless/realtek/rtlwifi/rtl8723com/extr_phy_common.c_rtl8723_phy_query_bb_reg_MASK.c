
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int,...) ;
 int FUNC_1 (int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int) ;

u32 FUNC_4(struct ieee80211_hw *VAR_2,
        u32 VAR_3, u32 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_2);
 u32 VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_5, VAR_0, VAR_1,
   "regaddr(%#x), bitmask(%#x)\n", VAR_3, VAR_4);
 VAR_7 = FUNC_3(VAR_5, VAR_3);
 VAR_8 = FUNC_1(VAR_4);
 VAR_6 = (VAR_7 & VAR_4) >> VAR_8;

 FUNC_0(VAR_5, VAR_0, VAR_1,
   "BBR MASK=0x%x Addr[0x%x]=0x%x\n", VAR_4,
   VAR_3, VAR_7);
 return VAR_6;
}
