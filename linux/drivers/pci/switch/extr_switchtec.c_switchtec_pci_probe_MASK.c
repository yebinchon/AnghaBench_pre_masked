
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int devt; } ;
struct switchtec_dev {TYPE_2__ dev; int cdev; scalar_t__ dma_mrpc; TYPE_1__* mmio_part_cfg; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int class; } ;
struct TYPE_6__ {int mrpc_comp_hdr; } ;


 scalar_t__ FUNC_0 (struct switchtec_dev*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct switchtec_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (struct switchtec_dev*) ;
 int FUNC_7 (struct switchtec_dev*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (char*) ;
 struct switchtec_dev* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct switchtec_dev*) ;
 int FUNC_14 (struct switchtec_dev*) ;
 int FUNC_15 (struct switchtec_dev*,struct pci_dev*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_4,
          const struct pci_device_id *VAR_5)
{
 struct switchtec_dev *VAR_6;
 int VAR_7;

 if (VAR_4->class == (VAR_0 << 8))
  FUNC_11("ntb_hw_switchtec");

 VAR_6 = FUNC_12(VAR_4);
 if (FUNC_0(VAR_6))
  return FUNC_2(VAR_6);

 VAR_7 = FUNC_15(VAR_6, VAR_4);
 if (VAR_7)
  goto err_put;

 VAR_7 = FUNC_14(VAR_6);
 if (VAR_7) {
  FUNC_4(&VAR_6->dev, "failed to init isr.\n");
  goto err_put;
 }

 FUNC_9(VAR_1 |
    VAR_2,
    &VAR_6->mmio_part_cfg->mrpc_comp_hdr);
 FUNC_7(VAR_6);

 if (VAR_6->dma_mrpc)
  FUNC_6(VAR_6);

 VAR_7 = FUNC_3(&VAR_6->cdev, &VAR_6->dev);
 if (VAR_7)
  goto err_devadd;

 FUNC_5(&VAR_6->dev, "Management device registered.\n");

 return 0;

err_devadd:
 FUNC_13(VAR_6);
err_put:
 FUNC_8(&VAR_3, FUNC_1(VAR_6->dev.devt));
 FUNC_10(&VAR_6->dev);
 return VAR_7;
}
