
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev_addr; scalar_t__ phydev; int name; } ;
struct altera_tse_private {int revision; int rx_ring_size; int rx_irq; int tx_irq; int mac_cfg_lock; TYPE_1__* dmaops; int napi; int rxdma_irq_lock; int * rx_ring; int tx_ring_size; } ;
struct TYPE_2__ {int (* init_dma ) (struct altera_tse_private*) ;int (* start_rxdma ) (struct altera_tse_private*) ;int (* add_rx_desc ) (struct altera_tse_private*,int *) ;int (* enable_txirq ) (struct altera_tse_private*) ;int (* enable_rxirq ) (struct altera_tse_private*) ;int (* reset_dma ) (struct altera_tse_private*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct altera_tse_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct altera_tse_private*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 int FUNC_7 (struct net_device*,char*,...) ;
 struct altera_tse_private* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,char*,int) ;
 scalar_t__ FUNC_10 (struct altera_tse_private*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int,int ,int ,int ,struct net_device*) ;
 int FUNC_14 (struct altera_tse_private*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (struct altera_tse_private*) ;
 int FUNC_20 (struct altera_tse_private*) ;
 int FUNC_21 (struct altera_tse_private*) ;
 int FUNC_22 (struct altera_tse_private*) ;
 int FUNC_23 (struct altera_tse_private*,int *) ;
 int FUNC_24 (struct altera_tse_private*) ;
 int FUNC_25 (struct altera_tse_private*,int) ;

__attribute__((used)) static int FUNC_26(struct net_device *VAR_4)
{
 struct altera_tse_private *VAR_5 = FUNC_8(VAR_4);
 int VAR_6 = 0;
 int VAR_7;
 unsigned long int VAR_8;


 VAR_6 = VAR_5->dmaops->init_dma(VAR_5);
 if (VAR_6 != 0) {
  FUNC_7(VAR_4, "Cannot initialize DMA\n");
  goto phy_error;
 }

 if (FUNC_10(VAR_5))
  FUNC_9(VAR_4, "device MAC address %pM\n",
       VAR_4->dev_addr);

 if ((VAR_5->revision < 0xd00) || (VAR_5->revision > 0xe00))
  FUNC_9(VAR_4, "TSE revision %x\n", VAR_5->revision);

 FUNC_15(&VAR_5->mac_cfg_lock);

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6) {
  FUNC_7(VAR_4,
      "Cannot init the SGMII PCS (error: %d)\n", VAR_6);
  FUNC_17(&VAR_5->mac_cfg_lock);
  goto phy_error;
 }

 VAR_6 = FUNC_14(VAR_5);




 if (VAR_6)
  FUNC_6(VAR_4, "Cannot reset MAC core (error: %d)\n", VAR_6);

 VAR_6 = FUNC_3(VAR_5);
 FUNC_17(&VAR_5->mac_cfg_lock);
 if (VAR_6) {
  FUNC_7(VAR_4, "Cannot init MAC core (error: %d)\n", VAR_6);
  goto alloc_skbuf_error;
 }

 VAR_5->dmaops->reset_dma(VAR_5);


 VAR_5->rx_ring_size = VAR_2;
 VAR_5->tx_ring_size = VAR_3;
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6) {
  FUNC_7(VAR_4, "DMA descriptors initialization failed\n");
  goto alloc_skbuf_error;
 }



 VAR_6 = FUNC_13(VAR_5->rx_irq, VAR_1, VAR_0,
     VAR_4->name, VAR_4);
 if (VAR_6) {
  FUNC_7(VAR_4, "Unable to register RX interrupt %d\n",
      VAR_5->rx_irq);
  goto init_error;
 }


 VAR_6 = FUNC_13(VAR_5->tx_irq, VAR_1, VAR_0,
     VAR_4->name, VAR_4);
 if (VAR_6) {
  FUNC_7(VAR_4, "Unable to register TX interrupt %d\n",
      VAR_5->tx_irq);
  goto tx_request_irq_error;
 }


 FUNC_16(&VAR_5->rxdma_irq_lock, VAR_8);
 VAR_5->dmaops->enable_rxirq(VAR_5);
 VAR_5->dmaops->enable_txirq(VAR_5);


 for (VAR_7 = 0; VAR_7 < VAR_5->rx_ring_size; VAR_7++)
  VAR_5->dmaops->add_rx_desc(VAR_5, &VAR_5->rx_ring[VAR_7]);

 FUNC_18(&VAR_5->rxdma_irq_lock, VAR_8);

 if (VAR_4->phydev)
  FUNC_12(VAR_4->phydev);

 FUNC_5(&VAR_5->napi);
 FUNC_11(VAR_4);

 VAR_5->dmaops->start_rxdma(VAR_5);


 FUNC_15(&VAR_5->mac_cfg_lock);
 FUNC_25(VAR_5, 1);
 FUNC_17(&VAR_5->mac_cfg_lock);

 return 0;

tx_request_irq_error:
 FUNC_1(VAR_5->rx_irq, VAR_4);
init_error:
 FUNC_2(VAR_4);
alloc_skbuf_error:
phy_error:
 return VAR_6;
}
