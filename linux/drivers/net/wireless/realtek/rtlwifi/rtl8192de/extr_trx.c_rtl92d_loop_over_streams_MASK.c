
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_stats {int* rx_mimo_sig_qual; } ;
struct TYPE_2__ {int* rx_evm_percentage; } ;
struct rtl_priv {TYPE_1__ stats; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_1,
         struct rtl_stats *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  if (VAR_2->rx_mimo_sig_qual[VAR_4] != -1) {
   if (VAR_3->stats.rx_evm_percentage[VAR_4] == 0) {
    VAR_3->stats.rx_evm_percentage[VAR_4] =
        VAR_2->rx_mimo_sig_qual[VAR_4];
   }
   VAR_3->stats.rx_evm_percentage[VAR_4] =
       ((VAR_3->stats.rx_evm_percentage[VAR_4]
         * (VAR_0 - 1)) +
        (VAR_2->rx_mimo_sig_qual[VAR_4] * 1)) /
       (VAR_0);
  }
 }
}
