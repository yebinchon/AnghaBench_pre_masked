
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u32 ;
struct platform_device {int dev; } ;
struct net_device {int hw_features; int features; int * ethtool_ops; int * netdev_ops; int name; } ;
struct macb_queue {int tx_error_task; int irq; int RBQPH; int TBQPH; int RBQP; int TBQP; int IMR; int IDR; int IER; int ISR; int RBQS; int napi; struct macb* bp; } ;
struct TYPE_3__ {scalar_t__ count; int list; } ;
struct TYPE_4__ {int mog_rx; int mog_init_rings; int mog_free_rx_buffers; int mog_alloc_rx_buffers; } ;
struct macb {int queue_mask; int hw_dma_cap; int caps; scalar_t__ max_tuples; scalar_t__ phy_interface; int rx_fs_lock; TYPE_1__ rx_fs_list; TYPE_2__ macbgem_ops; int max_tx_length; struct macb_queue* queues; int rx_ring_size; int tx_ring_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int VAR_8 ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int VAR_9 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int VAR_10 ;
 int FUNC_14 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_15 (int *,char*,int ,int) ;
 int FUNC_16 (int *,int ,int ,int ,int ,struct macb_queue*) ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_17 (struct macb*,int ) ;
 int VAR_51 ;
 int FUNC_18 (struct macb*,int ,int ,int) ;
 int VAR_52 ;
 int FUNC_19 (struct macb*) ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 scalar_t__ FUNC_20 (struct macb*) ;
 int FUNC_21 (struct macb*) ;
 int VAR_57 ;
 int FUNC_22 (struct macb*,int ,int) ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int FUNC_23 (struct macb*,int ,int) ;
 scalar_t__ FUNC_24 (int,int) ;
 struct macb* FUNC_25 (struct net_device*) ;
 int FUNC_26 (struct net_device*,int *,int ,int ) ;
 struct net_device* FUNC_27 (struct platform_device*) ;
 int FUNC_28 (struct platform_device*,unsigned int) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_61)
{
 struct net_device *VAR_62 = FUNC_27(VAR_61);
 unsigned int VAR_63, VAR_64;
 struct macb *VAR_65 = FUNC_25(VAR_62);
 struct macb_queue *VAR_66;
 int VAR_67;
 u32 VAR_68, VAR_69;

 VAR_65->tx_ring_size = VAR_4;
 VAR_65->rx_ring_size = VAR_3;





 for (VAR_63 = 0, VAR_64 = 0; VAR_63 < VAR_20; ++VAR_63) {
  if (!(VAR_65->queue_mask & (1 << VAR_63)))
   continue;

  VAR_66 = &VAR_65->queues[VAR_64];
  VAR_66->bp = VAR_65;
  FUNC_26(VAR_62, &VAR_66->napi, VAR_58, VAR_28);
  if (VAR_63) {
   VAR_66->ISR = FUNC_6(VAR_63 - 1);
   VAR_66->IER = FUNC_4(VAR_63 - 1);
   VAR_66->IDR = FUNC_3(VAR_63 - 1);
   VAR_66->IMR = FUNC_5(VAR_63 - 1);
   VAR_66->TBQP = FUNC_10(VAR_63 - 1);
   VAR_66->RBQP = FUNC_7(VAR_63 - 1);
   VAR_66->RBQS = FUNC_9(VAR_63 - 1);






  } else {

   VAR_66->ISR = VAR_19;
   VAR_66->IER = VAR_17;
   VAR_66->IDR = VAR_16;
   VAR_66->IMR = VAR_18;
   VAR_66->TBQP = VAR_25;
   VAR_66->RBQP = VAR_23;






  }






  VAR_66->irq = FUNC_28(VAR_61, VAR_64);
  VAR_67 = FUNC_16(&VAR_61->dev, VAR_66->irq, VAR_56,
           VAR_10, VAR_62->name, VAR_66);
  if (VAR_67) {
   FUNC_15(&VAR_61->dev,
    "Unable to request IRQ %d (error %d)\n",
    VAR_66->irq, VAR_67);
   return VAR_67;
  }

  FUNC_13(&VAR_66->tx_error_task, VAR_60);
  VAR_64++;
 }

 VAR_62->netdev_ops = &VAR_57;


 if (FUNC_20(VAR_65)) {
  VAR_65->max_tx_length = VAR_8;
  VAR_65->macbgem_ops.mog_alloc_rx_buffers = VAR_47;
  VAR_65->macbgem_ops.mog_free_rx_buffers = VAR_49;
  VAR_65->macbgem_ops.mog_init_rings = VAR_50;
  VAR_65->macbgem_ops.mog_rx = VAR_51;
  VAR_62->ethtool_ops = &VAR_48;
 } else {
  VAR_65->max_tx_length = VAR_21;
  VAR_65->macbgem_ops.mog_alloc_rx_buffers = VAR_52;
  VAR_65->macbgem_ops.mog_free_rx_buffers = VAR_54;
  VAR_65->macbgem_ops.mog_init_rings = VAR_55;
  VAR_65->macbgem_ops.mog_rx = VAR_59;
  VAR_62->ethtool_ops = &VAR_53;
 }


 VAR_62->hw_features = VAR_33;


 if (FUNC_0(VAR_34, FUNC_17(VAR_65, VAR_1)))
  VAR_62->hw_features |= VAR_22;


 if (FUNC_20(VAR_65) && !(VAR_65->caps & VAR_11))
  VAR_62->hw_features |= VAR_30 | VAR_32;
 if (VAR_65->caps & VAR_12)
  VAR_62->hw_features &= ~VAR_33;
 VAR_62->features = VAR_62->hw_features;





 VAR_69 = FUNC_17(VAR_65, VAR_2);
 VAR_65->max_tuples = FUNC_24((FUNC_0(VAR_41, VAR_69) / 3),
   FUNC_0(VAR_45, VAR_69));
 if (VAR_65->max_tuples > 0) {

  if (FUNC_0(VAR_42, VAR_69) > 0) {

   VAR_69 = 0;
   VAR_69 = FUNC_1(VAR_6, (uint16_t)VAR_7, VAR_69);
   FUNC_18(VAR_65, VAR_5, VAR_43, VAR_69);

   VAR_62->hw_features |= VAR_31;

   FUNC_12(&VAR_65->rx_fs_list.list);
   VAR_65->rx_fs_list.count = 0;
   FUNC_29(&VAR_65->rx_fs_lock);
  } else
   VAR_65->max_tuples = 0;
 }

 if (!(VAR_65->caps & VAR_14)) {
  VAR_68 = 0;
  if (VAR_65->phy_interface == VAR_36)
   VAR_68 = FUNC_2(VAR_39);
  else if (VAR_65->phy_interface == VAR_37 &&
    (VAR_65->caps & VAR_13))
   VAR_68 = FUNC_14(VAR_40);
  else if (!(VAR_65->caps & VAR_13))
   VAR_68 = FUNC_14(VAR_27);

  if (VAR_65->caps & VAR_15)
   VAR_68 |= FUNC_14(VAR_0);

  FUNC_22(VAR_65, VAR_46, VAR_68);
 }


 VAR_68 = FUNC_21(VAR_65);
 VAR_68 |= FUNC_19(VAR_65);
 if (VAR_65->phy_interface == VAR_38)
  VAR_68 |= FUNC_2(VAR_44) | FUNC_2(VAR_35);
 FUNC_23(VAR_65, VAR_29, VAR_68);

 return 0;
}
