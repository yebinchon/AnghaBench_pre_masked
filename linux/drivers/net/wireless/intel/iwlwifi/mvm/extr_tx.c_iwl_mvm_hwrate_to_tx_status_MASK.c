
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_tx_rate {int dummy; } ;
struct TYPE_2__ {int antenna; struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int band; TYPE_1__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,struct ieee80211_tx_rate*) ;

__attribute__((used)) static void FUNC_1(u32 VAR_2,
     struct ieee80211_tx_info *VAR_3)
{
 struct ieee80211_tx_rate *VAR_4 = &VAR_3->status.rates[0];

 VAR_3->status.antenna =
  ((VAR_2 & VAR_0) >> VAR_1);
 FUNC_0(VAR_2, VAR_3->band, VAR_4);
}
