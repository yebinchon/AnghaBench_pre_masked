
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ status; } ;
struct ar9170 {int dummy; } ;
struct TYPE_3__ {int idx; unsigned int count; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ar9170 *VAR_1, unsigned int VAR_2,
 unsigned int VAR_3, struct ieee80211_tx_info *VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->status.rates[VAR_5].idx < 0)
   break;

  if (VAR_5 == VAR_2) {
   VAR_4->status.rates[VAR_5].count = VAR_3;
   VAR_5++;
   break;
  }
 }

 for (; VAR_5 < VAR_0; VAR_5++) {
  VAR_4->status.rates[VAR_5].idx = -1;
  VAR_4->status.rates[VAR_5].count = 0;
 }
}
