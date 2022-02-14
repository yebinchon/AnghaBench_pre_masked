
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rtl_stats {scalar_t__ signalquality; int* rx_mimo_sig_qual; } ;
struct TYPE_3__ {size_t total_num; int* elements; size_t index; int total_val; } ;
struct TYPE_4__ {int signal_quality; int last_sigstrength_inpercent; int* rx_evm_percentage; TYPE_1__ ui_link_quality; } ;
struct rtl_priv {TYPE_2__ stats; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_2,
     struct rtl_stats *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5, VAR_6, VAR_7;

 if (VAR_3->signalquality == 0)
  return;

 if (VAR_4->stats.ui_link_quality.total_num++ >=
     VAR_0) {
  VAR_4->stats.ui_link_quality.total_num =
      VAR_0;
  VAR_5 = VAR_4->stats.ui_link_quality.elements[
   VAR_4->stats.ui_link_quality.index];
  VAR_4->stats.ui_link_quality.total_val -= VAR_5;
 }
 VAR_4->stats.ui_link_quality.total_val += VAR_3->signalquality;
 VAR_4->stats.ui_link_quality.elements[
  VAR_4->stats.ui_link_quality.index++] =
       VAR_3->signalquality;
 if (VAR_4->stats.ui_link_quality.index >=
     VAR_0)
  VAR_4->stats.ui_link_quality.index = 0;
 VAR_7 = VAR_4->stats.ui_link_quality.total_val /
     VAR_4->stats.ui_link_quality.total_num;
 VAR_4->stats.signal_quality = VAR_7;
 VAR_4->stats.last_sigstrength_inpercent = VAR_7;
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  if (VAR_3->rx_mimo_sig_qual[VAR_6] != -1) {
   if (VAR_4->stats.rx_evm_percentage[VAR_6] == 0) {
    VAR_4->stats.rx_evm_percentage[VAR_6] =
        VAR_3->rx_mimo_sig_qual[VAR_6];
   }
   VAR_4->stats.rx_evm_percentage[VAR_6] =
       ((VAR_4->stats.rx_evm_percentage[VAR_6]
         * (VAR_1 - 1)) +
        (VAR_3->rx_mimo_sig_qual[VAR_6] * 1)) /
       (VAR_1);
  }
 }
}
