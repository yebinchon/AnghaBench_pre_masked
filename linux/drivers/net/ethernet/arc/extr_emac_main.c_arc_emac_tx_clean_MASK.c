
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct net_device_stats {int tx_bytes; int tx_packets; int tx_fifo_errors; int collisions; int tx_carrier_errors; int tx_dropped; int tx_errors; } ;
struct net_device {int dev; struct net_device_stats stats; } ;
struct buffer_state {struct sk_buff* skb; } ;
struct arc_emac_priv {unsigned int txbd_dirty; struct buffer_state* tx_buff; struct arc_emac_bd* txbd; } ;
struct arc_emac_bd {int info; scalar_t__ data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct arc_emac_priv*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct buffer_state*,int ) ;
 int FUNC_3 (struct buffer_state*,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 unsigned int FUNC_5 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (unsigned int) ;
 struct arc_emac_priv* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (unsigned int) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_10)
{
 struct arc_emac_priv *VAR_11 = FUNC_7(VAR_10);
 struct net_device_stats *VAR_12 = &VAR_10->stats;
 unsigned int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  unsigned int *VAR_14 = &VAR_11->txbd_dirty;
  struct arc_emac_bd *VAR_15 = &VAR_11->txbd[*VAR_14];
  struct buffer_state *VAR_16 = &VAR_11->tx_buff[*VAR_14];
  struct sk_buff *VAR_17 = VAR_16->skb;
  unsigned int VAR_18 = FUNC_5(VAR_15->info);

  if ((VAR_18 & VAR_4) || !VAR_15->data || !VAR_17)
   break;

  if (FUNC_11(VAR_18 & (VAR_2 | VAR_0 | VAR_5 | VAR_7))) {
   VAR_12->tx_errors++;
   VAR_12->tx_dropped++;

   if (VAR_18 & VAR_0)
    VAR_12->tx_carrier_errors++;

   if (VAR_18 & VAR_5)
    VAR_12->collisions++;

   if (VAR_18 & VAR_7)
    VAR_12->tx_fifo_errors++;
  } else if (FUNC_6(VAR_18 & VAR_3)) {
   VAR_12->tx_packets++;
   VAR_12->tx_bytes += VAR_17->len;
  }

  FUNC_4(&VAR_10->dev, FUNC_2(VAR_16, VAR_8),
     FUNC_3(VAR_16, VAR_9), VAR_1);


  FUNC_1(VAR_17);

  VAR_15->data = 0;
  VAR_15->info = 0;
  VAR_16->skb = ((void*)0);

  *VAR_14 = (*VAR_14 + 1) % VAR_6;
 }




 FUNC_10();

 if (FUNC_8(VAR_10) && FUNC_0(VAR_11))
  FUNC_9(VAR_10);
}
