
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct net_device {int dummy; } ;
struct bigmac {int tx_new; scalar_t__ creg; int lock; TYPE_3__* bmac_block; struct sk_buff** tx_skbs; TYPE_1__* bigmac_op; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {TYPE_2__* be_txd; } ;
struct TYPE_5__ {int tx_flags; int tx_addr; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct bigmac*) ;
 int FUNC_3 (int *,int ,int,int ) ;
 struct bigmac* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static netdev_tx_t
FUNC_9(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct bigmac *VAR_11 = FUNC_4(VAR_10);
 int VAR_12, VAR_13;
 u32 VAR_14;

 VAR_12 = VAR_9->len;
 VAR_14 = FUNC_3(&VAR_11->bigmac_op->dev, VAR_9->data,
     VAR_12, VAR_2);


 FUNC_7(&VAR_11->lock);
 VAR_13 = VAR_11->tx_new;
 FUNC_0(("bigmac_start_xmit: len(%d) entry(%d)\n", VAR_12, VAR_13));
 VAR_11->bmac_block->be_txd[VAR_13].tx_flags = VAR_8;
 VAR_11->tx_skbs[VAR_13] = VAR_9;
 VAR_11->bmac_block->be_txd[VAR_13].tx_addr = VAR_14;
 VAR_11->bmac_block->be_txd[VAR_13].tx_flags =
  (VAR_6 | VAR_7 | VAR_4 | (VAR_12 & VAR_5));
 VAR_11->tx_new = FUNC_1(VAR_13);
 if (FUNC_2(VAR_11) <= 0)
  FUNC_5(VAR_10);
 FUNC_8(&VAR_11->lock);


 FUNC_6(VAR_1, VAR_11->creg + VAR_0);


 return VAR_3;
}
