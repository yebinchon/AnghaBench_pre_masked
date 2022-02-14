
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_stats {int Seq_Num; int bFirstMPDU; int bIsAMPDU; } ;



__attribute__((used)) static void FUNC_0(
  struct ieee80211_rx_stats *VAR_0,
  struct ieee80211_rx_stats *VAR_1)
{
 VAR_1->bIsAMPDU = VAR_0->bIsAMPDU;
 VAR_1->bFirstMPDU = VAR_0->bFirstMPDU;
 VAR_1->Seq_Num = VAR_0->Seq_Num;
}
