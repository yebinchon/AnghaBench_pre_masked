
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
typedef size_t u16 ;
struct sk_buff {unsigned int len; scalar_t__ ip_summed; int data; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct bcm_sysport_tx_ring {scalar_t__ desc_count; size_t curr_desc; size_t size; int lock; int index; struct bcm_sysport_cb* cbs; } ;
struct TYPE_4__ {int tx_dma_failed; } ;
struct bcm_sysport_priv {TYPE_2__ mib; scalar_t__ tsb_en; struct bcm_sysport_tx_ring* tx_rings; TYPE_1__* pdev; } ;
struct bcm_sysport_cb {struct sk_buff* skb; } ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_10 ;
 struct sk_buff* FUNC_2 (struct sk_buff*,struct net_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct device*,int ,unsigned int,int ) ;
 scalar_t__ FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct bcm_sysport_cb*,int ,int ) ;
 int FUNC_6 (struct bcm_sysport_cb*,int ,unsigned int) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (struct net_device*,char*,size_t) ;
 struct netdev_queue* FUNC_9 (struct net_device*,size_t) ;
 struct bcm_sysport_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct bcm_sysport_priv*,int ,struct net_device*,char*,int ,scalar_t__,size_t) ;
 int FUNC_12 (struct bcm_sysport_priv*,int ,struct net_device*,char*,int ,unsigned int) ;
 int FUNC_13 (struct netdev_queue*) ;
 size_t FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (struct bcm_sysport_priv*,unsigned int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_18 (int) ;
 unsigned int FUNC_19 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_20(struct sk_buff *VAR_15,
        struct net_device *VAR_16)
{
 struct bcm_sysport_priv *VAR_17 = FUNC_10(VAR_16);
 struct device *VAR_18 = &VAR_17->pdev->dev;
 struct bcm_sysport_tx_ring *VAR_19;
 struct bcm_sysport_cb *VAR_20;
 struct netdev_queue *VAR_21;
 u32 VAR_22, VAR_23;
 unsigned int VAR_24;
 unsigned long VAR_25;
 dma_addr_t VAR_26;
 u16 VAR_27;
 int VAR_28;

 VAR_27 = FUNC_14(VAR_15);
 VAR_21 = FUNC_9(VAR_16, VAR_27);
 VAR_19 = &VAR_17->tx_rings[VAR_27];


 FUNC_15(&VAR_19->lock, VAR_25);
 if (FUNC_18(VAR_19->desc_count == 0)) {
  FUNC_13(VAR_21);
  FUNC_8(VAR_16, "queue %d awake and ring full!\n", VAR_27);
  VAR_28 = VAR_8;
  goto out;
 }


 if (VAR_17->tsb_en) {
  VAR_15 = FUNC_2(VAR_15, VAR_16);
  if (!VAR_15) {
   VAR_28 = VAR_9;
   goto out;
  }
 }

 VAR_24 = VAR_15->len;

 VAR_26 = FUNC_3(VAR_18, VAR_15->data, VAR_24, VAR_7);
 if (FUNC_4(VAR_18, VAR_26)) {
  VAR_17->mib.tx_dma_failed++;
  FUNC_12(VAR_17, VAR_13, VAR_16, "DMA map failed at %p (len=%d)\n",
     VAR_15->data, VAR_24);
  VAR_28 = VAR_9;
  goto out;
 }


 VAR_20 = &VAR_19->cbs[VAR_19->curr_desc];
 VAR_20->skb = VAR_15;
 FUNC_5(VAR_20, VAR_11, VAR_26);
 FUNC_6(VAR_20, VAR_12, VAR_24);

 VAR_23 = FUNC_7(VAR_26);
 VAR_22 = FUNC_19(VAR_26) & VAR_1;
 VAR_22 |= (VAR_24 << VAR_4);
 VAR_22 |= (VAR_5 | VAR_2 | VAR_10) <<
         VAR_6;
 if (VAR_15->ip_summed == VAR_0)
  VAR_22 |= (VAR_3 << VAR_6);

 VAR_19->curr_desc++;
 if (VAR_19->curr_desc == VAR_19->size)
  VAR_19->curr_desc = 0;
 VAR_19->desc_count--;


 FUNC_17(VAR_17, VAR_22, FUNC_0(VAR_19->index));
 FUNC_17(VAR_17, VAR_23, FUNC_1(VAR_19->index));


 if (VAR_19->desc_count == 0)
  FUNC_13(VAR_21);

 FUNC_11(VAR_17, VAR_14, VAR_16, "ring=%d desc_count=%d, curr_desc=%d\n",
    VAR_19->index, VAR_19->desc_count, VAR_19->curr_desc);

 VAR_28 = VAR_9;
out:
 FUNC_16(&VAR_19->lock, VAR_25);
 return VAR_28;
}
