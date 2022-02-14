
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct il_priv {int dummy; } ;
struct ieee80211_tx_rate {int idx; int flags; } ;
struct TYPE_2__ {int antenna; struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int band; TYPE_1__ status; } ;


 int VAR_0 ;
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
 int FUNC_0 (int,int ) ;

void
FUNC_1(struct il_priv *VAR_12, u32 VAR_13,
       struct ieee80211_tx_info *VAR_14)
{
 struct ieee80211_tx_rate *VAR_15 = &VAR_14->status.rates[0];

 VAR_14->status.antenna =
     ((VAR_13 & VAR_5) >> VAR_6);
 if (VAR_13 & VAR_10)
  VAR_15->flags |= VAR_3;
 if (VAR_13 & VAR_8)
  VAR_15->flags |= VAR_2;
 if (VAR_13 & VAR_9)
  VAR_15->flags |= VAR_0;
 if (VAR_13 & VAR_7)
  VAR_15->flags |= VAR_1;
 if (VAR_13 & VAR_11)
  VAR_15->flags |= VAR_4;
 VAR_15->idx = FUNC_0(VAR_13, VAR_14->band);
}
