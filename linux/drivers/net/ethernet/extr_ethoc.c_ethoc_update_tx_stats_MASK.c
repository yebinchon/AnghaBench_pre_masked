
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int collisions; int tx_bytes; int tx_packets; int tx_errors; int tx_carrier_errors; int tx_fifo_errors; int tx_aborted_errors; int tx_window_errors; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct ethoc_bd {int stat; } ;
struct ethoc {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct ethoc *VAR_5, struct ethoc_bd *VAR_6)
{
 struct net_device *VAR_7 = VAR_5->netdev;

 if (VAR_6->stat & VAR_1) {
  FUNC_0(&VAR_7->dev, "TX: late collision\n");
  VAR_7->stats.tx_window_errors++;
 }

 if (VAR_6->stat & VAR_2) {
  FUNC_0(&VAR_7->dev, "TX: retransmit limit\n");
  VAR_7->stats.tx_aborted_errors++;
 }

 if (VAR_6->stat & VAR_4) {
  FUNC_0(&VAR_7->dev, "TX: underrun\n");
  VAR_7->stats.tx_fifo_errors++;
 }

 if (VAR_6->stat & VAR_0) {
  FUNC_0(&VAR_7->dev, "TX: carrier sense lost\n");
  VAR_7->stats.tx_carrier_errors++;
 }

 if (VAR_6->stat & VAR_3)
  VAR_7->stats.tx_errors++;

 VAR_7->stats.collisions += (VAR_6->stat >> 4) & 0xf;
 VAR_7->stats.tx_bytes += VAR_6->stat >> 16;
 VAR_7->stats.tx_packets++;
}
