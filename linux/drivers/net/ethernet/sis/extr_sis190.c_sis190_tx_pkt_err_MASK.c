
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device_stats {int tx_errors; int tx_carrier_errors; int tx_fifo_errors; int tx_aborted_errors; int tx_window_errors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(u32 VAR_5, struct net_device_stats *VAR_6)
{


 if (!FUNC_0(VAR_5 & (VAR_4 | VAR_2 | VAR_0 | VAR_1)))
  return 0;

 if (VAR_5 & VAR_4)
  VAR_6->tx_window_errors++;
 if (VAR_5 & VAR_2)
  VAR_6->tx_aborted_errors++;
 if (VAR_5 & VAR_0)
  VAR_6->tx_fifo_errors++;
 if (VAR_5 & VAR_1)
  VAR_6->tx_carrier_errors++;

 VAR_6->tx_errors++;

 return -1;
}
