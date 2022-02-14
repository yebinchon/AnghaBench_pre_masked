
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct wiphy {int dummy; } ;
struct mwifiex_private {TYPE_1__* adapter; } ;
struct mwifiex_ds_ant_cfg {int tx_ant; int rx_ant; } ;
struct mwifiex_adapter {scalar_t__ hw_dev_mcs_support; int number_of_antenna; scalar_t__ user_dev_mcs_support; TYPE_3__* wiphy; int usr_dot_11ac_mcs_support; scalar_t__ is_hw_11ac_capable; } ;
struct ieee80211_sta_ht_cap {int mcs; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_6__ {TYPE_2__** bands; } ;
struct TYPE_5__ {struct ieee80211_sta_ht_cap ht_cap; } ;
struct TYPE_4__ {int number_of_antenna; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int,int) ;
 struct mwifiex_adapter* FUNC_3 (struct wiphy*) ;
 struct mwifiex_private* FUNC_4 (struct mwifiex_adapter*,int ) ;
 int FUNC_5 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_ds_ant_cfg*,int) ;

__attribute__((used)) static int
FUNC_6(struct wiphy *VAR_10, u32 VAR_11, u32 VAR_12)
{
 struct mwifiex_adapter *VAR_13 = FUNC_3(VAR_10);
 struct mwifiex_private *VAR_14 = FUNC_4(VAR_13,
       VAR_7);
 struct mwifiex_ds_ant_cfg VAR_15;

 if (!VAR_11 || !VAR_12)
  return -VAR_0;

 if (VAR_13->hw_dev_mcs_support != VAR_2) {



  if (VAR_11 != VAR_12)
   return -VAR_0;

  if ((VAR_11 & (VAR_11 - 1)) &&
      (VAR_11 != FUNC_0(VAR_13->number_of_antenna) - 1))
   return -VAR_0;

  if ((VAR_11 == FUNC_0(VAR_13->number_of_antenna) - 1) &&
      (VAR_14->adapter->number_of_antenna > 1)) {
   VAR_11 = VAR_9;
   VAR_12 = VAR_9;
  }
 } else {
  struct ieee80211_sta_ht_cap *VAR_16;
  int VAR_17;
  enum nl80211_band VAR_18;

  if ((VAR_11 == 0x1 && VAR_12 == 0x1)) {
   VAR_13->user_dev_mcs_support = VAR_1;
   if (VAR_13->is_hw_11ac_capable)
    VAR_13->usr_dot_11ac_mcs_support =
      VAR_5;
  } else {
   VAR_13->user_dev_mcs_support = VAR_2;
   if (VAR_13->is_hw_11ac_capable)
    VAR_13->usr_dot_11ac_mcs_support =
      VAR_6;
  }

  for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
   if (!VAR_13->wiphy->bands[VAR_18])
    continue;

   VAR_16 = &VAR_13->wiphy->bands[VAR_18]->ht_cap;
   VAR_17 =
    FUNC_1(VAR_13->user_dev_mcs_support);
   FUNC_2(&VAR_16->mcs, 0, VAR_13->number_of_antenna);
   FUNC_2(&VAR_16->mcs, 0xff, VAR_17);
  }
 }

 VAR_15.tx_ant = VAR_11;
 VAR_15.rx_ant = VAR_12;

 return FUNC_5(VAR_14, VAR_4,
    VAR_3, 0, &VAR_15, 1);
}
