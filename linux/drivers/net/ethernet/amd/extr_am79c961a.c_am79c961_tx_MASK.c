
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int collisions; short tx_bytes; int tx_packets; int tx_fifo_errors; int tx_carrier_errors; int tx_window_errors; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct dev_priv {int txtail; int txhead; int txhdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int,int ) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_7, struct dev_priv *VAR_8)
{
 do {
  short VAR_9;
  u_int VAR_10;
  u_int VAR_11;

  VAR_10 = VAR_8->txhdr + (VAR_8->txtail << 3);
  VAR_11 = FUNC_0 (VAR_7, VAR_10 + 2);
  if (VAR_11 & VAR_1)
   break;

  VAR_8->txtail ++;
  if (VAR_8->txtail >= VAR_6)
   VAR_8->txtail = 0;

  if (VAR_11 & VAR_0) {
   u_int VAR_12;

   VAR_7->stats.tx_errors++;

   VAR_12 = FUNC_0 (VAR_7, VAR_10 + 6);




   FUNC_1 (VAR_7, VAR_10 + 6, 0);

   if (VAR_12 & VAR_4)
    VAR_7->stats.collisions += 16;
   if (VAR_12 & VAR_3)
    VAR_7->stats.tx_window_errors++;
   if (VAR_12 & VAR_2)
    VAR_7->stats.tx_carrier_errors++;
   if (VAR_12 & VAR_5)
    VAR_7->stats.tx_fifo_errors++;
   continue;
  }
  VAR_7->stats.tx_packets++;
  VAR_9 = FUNC_0 (VAR_7, VAR_10 + 4);
  VAR_7->stats.tx_bytes += -VAR_9;
 } while (VAR_8->txtail != VAR_8->txhead);

 FUNC_2(VAR_7);
}
