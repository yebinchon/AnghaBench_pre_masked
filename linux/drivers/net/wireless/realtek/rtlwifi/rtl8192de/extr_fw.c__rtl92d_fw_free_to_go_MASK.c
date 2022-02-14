
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,scalar_t__) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_2 (struct rtl_priv*,int ) ;
 int FUNC_3 (struct rtl_priv*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7 = 0;
 u32 VAR_8;

 do {
  VAR_8 = FUNC_2(VAR_6, VAR_4);
 } while ((VAR_7++ < VAR_2) &&
   (!(VAR_8 & VAR_1)));
 if (VAR_7 >= VAR_2) {
  FUNC_0("chksum report fail! REG_MCUFWDL:0x%08x\n",
         VAR_8);
  return -VAR_0;
 }
 VAR_8 = FUNC_2(VAR_6, VAR_4);
 VAR_8 |= VAR_3;
 FUNC_3(VAR_6, VAR_4, VAR_8);
 return 0;
}
