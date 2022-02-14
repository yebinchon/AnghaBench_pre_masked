
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_phy {int num_total_rfpath; } ;
struct rtl_efuse {int txpwr_fromeprom; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;
struct TYPE_3__ {struct rtl_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_hw*,int,int ,int ) ;
 struct rtl_efuse* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct ieee80211_hw*) ;

void FUNC_3(struct ieee80211_hw *VAR_5, u8 VAR_6)
{
 struct rtl_efuse *VAR_7 = FUNC_1(FUNC_2(VAR_5));
 struct rtl_phy *VAR_8 = &FUNC_2(VAR_5)->phy;
 enum radio_path VAR_9;

 if (!VAR_7->txpwr_fromeprom)
  return;
 for (VAR_9 = VAR_4; VAR_9 < VAR_8->num_total_rfpath;
      VAR_9++) {
  FUNC_0(VAR_5, VAR_9,
            VAR_6, VAR_0);
  FUNC_0(VAR_5, VAR_9,
            VAR_6, VAR_3);
  FUNC_0(VAR_5, VAR_9,
            VAR_6,
            VAR_1);

  if (VAR_8->num_total_rfpath >= 2)
   FUNC_0(VAR_5,
             VAR_9, VAR_6,
             VAR_2);
 }
}
