
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int features; int hw_features; int gso_max_segs; int * ethtool_ops; int * netdev_ops; int watchdog_timeo; } ;
struct fec_enet_private {int rx_align; int tx_align; unsigned int total_tx_ring_size; unsigned int total_rx_ring_size; unsigned int num_rx_queues; unsigned int num_tx_queues; int quirks; int csum_flags; int napi; scalar_t__ hwp; struct fec_enet_priv_tx_q** tx_queue; struct fec_enet_priv_rx_q** rx_queue; TYPE_1__* pdev; scalar_t__ bufdesc_ex; } ;
struct TYPE_6__ {unsigned int ring_size; unsigned int qid; unsigned int dma; unsigned int dsize; unsigned int dsize_log2; struct bufdesc* last; scalar_t__ reg_desc_active; struct bufdesc* cur; struct bufdesc* base; } ;
struct fec_enet_priv_tx_q {TYPE_3__ bd; } ;
struct TYPE_5__ {unsigned int ring_size; unsigned int qid; unsigned int dma; unsigned int dsize; unsigned int dsize_log2; struct bufdesc* last; scalar_t__ reg_desc_active; struct bufdesc* cur; struct bufdesc* base; } ;
struct fec_enet_priv_rx_q {TYPE_2__ bd; } ;
struct bufdesc_ex {int dummy; } ;
struct bufdesc {int dummy; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;
 struct bufdesc* FUNC_5 (int *,int,unsigned int*,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_20 ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,int *) ;
 struct fec_enet_private* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,int *,int ,int ) ;
 scalar_t__* VAR_21 ;
 scalar_t__* VAR_22 ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_23)
{
 struct fec_enet_private *VAR_24 = FUNC_12(VAR_23);
 struct bufdesc *VAR_25;
 dma_addr_t VAR_26;
 int VAR_27;
 unsigned int VAR_28;
 unsigned VAR_29 = VAR_24->bufdesc_ex ? sizeof(struct bufdesc_ex) :
   sizeof(struct bufdesc);
 unsigned VAR_30 = FUNC_2(VAR_29);
 int VAR_31;

 FUNC_1(VAR_29 != (1 << VAR_30));




 VAR_24->rx_align = 0x3;
 VAR_24->tx_align = 0x3;



 VAR_31 = FUNC_4(&VAR_24->pdev->dev, FUNC_0(32));
 if (VAR_31 < 0) {
  FUNC_3(&VAR_24->pdev->dev, "No suitable DMA available\n");
  return VAR_31;
 }

 FUNC_6(VAR_23);

 VAR_27 = (VAR_24->total_tx_ring_size + VAR_24->total_rx_ring_size) * VAR_29;


 VAR_25 = FUNC_5(&VAR_24->pdev->dev, VAR_27, &VAR_26,
           VAR_9);
 if (!VAR_25) {
  return -VAR_0;
 }


 FUNC_9(VAR_23);

 FUNC_11(VAR_23, ((void*)0));


 for (VAR_28 = 0; VAR_28 < VAR_24->num_rx_queues; VAR_28++) {
  struct fec_enet_priv_rx_q *VAR_32 = VAR_24->rx_queue[VAR_28];
  unsigned VAR_33 = VAR_29 * VAR_32->bd.ring_size;

  VAR_32->bd.qid = VAR_28;
  VAR_32->bd.base = VAR_25;
  VAR_32->bd.cur = VAR_25;
  VAR_32->bd.dma = VAR_26;
  VAR_32->bd.dsize = VAR_29;
  VAR_32->bd.dsize_log2 = VAR_30;
  VAR_32->bd.reg_desc_active = VAR_24->hwp + VAR_21[VAR_28];
  VAR_26 += VAR_33;
  VAR_25 = (struct bufdesc *)(((void *)VAR_25) + VAR_33);
  VAR_32->bd.last = (struct bufdesc *)(((void *)VAR_25) - VAR_29);
 }

 for (VAR_28 = 0; VAR_28 < VAR_24->num_tx_queues; VAR_28++) {
  struct fec_enet_priv_tx_q *VAR_34 = VAR_24->tx_queue[VAR_28];
  unsigned VAR_35 = VAR_29 * VAR_34->bd.ring_size;

  VAR_34->bd.qid = VAR_28;
  VAR_34->bd.base = VAR_25;
  VAR_34->bd.cur = VAR_25;
  VAR_34->bd.dma = VAR_26;
  VAR_34->bd.dsize = VAR_29;
  VAR_34->bd.dsize_log2 = VAR_30;
  VAR_34->bd.reg_desc_active = VAR_24->hwp + VAR_22[VAR_28];
  VAR_26 += VAR_35;
  VAR_25 = (struct bufdesc *)(((void *)VAR_25) + VAR_35);
  VAR_34->bd.last = (struct bufdesc *)(((void *)VAR_25) - VAR_29);
 }



 VAR_23->watchdog_timeo = VAR_17;
 VAR_23->netdev_ops = &VAR_20;
 VAR_23->ethtool_ops = &VAR_18;

 FUNC_14(VAR_7, VAR_24->hwp + VAR_1);
 FUNC_13(VAR_23, &VAR_24->napi, VAR_19, VAR_10);

 if (VAR_24->quirks & VAR_5)

  VAR_23->features |= VAR_11;

 if (VAR_24->quirks & VAR_4) {
  VAR_23->gso_max_segs = VAR_2;


  VAR_23->features |= (VAR_13 | VAR_12
    | VAR_14 | VAR_15 | VAR_16);
  VAR_24->csum_flags |= VAR_8;
 }

 if (VAR_24->quirks & VAR_3) {
  VAR_24->tx_align = 0;
  VAR_24->rx_align = 0x3f;
 }

 VAR_23->hw_features = VAR_23->features;

 FUNC_10(VAR_23);

 if (VAR_24->quirks & VAR_6)
  FUNC_7(VAR_23);
 else
  FUNC_8(VAR_23);

 return 0;
}
