
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tx_params; } ;
typedef TYPE_1__ u8 ;
struct mwifiex_private {scalar_t__ bss_mode; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {scalar_t__ user_dev_mcs_support; int hw_dot_11n_dev_cap; } ;
struct ieee80211_sta_ht_cap {int ht_supported; int cap; TYPE_1__ mcs; int ampdu_density; int ampdu_factor; } ;
struct ieee80211_mcs_info {int rx_mask; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int,int) ;

__attribute__((used)) static void
FUNC_11(struct ieee80211_sta_ht_cap *VAR_15,
        struct mwifiex_private *VAR_16)
{
 int VAR_17;
 struct ieee80211_mcs_info VAR_18;
 u8 *VAR_19 = (u8 *)&VAR_18;
 struct mwifiex_adapter *VAR_20 = VAR_16->adapter;

 VAR_15->ht_supported = 1;
 VAR_15->ampdu_factor = VAR_11;
 VAR_15->ampdu_density = VAR_13;

 FUNC_10(&VAR_15->mcs, 0, sizeof(VAR_15->mcs));


 if (FUNC_2(VAR_20->hw_dot_11n_dev_cap))
  VAR_15->cap |= VAR_9;
 else
  VAR_15->cap &= ~VAR_9;

 if (FUNC_5(VAR_20->hw_dot_11n_dev_cap))
  VAR_15->cap |= VAR_6;
 else
  VAR_15->cap &= ~VAR_6;

 if (FUNC_6(VAR_20->hw_dot_11n_dev_cap))
  VAR_15->cap |= VAR_7;
 else
  VAR_15->cap &= ~VAR_7;

 if (VAR_20->user_dev_mcs_support == VAR_0)
  VAR_15->cap |= 2 << VAR_5;
 else
  VAR_15->cap |= 1 << VAR_5;

 if (FUNC_7(VAR_20->hw_dot_11n_dev_cap))
  VAR_15->cap |= VAR_10;
 else
  VAR_15->cap &= ~VAR_10;

 if (FUNC_3(VAR_20->hw_dot_11n_dev_cap))
  VAR_15->cap |= VAR_2;
 else
  VAR_15->cap &= ~VAR_2;

 if (FUNC_1(VAR_20->hw_dot_11n_dev_cap))
  VAR_15->cap |= VAR_1;
 else
  VAR_15->cap &= ~VAR_1;

 if (FUNC_4(VAR_20->hw_dot_11n_dev_cap))
  VAR_15->cap |= VAR_3;
 else
  VAR_15->cap &= ~VAR_3;

 VAR_15->cap &= ~VAR_4;
 VAR_15->cap |= VAR_8;

 VAR_17 = FUNC_0(VAR_20->user_dev_mcs_support);

 FUNC_10(VAR_19, 0xff, VAR_17);

 FUNC_10(&VAR_19[VAR_17], 0,
        sizeof(struct ieee80211_mcs_info) - VAR_17);
 if (VAR_16->bss_mode == VAR_14 ||
     FUNC_2(VAR_20->hw_dot_11n_dev_cap))

  FUNC_8(VAR_18.rx_mask);

 FUNC_9((u8 *) &VAR_15->mcs, VAR_19, sizeof(struct ieee80211_mcs_info));

 VAR_15->mcs.tx_params = VAR_12;
}
