
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int tx_fifo_errors; int tx_window_errors; int tx_carrier_errors; int tx_aborted_errors; int tx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct epic_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, struct epic_private *VAR_2,
     int VAR_3)
{
 struct net_device_stats *VAR_4 = &VAR_1->stats;



 if (VAR_0 > 1)
  FUNC_0(VAR_1, "Transmit error, Tx status %8.8x.\n",
      VAR_3);

 VAR_4->tx_errors++;
 if (VAR_3 & 0x1050)
  VAR_4->tx_aborted_errors++;
 if (VAR_3 & 0x0008)
  VAR_4->tx_carrier_errors++;
 if (VAR_3 & 0x0040)
  VAR_4->tx_window_errors++;
 if (VAR_3 & 0x0010)
  VAR_4->tx_fifo_errors++;
}
