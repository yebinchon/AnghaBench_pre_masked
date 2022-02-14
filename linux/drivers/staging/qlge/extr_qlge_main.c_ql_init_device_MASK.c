
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ql_mpi_coredump {int dummy; } ;
struct ql_adapter {int mpi_mutex; int ide_completion; int mpi_core_to_log; int mpi_idc_work; int mpi_port_cfg_work; int mpi_work; int mpi_reset_work; int asic_reset_work; int workqueue; void* tx_max_coalesced_frames; void* rx_max_coalesced_frames; void* tx_coalesce_usecs; void* rx_coalesce_usecs; int rx_ring_size; int tx_ring_size; int current_mac_addr; TYPE_1__* nic_ops; int flags; int * mpi_coredump; int stats_lock; int hw_lock; int msg_enable; void* doorbell_area; int doorbell_area_size; void* reg_base; struct pci_dev* pdev; struct net_device* ndev; } ;
struct pci_dev {int needs_freset; int dev; } ;
struct net_device {int name; int addr_len; int dev_addr; } ;
struct TYPE_2__ {int (* get_flash ) (struct ql_adapter*) ;} ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ,...) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (void*,int ,int) ;
 int FUNC_9 (int *) ;
 struct ql_adapter* FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,int) ;
 int FUNC_16 (struct pci_dev*,int) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,int ) ;
 int FUNC_19 (struct pci_dev*,int ) ;
 int FUNC_20 (struct pci_dev*,struct net_device*) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*,int) ;
 int VAR_14 ;
 int FUNC_23 (struct ql_adapter*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_24 (struct pci_dev*) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct ql_adapter*) ;
 int * FUNC_28 (int) ;

__attribute__((used)) static int FUNC_29(struct pci_dev *VAR_22, struct net_device *VAR_23,
     int VAR_24)
{
 struct ql_adapter *VAR_25 = FUNC_10(VAR_23);
 int VAR_26 = 0;

 FUNC_8((void *)VAR_25, 0, sizeof(*VAR_25));
 VAR_26 = FUNC_13(VAR_22);
 if (VAR_26) {
  FUNC_3(&VAR_22->dev, "PCI device enable failed.\n");
  return VAR_26;
 }

 VAR_25->ndev = VAR_23;
 VAR_25->pdev = VAR_22;
 FUNC_20(VAR_22, VAR_23);


 VAR_26 = FUNC_22(VAR_22, 4096);
 if (VAR_26) {
  FUNC_3(&VAR_22->dev, "Set readrq failed.\n");
  goto err_out1;
 }

 VAR_26 = FUNC_14(VAR_22, VAR_2);
 if (VAR_26) {
  FUNC_3(&VAR_22->dev, "PCI region request failed.\n");
  return VAR_26;
 }

 FUNC_21(VAR_22);
 if (!FUNC_19(VAR_22, FUNC_0(64))) {
  FUNC_25(VAR_9, &VAR_25->flags);
  VAR_26 = FUNC_18(VAR_22, FUNC_0(64));
 } else {
  VAR_26 = FUNC_19(VAR_22, FUNC_0(32));
  if (!VAR_26)
         VAR_26 = FUNC_18(VAR_22, FUNC_0(32));
 }

 if (VAR_26) {
  FUNC_3(&VAR_22->dev, "No usable DMA configuration.\n");
  goto err_out2;
 }


 VAR_22->needs_freset = 1;
 FUNC_17(VAR_22);
 VAR_25->reg_base =
     FUNC_6(FUNC_16(VAR_22, 1),
       FUNC_15(VAR_22, 1));
 if (!VAR_25->reg_base) {
  FUNC_3(&VAR_22->dev, "Register mapping failed.\n");
  VAR_26 = -VAR_6;
  goto err_out2;
 }

 VAR_25->doorbell_area_size = FUNC_15(VAR_22, 3);
 VAR_25->doorbell_area =
     FUNC_6(FUNC_16(VAR_22, 3),
       FUNC_15(VAR_22, 3));
 if (!VAR_25->doorbell_area) {
  FUNC_3(&VAR_22->dev, "Doorbell register mapping failed.\n");
  VAR_26 = -VAR_6;
  goto err_out2;
 }

 VAR_26 = FUNC_23(VAR_25);
 if (VAR_26) {
  FUNC_3(&VAR_22->dev, "Register access failed.\n");
  VAR_26 = -VAR_5;
  goto err_out2;
 }
 VAR_25->msg_enable = FUNC_11(VAR_12, VAR_13);
 FUNC_26(&VAR_25->hw_lock);
 FUNC_26(&VAR_25->stats_lock);

 if (VAR_21) {
  VAR_25->mpi_coredump =
   FUNC_28(sizeof(struct ql_mpi_coredump));
  if (VAR_25->mpi_coredump == ((void*)0)) {
   VAR_26 = -VAR_6;
   goto err_out2;
  }
  if (VAR_20)
   FUNC_25(VAR_10, &VAR_25->flags);
 }

 VAR_26 = VAR_25->nic_ops->get_flash(VAR_25);
 if (VAR_26) {
  FUNC_3(&VAR_22->dev, "Invalid FLASH.\n");
  goto err_out2;
 }


 FUNC_7(VAR_25->current_mac_addr, VAR_23->dev_addr, VAR_23->addr_len);


 VAR_25->tx_ring_size = VAR_8;
 VAR_25->rx_ring_size = VAR_7;


 VAR_25->rx_coalesce_usecs = VAR_0;
 VAR_25->tx_coalesce_usecs = VAR_0;
 VAR_25->rx_max_coalesced_frames = VAR_1;
 VAR_25->tx_max_coalesced_frames = VAR_1;




 VAR_25->workqueue = FUNC_2("%s", VAR_11,
        VAR_23->name);
 if (!VAR_25->workqueue) {
  VAR_26 = -VAR_6;
  goto err_out2;
 }

 FUNC_1(&VAR_25->asic_reset_work, VAR_14);
 FUNC_1(&VAR_25->mpi_reset_work, VAR_18);
 FUNC_1(&VAR_25->mpi_work, VAR_19);
 FUNC_1(&VAR_25->mpi_port_cfg_work, VAR_17);
 FUNC_1(&VAR_25->mpi_idc_work, VAR_16);
 FUNC_1(&VAR_25->mpi_core_to_log, VAR_15);
 FUNC_5(&VAR_25->ide_completion);
 FUNC_9(&VAR_25->mpi_mutex);

 if (!VAR_24) {
  FUNC_4(&VAR_22->dev, "%s\n", VAR_3);
  FUNC_4(&VAR_22->dev, "Driver name: %s, Version: %s.\n",
    VAR_2, VAR_4);
 }
 return 0;
err_out2:
 FUNC_24(VAR_22);
err_out1:
 FUNC_12(VAR_22);
 return VAR_26;
}
