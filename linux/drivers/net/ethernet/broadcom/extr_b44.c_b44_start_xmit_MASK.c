
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct net_device {int dummy; } ;
struct dma_desc {int dummy; } ;
struct b44 {scalar_t__ tx_prod; int flags; int lock; int tx_ring_dma; TYPE_3__* sdev; int dma_offset; TYPE_2__* tx_ring; TYPE_1__* tx_buffers; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {int dma_dev; } ;
struct TYPE_5__ {void* addr; void* ctrl; } ;
struct TYPE_4__ {scalar_t__ mapping; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct b44*) ;
 struct sk_buff* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (TYPE_3__*,int ,scalar_t__,int ) ;
 int FUNC_5 (struct b44*,int ) ;
 int FUNC_6 (struct b44*,int ,scalar_t__) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_13 (struct net_device*,char*) ;
 struct b44* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*,scalar_t__) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_18 (struct sk_buff*,scalar_t__) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 () ;

__attribute__((used)) static netdev_tx_t FUNC_23(struct sk_buff *VAR_15, struct net_device *VAR_16)
{
 struct b44 *VAR_17 = FUNC_14(VAR_16);
 int VAR_18 = VAR_14;
 dma_addr_t VAR_19;
 u32 VAR_20, VAR_21, VAR_22;
 unsigned long VAR_23;

 VAR_20 = VAR_15->len;
 FUNC_19(&VAR_17->lock, VAR_23);


 if (FUNC_21(FUNC_2(VAR_17) < 1)) {
  FUNC_16(VAR_16);
  FUNC_13(VAR_16, "BUG! Tx Ring full when queue awake!\n");
  goto err_out;
 }

 VAR_19 = FUNC_10(VAR_17->sdev->dma_dev, VAR_15->data, VAR_20, VAR_10);
 if (FUNC_11(VAR_17->sdev->dma_dev, VAR_19) || VAR_19 + VAR_20 > FUNC_0(30)) {
  struct sk_buff *VAR_24;


  if (!FUNC_11(VAR_17->sdev->dma_dev, VAR_19))
   FUNC_12(VAR_17->sdev->dma_dev, VAR_19, VAR_20,
          VAR_10);

  VAR_24 = FUNC_3(VAR_20, VAR_11 | VAR_12);
  if (!VAR_24)
   goto err_out;

  VAR_19 = FUNC_10(VAR_17->sdev->dma_dev, VAR_24->data,
      VAR_20, VAR_10);
  if (FUNC_11(VAR_17->sdev->dma_dev, VAR_19) || VAR_19 + VAR_20 > FUNC_0(30)) {
   if (!FUNC_11(VAR_17->sdev->dma_dev, VAR_19))
    FUNC_12(VAR_17->sdev->dma_dev, VAR_19,
           VAR_20, VAR_10);
   FUNC_9(VAR_24);
   goto err_out;
  }

  FUNC_17(VAR_15, FUNC_18(VAR_24, VAR_20), VAR_20);
  FUNC_8(VAR_15);
  VAR_15 = VAR_24;
 }

 VAR_21 = VAR_17->tx_prod;
 VAR_17->tx_buffers[VAR_21].skb = VAR_15;
 VAR_17->tx_buffers[VAR_21].mapping = VAR_19;

 VAR_22 = (VAR_20 & VAR_8);
 VAR_22 |= VAR_7 | VAR_9 | VAR_5;
 if (VAR_21 == (VAR_4 - 1))
  VAR_22 |= VAR_6;

 VAR_17->tx_ring[VAR_21].ctrl = FUNC_7(VAR_22);
 VAR_17->tx_ring[VAR_21].addr = FUNC_7((u32) VAR_19+VAR_17->dma_offset);

 if (VAR_17->flags & VAR_3)
  FUNC_4(VAR_17->sdev, VAR_17->tx_ring_dma,
                       VAR_21 * sizeof(VAR_17->tx_ring[0]),
                       VAR_10);

 VAR_21 = FUNC_1(VAR_21);

 VAR_17->tx_prod = VAR_21;

 FUNC_22();

 FUNC_6(VAR_17, VAR_0, VAR_21 * sizeof(struct dma_desc));
 if (VAR_17->flags & VAR_1)
  FUNC_6(VAR_17, VAR_0, VAR_21 * sizeof(struct dma_desc));
 if (VAR_17->flags & VAR_2)
  FUNC_5(VAR_17, VAR_0);

 FUNC_15(VAR_16, VAR_15->len);

 if (FUNC_2(VAR_17) < 1)
  FUNC_16(VAR_16);

out_unlock:
 FUNC_20(&VAR_17->lock, VAR_23);

 return VAR_18;

err_out:
 VAR_18 = VAR_13;
 goto out_unlock;
}
