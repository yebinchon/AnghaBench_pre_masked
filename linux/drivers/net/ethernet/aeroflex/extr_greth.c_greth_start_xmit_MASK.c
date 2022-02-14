
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct TYPE_4__ {int tx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct greth_private {scalar_t__ tx_free; int tx_next; int* tx_bufs_length; int devlock; int dev; struct greth_bd* tx_bd_base; TYPE_1__* regs; int netdev; } ;
struct greth_bd {int stat; int addr; } ;
typedef int netdev_tx_t ;
struct TYPE_3__ {int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct greth_private*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (unsigned char*,int ,int) ;
 struct greth_private* FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (struct greth_private*) ;
 int FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static netdev_tx_t
FUNC_18(struct sk_buff *VAR_11, struct net_device *VAR_12)
{
 struct greth_private *VAR_13 = FUNC_11(VAR_12);
 struct greth_bd *VAR_14;
 int VAR_15 = VAR_10;
 u32 VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19;


 FUNC_5(VAR_13->netdev);

 if (FUNC_17(VAR_13->tx_free <= 0)) {
  FUNC_15(&VAR_13->devlock, VAR_19);
  VAR_18 = FUNC_0(VAR_13->regs->control);

  if (VAR_18 & VAR_5)
   FUNC_1(VAR_13->regs->control, VAR_18 | VAR_7);
  FUNC_13(VAR_12);
  FUNC_16(&VAR_13->devlock, VAR_19);
  return VAR_9;
 }

 if (FUNC_12(VAR_13))
  FUNC_7(VAR_11);


 if (FUNC_17(VAR_11->len > VAR_8)) {
  VAR_12->stats.tx_errors++;
  goto out;
 }

 VAR_14 = VAR_13->tx_bd_base + VAR_13->tx_next;
 VAR_17 = FUNC_8(&VAR_14->addr);

 FUNC_10((unsigned char *) FUNC_14(VAR_17), VAR_11->data, VAR_11->len);

 FUNC_4(VAR_13->dev, VAR_17, VAR_11->len, VAR_0);

 VAR_16 = VAR_1 | VAR_2 | (VAR_11->len & VAR_3);
 VAR_13->tx_bufs_length[VAR_13->tx_next] = VAR_11->len & VAR_3;


 if (VAR_13->tx_next == VAR_6) {
  VAR_16 |= VAR_4;
 }

 VAR_13->tx_next = FUNC_2(VAR_13->tx_next);
 VAR_13->tx_free--;


 FUNC_9(&VAR_14->stat, VAR_16);
 FUNC_15(&VAR_13->devlock, VAR_19);
 FUNC_6(VAR_13);
 FUNC_16(&VAR_13->devlock, VAR_19);

out:
 FUNC_3(VAR_11);
 return VAR_15;
}
