
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct netdev_private {int cur_tx; scalar_t__ tx_q_bytes; scalar_t__ dirty_tx; int drv_flags; int tx_full; int lock; scalar_t__ base_addr; TYPE_1__* tx_ring; scalar_t__* tx_addr; struct sk_buff** tx_skbuff; int pci_dev; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int length; int status; scalar_t__ buffer2; scalar_t__ buffer1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct net_device*,char*,scalar_t__,unsigned int) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_12, struct net_device *VAR_13)
{
 struct netdev_private *VAR_14 = FUNC_2(VAR_13);
 unsigned VAR_15;





 VAR_15 = VAR_14->cur_tx % VAR_9;

 VAR_14->tx_addr[VAR_15] = FUNC_4(VAR_14->pci_dev,
    VAR_12->data,VAR_12->len, VAR_5);
 VAR_14->tx_skbuff[VAR_15] = VAR_12;

 VAR_14->tx_ring[VAR_15].buffer1 = VAR_14->tx_addr[VAR_15];
 if (VAR_12->len < VAR_6) {
  VAR_14->tx_ring[VAR_15].length = VAR_2 | VAR_12->len;
 } else {
  int VAR_16 = VAR_12->len - VAR_6;

  VAR_14->tx_ring[VAR_15].buffer2 = VAR_14->tx_addr[VAR_15]+VAR_6;
  VAR_14->tx_ring[VAR_15].length = VAR_2 | (VAR_16 << 11) | VAR_6;
 }
 if(VAR_15 == VAR_9-1)
  VAR_14->tx_ring[VAR_15].length |= VAR_0;
 FUNC_5(&VAR_14->lock);
 VAR_14->cur_tx++;

 FUNC_7();
 VAR_14->tx_ring[VAR_15].status = VAR_1;
 FUNC_7();
 FUNC_0(0, VAR_14->base_addr + VAR_10);
 VAR_14->tx_q_bytes += VAR_12->len;


 if (VAR_14->cur_tx - VAR_14->dirty_tx > VAR_8 ||
  ((VAR_14->drv_flags & VAR_3) && VAR_14->tx_q_bytes > VAR_7)) {
  FUNC_3(VAR_13);
  FUNC_7();
  VAR_14->tx_full = 1;
 }
 FUNC_6(&VAR_14->lock);

 if (VAR_11 > 4) {
  FUNC_1(VAR_13, "Transmit frame #%d queued in slot %d\n",
      VAR_14->cur_tx, VAR_15);
 }
 return VAR_4;
}
