
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_sta_tid_stats {int * rx_pkt_ampdu; } ;
struct ath10k {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static void FUNC_0(struct ath10k *VAR_7,
      struct ath10k_sta_tid_stats *VAR_8,
      u32 VAR_9)
{
 if (VAR_9 <= 10)
  VAR_8->rx_pkt_ampdu[VAR_0]++;
 else if (VAR_9 <= 20)
  VAR_8->rx_pkt_ampdu[VAR_1]++;
 else if (VAR_9 <= 30)
  VAR_8->rx_pkt_ampdu[VAR_2]++;
 else if (VAR_9 <= 40)
  VAR_8->rx_pkt_ampdu[VAR_3]++;
 else if (VAR_9 <= 50)
  VAR_8->rx_pkt_ampdu[VAR_4]++;
 else if (VAR_9 <= 60)
  VAR_8->rx_pkt_ampdu[VAR_5]++;
 else if (VAR_9 > 60)
  VAR_8->rx_pkt_ampdu[VAR_6]++;
}
