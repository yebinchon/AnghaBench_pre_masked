
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tx_packets; int tx_aborted_errors; int tx_fifo_errors; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_4, u32 VAR_5)
{

 if (FUNC_0(VAR_5 & VAR_3)) {
  VAR_4->stats.tx_errors++;
  if (VAR_5 & VAR_0)
   VAR_4->stats.tx_aborted_errors++;
  if (VAR_5 & VAR_2)
   VAR_4->stats.tx_fifo_errors++;
  if (VAR_5 & VAR_1)
   VAR_4->stats.tx_aborted_errors++;
 }
 VAR_4->stats.tx_packets++;
}
