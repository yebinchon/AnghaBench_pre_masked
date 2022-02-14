
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_low_level_stats {int dot11FCSErrorCount; int dot11ACKFailureCount; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct ar9170 {int tx_fcs_errors; int tx_ack_failures; } ;


 int FUNC_0 (struct ieee80211_low_level_stats*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_0,
     struct ieee80211_low_level_stats *VAR_1)
{
 struct ar9170 *VAR_2 = VAR_0->priv;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->dot11ACKFailureCount = VAR_2->tx_ack_failures;
 VAR_1->dot11FCSErrorCount = VAR_2->tx_fcs_errors;
 return 0;
}
