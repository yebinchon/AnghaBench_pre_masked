
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_sta_tid_stats {int * rx_pkt_amsdu; } ;
struct ath10k {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static void FUNC_0(struct ath10k *VAR_5,
      struct ath10k_sta_tid_stats *VAR_6,
      u32 VAR_7)
{
 if (VAR_7 == 1)
  VAR_6->rx_pkt_amsdu[VAR_0]++;
 else if (VAR_7 == 2)
  VAR_6->rx_pkt_amsdu[VAR_1]++;
 else if (VAR_7 == 3)
  VAR_6->rx_pkt_amsdu[VAR_2]++;
 else if (VAR_7 == 4)
  VAR_6->rx_pkt_amsdu[VAR_3]++;
 else if (VAR_7 > 4)
  VAR_6->rx_pkt_amsdu[VAR_4]++;
}
