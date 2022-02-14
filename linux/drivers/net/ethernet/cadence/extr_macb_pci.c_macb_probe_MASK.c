
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int num_res; int size_data; struct platform_device* pclk; struct platform_device* hclk; int dma_mask; struct resource* data; struct resource* res; int id; void* name; int fwnode; TYPE_1__* parent; int start; int flags; int end; } ;
struct platform_device_info {int num_res; int size_data; struct platform_device* pclk; struct platform_device* hclk; int dma_mask; struct platform_device_info* data; struct platform_device_info* res; int id; void* name; int fwnode; TYPE_1__* parent; int start; int flags; int end; } ;
struct platform_device {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct TYPE_4__ {int fwnode; } ;
struct pci_dev {int dma_mask; int devfn; TYPE_1__ dev; } ;
struct macb_platform_data {int num_res; int size_data; struct platform_device* pclk; struct platform_device* hclk; int dma_mask; struct macb_platform_data* data; struct macb_platform_data* res; int id; void* name; int fwnode; TYPE_1__* parent; int start; int flags; int end; } ;
typedef int plat_info ;
typedef int plat_data ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (struct platform_device*) ;
 void* FUNC_3 (TYPE_1__*,char*,int *,int ,int ) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (TYPE_1__*,char*,int *) ;
 int FUNC_7 (struct resource*,int,int) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,struct platform_device*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 struct platform_device* FUNC_14 (struct resource*) ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 int VAR_8;
 struct platform_device *VAR_9;
 struct platform_device_info VAR_10;
 struct macb_platform_data VAR_11;
 struct resource VAR_12[2];


 VAR_8 = FUNC_13(VAR_6);
 if (VAR_8 < 0) {
  FUNC_5(&VAR_6->dev, "Enabling PCI device has failed: %d", VAR_8);
  return VAR_8;
 }

 FUNC_12(VAR_6);


 FUNC_7(VAR_12, 0x00, sizeof(struct resource) * FUNC_0(VAR_12));
 VAR_12[0].start = FUNC_10(VAR_6, 0);
 VAR_12[0].end = FUNC_9(VAR_6, 0);
 VAR_12[0].name = VAR_4;
 VAR_12[0].flags = VAR_3;
 VAR_12[1].start = FUNC_8(VAR_6, 0);
 VAR_12[1].name = VAR_4;
 VAR_12[1].flags = VAR_2;

 FUNC_6(&VAR_6->dev, "EMAC physical base addr: %pa\n",
   &VAR_12[0].start);


 FUNC_7(&VAR_11, 0, sizeof(VAR_11));


 VAR_11.pclk = FUNC_3(&VAR_6->dev, "pclk", ((void*)0), 0,
       VAR_1);
 if (FUNC_1(VAR_11.pclk)) {
  VAR_8 = FUNC_2(VAR_11.pclk);
  goto err_pclk_register;
 }

 VAR_11.hclk = FUNC_3(&VAR_6->dev, "hclk", ((void*)0), 0,
       VAR_0);
 if (FUNC_1(VAR_11.hclk)) {
  VAR_8 = FUNC_2(VAR_11.hclk);
  goto err_hclk_register;
 }


 FUNC_7(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.parent = &VAR_6->dev;
 VAR_10.fwnode = VAR_6->dev.fwnode;
 VAR_10.name = VAR_5;
 VAR_10.id = VAR_6->devfn;
 VAR_10.res = VAR_12;
 VAR_10.num_res = FUNC_0(VAR_12);
 VAR_10.data = &VAR_11;
 VAR_10.size_data = sizeof(VAR_11);
 VAR_10.dma_mask = VAR_6->dma_mask;


 VAR_9 = FUNC_14(&VAR_10);
 if (FUNC_1(VAR_9)) {
  VAR_8 = FUNC_2(VAR_9);
  goto err_plat_dev_register;
 }

 FUNC_11(VAR_6, VAR_9);

 return 0;

err_plat_dev_register:
 FUNC_4(VAR_11.hclk);

err_hclk_register:
 FUNC_4(VAR_11.pclk);

err_pclk_register:
 return VAR_8;
}
