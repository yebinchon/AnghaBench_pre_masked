
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netdata_local {int last_tx_idx; unsigned int* skblen; int* tx_stat_v; int num_used_tx_buffs; int net_base; } ;
struct TYPE_2__ {unsigned int tx_bytes; int tx_packets; int tx_errors; int tx_aborted_errors; int tx_fifo_errors; int collisions; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct netdata_local* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6)
{
 struct netdata_local *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8, *VAR_9, VAR_10;

 VAR_8 = FUNC_5(FUNC_0(VAR_7->net_base));
 while (VAR_7->last_tx_idx != VAR_8) {
  unsigned int VAR_11 = VAR_7->skblen[VAR_7->last_tx_idx];


  VAR_9 = &VAR_7->tx_stat_v[VAR_7->last_tx_idx];
  VAR_10 = *VAR_9;


  VAR_7->num_used_tx_buffs--;
  VAR_7->last_tx_idx++;
  if (VAR_7->last_tx_idx >= VAR_0)
   VAR_7->last_tx_idx = 0;


  VAR_6->stats.collisions += FUNC_1(VAR_10);


  if (VAR_10 & VAR_1) {
   if (VAR_10 & VAR_5) {

    VAR_6->stats.tx_fifo_errors++;
   }
   if (VAR_10 & VAR_4) {

    VAR_6->stats.tx_aborted_errors++;
   }
   if (VAR_10 & VAR_2) {

    VAR_6->stats.tx_aborted_errors++;
   }
   if (VAR_10 & VAR_3) {

    VAR_6->stats.tx_aborted_errors++;
   }
   VAR_6->stats.tx_errors++;
  } else {

   VAR_6->stats.tx_packets++;
   VAR_6->stats.tx_bytes += VAR_11;
  }

  VAR_8 = FUNC_5(FUNC_0(VAR_7->net_base));
 }

 if (VAR_7->num_used_tx_buffs <= VAR_0/2) {
  if (FUNC_3(VAR_6))
   FUNC_4(VAR_6);
 }
}
