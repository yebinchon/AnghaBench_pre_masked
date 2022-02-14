
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; struct boom_tx_desc* data; } ;
struct TYPE_2__ {int tx_bytes; int tx_aborted_errors; int tx_fifo_errors; } ;
struct net_device {int base_addr; TYPE_1__ stats; int name; } ;
struct corkscrew_private {int cur_tx; int tx_full; int dirty_tx; struct sk_buff* tx_skb; scalar_t__ bus_master; int lock; struct boom_tx_desc* tx_ring; struct sk_buff** tx_skbuff; scalar_t__ full_bus_master_tx; } ;
struct boom_tx_desc {int next; int addr; int length; int status; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct sk_buff*) ;
 short FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct boom_tx_desc*) ;
 struct corkscrew_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (scalar_t__,struct boom_tx_desc*,int) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (char*,int ,short) ;
 int VAR_19 ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_15(struct sk_buff *VAR_20,
     struct net_device *VAR_21)
{
 struct corkscrew_private *VAR_22 = FUNC_5(VAR_21);
 int VAR_23 = VAR_21->base_addr;



 FUNC_6(VAR_21);

 if (VAR_22->full_bus_master_tx) {

  int VAR_24 = VAR_22->cur_tx % VAR_11;
  struct boom_tx_desc *VAR_25;
  unsigned long VAR_26;
  int VAR_27;

  if (VAR_22->tx_full)
   return VAR_6;
  if (VAR_22->cur_tx != 0)
   VAR_25 = &VAR_22->tx_ring[(VAR_22->cur_tx - 1) % VAR_11];
  else
   VAR_25 = ((void*)0);
  if (VAR_18 > 3)
   FUNC_12("%s: Trying to send a packet, Tx index %d.\n",
    VAR_21->name, VAR_22->cur_tx);

  VAR_22->tx_skbuff[VAR_24] = VAR_20;
  VAR_22->tx_ring[VAR_24].next = 0;
  VAR_22->tx_ring[VAR_24].addr = FUNC_4(VAR_20->data);
  VAR_22->tx_ring[VAR_24].length = VAR_20->len | 0x80000000;
  VAR_22->tx_ring[VAR_24].status = VAR_20->len | 0x80000000;

  FUNC_13(&VAR_22->lock, VAR_26);
  FUNC_11(VAR_2, VAR_23 + VAR_4);

  for (VAR_27 = 20; VAR_27 >= 0; VAR_27--)
   if ((FUNC_3(VAR_23 + VAR_5) & VAR_0) == 0)
    break;
  if (VAR_25)
   VAR_25->next = FUNC_4(&VAR_22->tx_ring[VAR_24]);
  if (FUNC_2(VAR_23 + VAR_1) == 0) {
   FUNC_9(FUNC_4(&VAR_22->tx_ring[VAR_24]),
        VAR_23 + VAR_1);
   VAR_19++;
  }
  FUNC_11(VAR_3, VAR_23 + VAR_4);
  FUNC_14(&VAR_22->lock, VAR_26);

  VAR_22->cur_tx++;
  if (VAR_22->cur_tx - VAR_22->dirty_tx > VAR_11 - 1)
   VAR_22->tx_full = 1;
  else {
   if (VAR_25)
    VAR_25->status &= ~0x80000000;
   FUNC_7(VAR_21);
  }
  return VAR_7;
 }

 FUNC_9(VAR_20->len, VAR_23 + VAR_10);
 VAR_21->stats.tx_bytes += VAR_20->len;
 FUNC_10(VAR_23 + VAR_10, VAR_20->data, (VAR_20->len + 3) >> 2);
 FUNC_0(VAR_20);
 if (FUNC_3(VAR_23 + VAR_13) > 1536) {
  FUNC_7(VAR_21);
 } else

  FUNC_11(VAR_8 + (1536 >> 2), VAR_23 + VAR_4);




 {
  short VAR_28;
  int VAR_29 = 4;

  while (--VAR_29 > 0 && (VAR_28 = FUNC_1(VAR_23 + VAR_15)) > 0) {
   if (VAR_28 & 0x3C) {
    if (VAR_18 > 2)
     FUNC_12("%s: Tx error, status %2.2x.\n",
      VAR_21->name, VAR_28);
    if (VAR_28 & 0x04)
     VAR_21->stats.tx_fifo_errors++;
    if (VAR_28 & 0x38)
     VAR_21->stats.tx_aborted_errors++;
    if (VAR_28 & 0x30) {
     int VAR_30;
     FUNC_11(VAR_14, VAR_23 + VAR_4);
     for (VAR_30 = 20; VAR_30 >= 0; VAR_30--)
      if (!(FUNC_3(VAR_23 + VAR_5) & VAR_0))
       break;
    }
    FUNC_11(VAR_12, VAR_23 + VAR_4);
   }
   FUNC_8(0x00, VAR_23 + VAR_15);
  }
 }
 return VAR_7;
}
