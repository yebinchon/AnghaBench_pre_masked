
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int freq; } ;
struct TYPE_6__ {TYPE_1__ clock; } ;
struct TYPE_7__ {int cmd_maxlen; TYPE_2__ can; int index; int * cmd_buffer; int write_tx_msg; int alloc_tx_msg; int enable_tx_path; int post_cmd; int write_cmd; int pre_cmd; } ;
struct pciefd_can {scalar_t__ reg_base; int tx_lock; TYPE_3__ ucan; void* tx_dma_vaddr; int tx_dma_laddr; void* rx_dma_vaddr; int rx_dma_laddr; struct pciefd_board* board; int pucan_cmd; } ;
struct pciefd_board {size_t can_count; TYPE_4__* pci_dev; struct pciefd_can** can; scalar_t__ reg_base; } ;
struct net_device {int irq; int name; } ;
struct TYPE_8__ {int dev; int irq; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net_device*,int *) ;
 struct net_device* FUNC_2 (int,size_t,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int ,scalar_t__,int ) ;
 void* FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (struct net_device*) ;
 struct pciefd_can* FUNC_7 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_8 (struct pciefd_can*,int ) ;
 int FUNC_9 (struct pciefd_can*,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct pciefd_board *VAR_14)
{
 struct net_device *VAR_15;
 struct pciefd_can *VAR_16;
 u32 VAR_17;
 int VAR_18;


 VAR_15 = FUNC_2(sizeof(*VAR_16), VAR_14->can_count,
        VAR_3);
 if (!VAR_15) {
  FUNC_3(&VAR_14->pci_dev->dev,
   "failed to alloc candev object\n");
  goto failure;
 }

 VAR_16 = FUNC_7(VAR_15);




 VAR_16->ucan.pre_cmd = VAR_11;
 VAR_16->ucan.write_cmd = VAR_12;
 VAR_16->ucan.post_cmd = VAR_10;
 VAR_16->ucan.enable_tx_path = VAR_9;
 VAR_16->ucan.alloc_tx_msg = VAR_8;
 VAR_16->ucan.write_tx_msg = VAR_13;


 VAR_16->ucan.cmd_buffer = &VAR_16->pucan_cmd;
 VAR_16->ucan.cmd_maxlen = sizeof(VAR_16->pucan_cmd);

 VAR_16->board = VAR_14;


 VAR_16->reg_base = VAR_14->reg_base + FUNC_0(VAR_16->ucan.index);


 VAR_16->rx_dma_vaddr = FUNC_5(&VAR_14->pci_dev->dev,
       VAR_6,
       &VAR_16->rx_dma_laddr,
       VAR_2);
 if (!VAR_16->rx_dma_vaddr) {
  FUNC_3(&VAR_14->pci_dev->dev,
   "Rx dmam_alloc_coherent(%u) failure\n",
   VAR_6);
  goto err_free_candev;
 }


 VAR_16->tx_dma_vaddr = FUNC_5(&VAR_14->pci_dev->dev,
       VAR_7,
       &VAR_16->tx_dma_laddr,
       VAR_2);
 if (!VAR_16->tx_dma_vaddr) {
  FUNC_3(&VAR_14->pci_dev->dev,
   "Tx dmam_alloc_coherent(%u) failure\n",
   VAR_7);
  goto err_free_candev;
 }


 FUNC_9(VAR_16, VAR_0, VAR_5);


 VAR_17 = FUNC_8(VAR_16, VAR_4);
 switch (VAR_17) {
 case 133:
  VAR_16->ucan.can.clock.freq = 20 * 1000 * 1000;
  break;
 case 132:
  VAR_16->ucan.can.clock.freq = 24 * 1000 * 1000;
  break;
 case 131:
  VAR_16->ucan.can.clock.freq = 30 * 1000 * 1000;
  break;
 case 130:
  VAR_16->ucan.can.clock.freq = 40 * 1000 * 1000;
  break;
 case 129:
  VAR_16->ucan.can.clock.freq = 60 * 1000 * 1000;
  break;
 default:
  FUNC_9(VAR_16, 128,
        VAR_4);


 case 128:
  VAR_16->ucan.can.clock.freq = 80 * 1000 * 1000;
  break;
 }

 VAR_15->irq = VAR_14->pci_dev->irq;

 FUNC_1(VAR_15, &VAR_14->pci_dev->dev);

 VAR_18 = FUNC_10(VAR_15);
 if (VAR_18) {
  FUNC_3(&VAR_14->pci_dev->dev,
   "couldn't register CAN device: %d\n", VAR_18);
  goto err_free_candev;
 }

 FUNC_11(&VAR_16->tx_lock);


 VAR_14->can[VAR_14->can_count] = VAR_16;

 FUNC_4(&VAR_14->pci_dev->dev, "%s at reg_base=0x%p irq=%d\n",
   VAR_15->name, VAR_16->reg_base, VAR_15->irq);

 return 0;

err_free_candev:
 FUNC_6(VAR_15);

failure:
 return -VAR_1;
}
