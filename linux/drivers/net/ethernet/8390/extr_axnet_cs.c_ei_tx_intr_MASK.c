
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_window_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; scalar_t__ collisions; int tx_aborted_errors; int tx_errors; int tx_packets; } ;
struct net_device {long base_addr; TYPE_1__ stats; } ;
struct ei_device {int tx1; int lasttx; int tx2; int txing; scalar_t__ tx_start_page; int name; int txqueue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,int,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*,char*,int ,int,int) ;
 struct ei_device* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_8)
{
 long VAR_9 = VAR_8->base_addr;
 struct ei_device *VAR_10 = FUNC_3(VAR_8);
 int VAR_11 = FUNC_1(VAR_9 + VAR_0);





 VAR_10->txqueue--;

 if (VAR_10->tx1 < 0)
 {
  if (VAR_10->lasttx != 1 && VAR_10->lasttx != -1)
   FUNC_2(VAR_8, "%s: bogus last_tx_buffer %d, tx1=%d\n",
       VAR_10->name, VAR_10->lasttx,
       VAR_10->tx1);
  VAR_10->tx1 = 0;
  if (VAR_10->tx2 > 0)
  {
   VAR_10->txing = 1;
   FUNC_0(VAR_8, VAR_10->tx2, VAR_10->tx_start_page + 6);
   FUNC_4(VAR_8);
   VAR_10->tx2 = -1,
   VAR_10->lasttx = 2;
  }
  else VAR_10->lasttx = 20, VAR_10->txing = 0;
 }
 else if (VAR_10->tx2 < 0)
 {
  if (VAR_10->lasttx != 2 && VAR_10->lasttx != -2)
   FUNC_2(VAR_8, "%s: bogus last_tx_buffer %d, tx2=%d\n",
       VAR_10->name, VAR_10->lasttx,
       VAR_10->tx2);
  VAR_10->tx2 = 0;
  if (VAR_10->tx1 > 0)
  {
   VAR_10->txing = 1;
   FUNC_0(VAR_8, VAR_10->tx1, VAR_10->tx_start_page);
   FUNC_4(VAR_8);
   VAR_10->tx1 = -1;
   VAR_10->lasttx = 1;
  }
  else
   VAR_10->lasttx = 10, VAR_10->txing = 0;
 }





 if (VAR_11 & VAR_3)
  VAR_8->stats.collisions++;
 if (VAR_11 & VAR_7)
  VAR_8->stats.tx_packets++;
 else
 {
  VAR_8->stats.tx_errors++;
  if (VAR_11 & VAR_1)
  {
   VAR_8->stats.tx_aborted_errors++;
   VAR_8->stats.collisions += 16;
  }
  if (VAR_11 & VAR_4)
   VAR_8->stats.tx_carrier_errors++;
  if (VAR_11 & VAR_5)
   VAR_8->stats.tx_fifo_errors++;
  if (VAR_11 & VAR_2)
   VAR_8->stats.tx_heartbeat_errors++;
  if (VAR_11 & VAR_6)
   VAR_8->stats.tx_window_errors++;
 }
 FUNC_5(VAR_8);
}
