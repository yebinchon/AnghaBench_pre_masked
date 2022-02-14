
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
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int,int ) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6;
 u32 VAR_7;
 u32 *VAR_8;

 FUNC_0(VAR_5, VAR_0, VAR_1, "Read Rtl723MACPHY_Array\n");
 VAR_7 = VAR_3;
 VAR_8 = VAR_2;

 FUNC_0(VAR_5, VAR_0, VAR_1,
   "Img:RTL8192CEMAC_2T_ARRAY\n");
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6 = VAR_6 + 2)
  FUNC_2(VAR_5, VAR_8[VAR_6], (u8) VAR_8[VAR_6 + 1]);
 return 1;
}
