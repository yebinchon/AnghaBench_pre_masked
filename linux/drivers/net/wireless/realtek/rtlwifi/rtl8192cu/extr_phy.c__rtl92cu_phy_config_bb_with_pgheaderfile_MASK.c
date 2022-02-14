
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_phy {TYPE_1__* hwparam_tables; scalar_t__ pwrgroup_cnt; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int length; int * pdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

bool FUNC_4(struct ieee80211_hw *VAR_4,
           u8 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_3(VAR_4);
 struct rtl_phy *VAR_7 = &(VAR_6->phy);
 int VAR_8;
 u32 *VAR_9;
 u16 VAR_10;

 VAR_7->pwrgroup_cnt = 0;
 VAR_10 = VAR_7->hwparam_tables[VAR_3].length;
 VAR_9 = VAR_7->hwparam_tables[VAR_3].pdata;
 if (VAR_5 == VAR_0) {
  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8 = VAR_8 + 3) {
   FUNC_2(VAR_9[VAR_8]);
   FUNC_1(VAR_4,
        VAR_9[VAR_8],
        VAR_9[VAR_8 + 1],
        VAR_9[VAR_8 + 2]);
  }
 } else {
  FUNC_0(VAR_6, VAR_1, VAR_2,
    "configtype != BaseBand_Config_PHY_REG\n");
 }
 return 1;
}
