
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct bnad {int num_tx; int num_txq_per_tx; int num_rx; int num_rxp_per_rx; int id; int bar0; int work_q; int wq_name; int rx_coalescing_timeo; int tx_coalescing_timeo; int rxq_depth; int txq_depth; scalar_t__ msix_num; int bna_lock; int cfg_flags; scalar_t__ mmio_len; int mmio_start; struct pci_dev* pcidev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_9 ;
 int FUNC_1 (struct bnad*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ,unsigned long long) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,struct net_device*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,char*,char*,int) ;

__attribute__((used)) static int
FUNC_13(struct bnad *VAR_10,
   struct pci_dev *VAR_11, struct net_device *VAR_12)
{
 unsigned long VAR_13;

 FUNC_0(VAR_12, &VAR_11->dev);
 FUNC_9(VAR_11, VAR_12);

 VAR_10->netdev = VAR_12;
 VAR_10->pcidev = VAR_11;
 VAR_10->mmio_start = FUNC_8(VAR_11, 0);
 VAR_10->mmio_len = FUNC_7(VAR_11, 0);
 VAR_10->bar0 = FUNC_5(VAR_10->mmio_start, VAR_10->mmio_len);
 if (!VAR_10->bar0) {
  FUNC_3(&VAR_11->dev, "ioremap for bar0 failed\n");
  return -VAR_8;
 }
 FUNC_4(&VAR_11->dev, "bar0 mapped to %p, len %llu\n", VAR_10->bar0,
   (unsigned long long) VAR_10->mmio_len);

 FUNC_10(&VAR_10->bna_lock, VAR_13);
 if (!VAR_9)
  VAR_10->cfg_flags = VAR_3;

 VAR_10->cfg_flags |= VAR_2;

 FUNC_1(VAR_10);
 FUNC_11(&VAR_10->bna_lock, VAR_13);

 VAR_10->msix_num = (VAR_10->num_tx * VAR_10->num_txq_per_tx) +
  (VAR_10->num_rx * VAR_10->num_rxp_per_rx) +
    VAR_4;

 VAR_10->txq_depth = VAR_7;
 VAR_10->rxq_depth = VAR_6;

 VAR_10->tx_coalescing_timeo = VAR_1;
 VAR_10->rx_coalescing_timeo = VAR_0;

 FUNC_12(VAR_10->wq_name, "%s_wq_%d", VAR_5, VAR_10->id);
 VAR_10->work_q = FUNC_2(VAR_10->wq_name);
 if (!VAR_10->work_q) {
  FUNC_6(VAR_10->bar0);
  return -VAR_8;
 }

 return 0;
}
