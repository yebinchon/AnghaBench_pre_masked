
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct bnxt {int state; int current_interval; int timer; int tx_ring_size; int rx_ring_size; int db_lock; int ntp_fltr_lock; int fw_reset_task; int sp_task; void* bar2; void* bar1; void* bar0; struct pci_dev* pdev; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct net_device*,int *) ;
 int VAR_8 ;
 int FUNC_4 (struct bnxt*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct bnxt*,struct pci_dev*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 struct bnxt* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 void* FUNC_13 (struct pci_dev*,int) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_20(struct pci_dev *VAR_11, struct net_device *VAR_12)
{
 int VAR_13;
 struct bnxt *VAR_14 = FUNC_9(VAR_12);

 FUNC_3(VAR_12, &VAR_11->dev);


 VAR_13 = FUNC_11(VAR_11);
 if (VAR_13) {
  FUNC_7(&VAR_11->dev, "Cannot enable PCI device, aborting\n");
  goto init_err;
 }

 if (!(FUNC_16(VAR_11, 0) & VAR_7)) {
  FUNC_7(&VAR_11->dev,
   "Cannot find PCI device base address, aborting\n");
  VAR_13 = -VAR_5;
  goto init_err_disable;
 }

 VAR_13 = FUNC_15(VAR_11, VAR_4);
 if (VAR_13) {
  FUNC_7(&VAR_11->dev, "Cannot obtain PCI resources, aborting\n");
  goto init_err_disable;
 }

 if (FUNC_8(&VAR_11->dev, FUNC_0(64)) != 0 &&
     FUNC_8(&VAR_11->dev, FUNC_0(32)) != 0) {
  FUNC_7(&VAR_11->dev, "System does not support DMA, aborting\n");
  goto init_err_disable;
 }

 FUNC_17(VAR_11);

 VAR_14->dev = VAR_12;
 VAR_14->pdev = VAR_11;

 VAR_14->bar0 = FUNC_13(VAR_11, 0);
 if (!VAR_14->bar0) {
  FUNC_7(&VAR_11->dev, "Cannot map device registers, aborting\n");
  VAR_13 = -VAR_6;
  goto init_err_release;
 }

 VAR_14->bar1 = FUNC_13(VAR_11, 2);
 if (!VAR_14->bar1) {
  FUNC_7(&VAR_11->dev, "Cannot map doorbell registers, aborting\n");
  VAR_13 = -VAR_6;
  goto init_err_release;
 }

 VAR_14->bar2 = FUNC_13(VAR_11, 4);
 if (!VAR_14->bar2) {
  FUNC_7(&VAR_11->dev, "Cannot map bar4 registers, aborting\n");
  VAR_13 = -VAR_6;
  goto init_err_release;
 }

 FUNC_12(VAR_11);

 FUNC_2(&VAR_14->sp_task, VAR_9);
 FUNC_1(&VAR_14->fw_reset_task, VAR_8);

 FUNC_18(&VAR_14->ntp_fltr_lock);




 VAR_14->rx_ring_size = VAR_0;
 VAR_14->tx_ring_size = VAR_1;

 FUNC_4(VAR_14);

 FUNC_19(&VAR_14->timer, VAR_10, 0);
 VAR_14->current_interval = VAR_3;

 FUNC_6(VAR_2, &VAR_14->state);
 return 0;

init_err_release:
 FUNC_5(VAR_14, VAR_11);
 FUNC_14(VAR_11);

init_err_disable:
 FUNC_10(VAR_11);

init_err:
 return VAR_13;
}
