
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_phy {int dummy; } ;
struct rtl_priv {TYPE_3__* cfg; struct rtl_phy phy; } ;
struct TYPE_4__ {int tx_mcs_map; } ;
struct TYPE_5__ {TYPE_1__ vht_mcs; } ;
struct ieee80211_sta {TYPE_2__ vht_cap; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {int * maps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_0 (struct rtl_phy*) ;
 int FUNC_1 (int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct ieee80211_hw *VAR_9,
          struct ieee80211_sta *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_2(VAR_9);
 struct rtl_phy *VAR_12 = &(VAR_11->phy);
 u8 VAR_13;
 u16 VAR_14 = FUNC_1(VAR_10->vht_cap.vht_mcs.tx_mcs_map);

 if ((FUNC_0(VAR_12) == VAR_2) &&
     (VAR_14 & 0x000c) != 0x000c) {
  if ((VAR_14 & 0x000c) >> 2 ==
   VAR_0)
   VAR_13 =
   VAR_11->cfg->maps[VAR_6];
  else if ((VAR_14 & 0x000c) >> 2 ==
   VAR_1)
   VAR_13 =
   VAR_11->cfg->maps[VAR_7];
  else
   VAR_13 =
   VAR_11->cfg->maps[VAR_8];
 } else {
  if ((VAR_14 & 0x0003) ==
   VAR_0)
   VAR_13 =
   VAR_11->cfg->maps[VAR_3];
  else if ((VAR_14 & 0x0003) ==
   VAR_1)
   VAR_13 =
   VAR_11->cfg->maps[VAR_4];
  else
   VAR_13 =
   VAR_11->cfg->maps[VAR_5];
 }

 return VAR_13;
}
