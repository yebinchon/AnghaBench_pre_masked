
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_window_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; scalar_t__ collisions; int tx_aborted_errors; int tx_errors; int tx_packets; } ;
struct net_device {unsigned long base_addr; TYPE_1__ stats; } ;
struct ei_device {int tx1; int lasttx; int tx2; int txing; scalar_t__ tx_start_page; int name; int txqueue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*,int,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct ei_device* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_10)
{
 unsigned long VAR_11 = VAR_10->base_addr;
 struct ei_device *VAR_12 = FUNC_3(VAR_10);
 int VAR_13 = FUNC_1(VAR_11 + VAR_1);

 FUNC_2(VAR_2, VAR_11 + VAR_0);





 VAR_12->txqueue--;

 if (VAR_12->tx1 < 0) {
  if (VAR_12->lasttx != 1 && VAR_12->lasttx != -1)
   FUNC_6("%s: bogus last_tx_buffer %d, tx1=%d\n",
          VAR_12->name, VAR_12->lasttx, VAR_12->tx1);
  VAR_12->tx1 = 0;
  if (VAR_12->tx2 > 0) {
   VAR_12->txing = 1;
   FUNC_0(VAR_10, VAR_12->tx2, VAR_12->tx_start_page + 6);
   FUNC_4(VAR_10);
   VAR_12->tx2 = -1,
   VAR_12->lasttx = 2;
  } else
   VAR_12->lasttx = 20, VAR_12->txing = 0;
 } else if (VAR_12->tx2 < 0) {
  if (VAR_12->lasttx != 2 && VAR_12->lasttx != -2)
   FUNC_6("%s: bogus last_tx_buffer %d, tx2=%d\n",
          VAR_12->name, VAR_12->lasttx, VAR_12->tx2);
  VAR_12->tx2 = 0;
  if (VAR_12->tx1 > 0) {
   VAR_12->txing = 1;
   FUNC_0(VAR_10, VAR_12->tx1, VAR_12->tx_start_page);
   FUNC_4(VAR_10);
   VAR_12->tx1 = -1;
   VAR_12->lasttx = 1;
  } else
   VAR_12->lasttx = 10, VAR_12->txing = 0;
 }





 if (VAR_13 & VAR_5)
  VAR_10->stats.collisions++;
 if (VAR_13 & VAR_9)
  VAR_10->stats.tx_packets++;
 else {
  VAR_10->stats.tx_errors++;
  if (VAR_13 & VAR_3) {
   VAR_10->stats.tx_aborted_errors++;
   VAR_10->stats.collisions += 16;
  }
  if (VAR_13 & VAR_6)
   VAR_10->stats.tx_carrier_errors++;
  if (VAR_13 & VAR_7)
   VAR_10->stats.tx_fifo_errors++;
  if (VAR_13 & VAR_4)
   VAR_10->stats.tx_heartbeat_errors++;
  if (VAR_13 & VAR_8)
   VAR_10->stats.tx_window_errors++;
 }
 FUNC_5(VAR_10);
}
