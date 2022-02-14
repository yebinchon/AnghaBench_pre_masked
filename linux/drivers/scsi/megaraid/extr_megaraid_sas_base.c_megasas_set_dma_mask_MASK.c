
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_8__ {scalar_t__* dma_mask; scalar_t__ coherent_dma_mask; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct megasas_instance {scalar_t__ adapter_type; int consistent_mask_64bit; TYPE_1__* reg_set; struct pci_dev* pdev; } ;
struct TYPE_7__ {int outbound_scratch_pad_1; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*,char*,char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (struct megasas_instance*,int *) ;

__attribute__((used)) static int
FUNC_7(struct megasas_instance *VAR_3)
{
 u64 VAR_4;
 struct pci_dev *VAR_5;
 u32 VAR_6;

 VAR_5 = VAR_3->pdev;
 VAR_4 = (VAR_3->adapter_type >= VAR_2) ?
    FUNC_0(63) : FUNC_0(32);

 if (VAR_0) {
  if (FUNC_4(&VAR_5->dev, FUNC_0(63)) &&
      FUNC_5(&VAR_5->dev, FUNC_0(32)))
   goto fail_set_dma_mask;

  if ((*VAR_5->dev.dma_mask == FUNC_0(63)) &&
      (FUNC_3(&VAR_5->dev, VAR_4) &&
       FUNC_5(&VAR_5->dev, FUNC_0(32)))) {




   VAR_6 = FUNC_6
    (VAR_3, &VAR_3->reg_set->outbound_scratch_pad_1);

   if (!(VAR_6 & VAR_1))
    goto fail_set_dma_mask;
   else if (FUNC_5(&VAR_5->dev,
          FUNC_0(63)))
    goto fail_set_dma_mask;
  }
 } else if (FUNC_5(&VAR_5->dev, FUNC_0(32)))
  goto fail_set_dma_mask;

 if (VAR_5->dev.coherent_dma_mask == FUNC_0(32))
  VAR_3->consistent_mask_64bit = 0;
 else
  VAR_3->consistent_mask_64bit = 1;

 FUNC_2(&VAR_5->dev, "%s bit DMA mask and %s bit consistent mask\n",
   ((*VAR_5->dev.dma_mask == FUNC_0(63)) ? "63" : "32"),
   (VAR_3->consistent_mask_64bit ? "63" : "32"));

 return 0;

fail_set_dma_mask:
 FUNC_1(&VAR_5->dev, "Failed to set DMA mask\n");
 return -1;

}
