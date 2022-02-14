
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
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl_priv*,int) ;

u32 FUNC_7(struct ieee80211_hw *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_5(VAR_2);
 struct rtl_hal *VAR_6 = FUNC_4(VAR_5);
 u32 VAR_7, VAR_8, VAR_9;

 FUNC_1(VAR_5, VAR_0, VAR_1, "regaddr(%#x), bitmask(%#x)\n",
   VAR_3, VAR_4);
 if (VAR_6->during_mac1init_radioa || VAR_6->during_mac0init_radiob) {
  u8 VAR_10 = 0;



  if (VAR_6->during_mac1init_radioa)
   VAR_10 = FUNC_0(3);
  else if (VAR_6->during_mac0init_radiob)
   VAR_10 = FUNC_0(3) | FUNC_0(2);
  VAR_8 = FUNC_3(VAR_2, (u16)VAR_3,
   VAR_10);
 } else {
  VAR_8 = FUNC_6(VAR_5, VAR_3);
 }
 VAR_9 = FUNC_2(VAR_4);
 VAR_7 = (VAR_8 & VAR_4) >> VAR_9;
 FUNC_1(VAR_5, VAR_0, VAR_1,
   "BBR MASK=0x%x Addr[0x%x]=0x%x\n",
   VAR_4, VAR_3, VAR_8);
 return VAR_7;
}
