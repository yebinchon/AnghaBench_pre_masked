
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_phy {TYPE_1__* hwparam_tables; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int length; int* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int,int ) ;

bool FUNC_3(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_3);
 struct rtl_phy *VAR_5 = &(VAR_4->phy);
 u32 VAR_6;
 u32 VAR_7;
 u32 *VAR_8;

 FUNC_0(VAR_4, VAR_0, VAR_1, "Read Rtl819XMACPHY_ARRAY\n");
 VAR_7 = VAR_5->hwparam_tables[VAR_2].length ;
 VAR_8 = VAR_5->hwparam_tables[VAR_2].pdata;
 FUNC_0(VAR_4, VAR_0, VAR_1, "Img:RTL8192CUMAC_2T_ARRAY\n");
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6 = VAR_6 + 2)
  FUNC_2(VAR_4, VAR_8[VAR_6], (u8) VAR_8[VAR_6 + 1]);
 return 1;
}
