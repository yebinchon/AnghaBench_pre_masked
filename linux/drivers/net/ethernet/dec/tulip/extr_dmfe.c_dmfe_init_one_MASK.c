
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tx_desc {int dummy; } ;
struct pci_device_id {int driver_data; } ;
struct pci_dev {int revision; int irq; int dev; } ;
struct net_device {int * dev_addr; int dev; int * ethtool_ops; int * netdev_ops; } ;
struct dmfe_board_info {int chip_id; int chip_revision; int chip_type; int desc_pool_dma_ptr; void* desc_pool_ptr; int buf_pool_dma_ptr; void* buf_pool_ptr; int ioaddr; int * srom; int lock; struct pci_dev* pdev; scalar_t__ wol_mode; int buf_pool_dma_start; void* buf_pool_start; int first_tx_desc_dma; struct tx_desc* first_tx_desc; } ;
struct device_node {int dummy; } ;
typedef int __le16 ;


 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct net_device*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 struct net_device* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int,int ,int *,int ) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct dmfe_board_info* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct device_node*,char*,int *) ;
 void* FUNC_11 (struct pci_dev*,int,int *) ;
 struct device_node* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int,void*,int ) ;
 int FUNC_16 (struct pci_dev*,int ,int ) ;
 int FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,int,int*) ;
 int FUNC_20 (struct pci_dev*) ;
 scalar_t__ FUNC_21 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_22 (struct pci_dev*,int ) ;
 int FUNC_23 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_24 (struct pci_dev*,int ) ;
 int FUNC_25 (struct pci_dev*,struct net_device*) ;
 int FUNC_26 (struct pci_dev*) ;
 int FUNC_27 (struct pci_dev*,int ,int) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (char*,...) ;
 int FUNC_30 (char*) ;
 int VAR_11 ;
 int FUNC_31 (int ,int) ;
 int FUNC_32 (struct net_device*) ;
 int FUNC_33 (int *) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_34(struct pci_dev *VAR_13, const struct pci_device_id *VAR_14)
{
 struct dmfe_board_info *VAR_15;
 struct net_device *VAR_16;
 u32 VAR_17;
 int VAR_18, VAR_19;

 FUNC_2(0, "dmfe_init_one()", 0);

 if (!VAR_11++)
  FUNC_29("%s\n", VAR_12);
 VAR_16 = FUNC_4(sizeof(*VAR_15));
 if (VAR_16 == ((void*)0))
  return -VAR_3;
 FUNC_3(VAR_16, &VAR_13->dev);

 if (FUNC_24(VAR_13, FUNC_1(32))) {
  FUNC_30("32-bit PCI DMA not available\n");
  VAR_19 = -VAR_2;
  goto err_out_free;
 }


 VAR_19 = FUNC_14(VAR_13);
 if (VAR_19)
  goto err_out_free;

 if (!FUNC_23(VAR_13, 0)) {
  FUNC_28("I/O base is zero\n");
  VAR_19 = -VAR_2;
  goto err_out_disable;
 }

 if (FUNC_22(VAR_13, 0) < (FUNC_0(VAR_13)) ) {
  FUNC_28("Allocated I/O size too small\n");
  VAR_19 = -VAR_2;
  goto err_out_disable;
 }
 if (FUNC_21(VAR_13, VAR_1)) {
  FUNC_28("Failed to request PCI regions\n");
  VAR_19 = -VAR_2;
  goto err_out_disable;
 }


 VAR_15 = FUNC_8(VAR_16);


 VAR_15->desc_pool_ptr = FUNC_11(VAR_13, sizeof(struct tx_desc) *
   VAR_0 + 0x20, &VAR_15->desc_pool_dma_ptr);
 if (!VAR_15->desc_pool_ptr) {
  VAR_19 = -VAR_3;
  goto err_out_res;
 }

 VAR_15->buf_pool_ptr = FUNC_11(VAR_13, VAR_7 *
   VAR_8 + 4, &VAR_15->buf_pool_dma_ptr);
 if (!VAR_15->buf_pool_ptr) {
  VAR_19 = -VAR_3;
  goto err_out_free_desc;
 }

 VAR_15->first_tx_desc = (struct tx_desc *) VAR_15->desc_pool_ptr;
 VAR_15->first_tx_desc_dma = VAR_15->desc_pool_dma_ptr;
 VAR_15->buf_pool_start = VAR_15->buf_pool_ptr;
 VAR_15->buf_pool_dma_start = VAR_15->buf_pool_dma_ptr;

 VAR_15->chip_id = VAR_14->driver_data;

 VAR_15->ioaddr = FUNC_16(VAR_13, 0, 0);
 if (!VAR_15->ioaddr) {
  VAR_19 = -VAR_3;
  goto err_out_free_buf;
 }

 VAR_15->chip_revision = VAR_13->revision;
 VAR_15->wol_mode = 0;

 VAR_15->pdev = VAR_13;

 FUNC_25(VAR_13, VAR_16);
 VAR_16->netdev_ops = &VAR_10;
 VAR_16->ethtool_ops = &VAR_9;
 FUNC_9(VAR_16);
 FUNC_33(&VAR_15->lock);

 FUNC_19(VAR_13, 0x50, &VAR_17);
 VAR_17 &= 0x70000;
 if ( (VAR_17 == 0x10000) && (VAR_15->chip_revision == 0x31) )
  VAR_15->chip_type = 1;
 else
  VAR_15->chip_type = 0;


 for (VAR_18 = 0; VAR_18 < 64; VAR_18++) {
  ((__le16 *) VAR_15->srom)[VAR_18] =
   FUNC_5(FUNC_31(VAR_15->ioaddr, VAR_18));
 }


 for (VAR_18 = 0; VAR_18 < 6; VAR_18++)
  VAR_16->dev_addr[VAR_18] = VAR_15->srom[20 + VAR_18];

 VAR_19 = FUNC_32 (VAR_16);
 if (VAR_19)
  goto err_out_unmap;

 FUNC_6(&VAR_16->dev, "Davicom DM%04lx at pci%s, %pM, irq %d\n",
   VAR_14->driver_data >> 16,
   FUNC_18(VAR_13), VAR_16->dev_addr, VAR_13->irq);

 FUNC_26(VAR_13);

 return 0;

err_out_unmap:
 FUNC_17(VAR_13, VAR_15->ioaddr);
err_out_free_buf:
 FUNC_15(VAR_13, VAR_7 * VAR_8 + 4,
       VAR_15->buf_pool_ptr, VAR_15->buf_pool_dma_ptr);
err_out_free_desc:
 FUNC_15(VAR_13, sizeof(struct tx_desc) * VAR_0 + 0x20,
       VAR_15->desc_pool_ptr, VAR_15->desc_pool_dma_ptr);
err_out_res:
 FUNC_20(VAR_13);
err_out_disable:
 FUNC_13(VAR_13);
err_out_free:
 FUNC_7(VAR_16);

 return VAR_19;
}
