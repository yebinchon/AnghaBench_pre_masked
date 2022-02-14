
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct rtl_phy {int dummy; } ;
struct rtl_priv {TYPE_1__* cfg; struct rtl_phy phy; } ;
struct TYPE_5__ {scalar_t__* rx_mask; } ;
struct TYPE_6__ {TYPE_2__ mcs; } ;
struct ieee80211_sta {TYPE_3__ ht_cap; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int * maps; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct rtl_phy*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct ieee80211_hw *VAR_3,
      struct ieee80211_sta *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_3);
 struct rtl_phy *VAR_6 = &VAR_5->phy;
 u8 VAR_7;

 if (FUNC_0(VAR_6) == VAR_0 &&
     VAR_4->ht_cap.mcs.rx_mask[1] != 0)
  VAR_7 = VAR_5->cfg->maps[VAR_1];
 else
  VAR_7 = VAR_5->cfg->maps[VAR_2];

 return VAR_7;
}
