
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int,int ) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7;
 u32 VAR_8;
 u32 *VAR_9;

 FUNC_0(VAR_6, VAR_0, VAR_2, "Read Rtl8188EMACPHY_Array\n");
 VAR_8 = VAR_4;
 VAR_9 = VAR_3;
 FUNC_0(VAR_6, VAR_0, VAR_1,
   "Img:RTL8188EEMAC_1T_ARRAY LEN %d\n", VAR_8);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7 = VAR_7 + 2)
  FUNC_2(VAR_6, VAR_9[VAR_7], (u8)VAR_9[VAR_7 + 1]);
 return 1;
}
