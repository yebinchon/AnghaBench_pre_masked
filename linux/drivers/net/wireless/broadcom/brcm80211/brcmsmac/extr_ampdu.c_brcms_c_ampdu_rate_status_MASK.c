
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tx_status {int dummy; } ;
struct ieee80211_tx_rate {int idx; scalar_t__ count; } ;
struct TYPE_2__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {TYPE_1__ status; } ;
struct brcms_c_info {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct brcms_c_info *VAR_1,
     struct ieee80211_tx_info *VAR_2,
     struct tx_status *VAR_3, u8 VAR_4)
{
 struct ieee80211_tx_rate *VAR_5 = VAR_2->status.rates;
 int VAR_6;


 for (VAR_6 = 2; VAR_6 < VAR_0; VAR_6++) {
  VAR_5[VAR_6].idx = -1;
  VAR_5[VAR_6].count = 0;
 }
}
