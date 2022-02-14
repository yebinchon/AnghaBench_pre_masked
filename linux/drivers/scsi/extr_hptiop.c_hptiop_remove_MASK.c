
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct pci_dev {int dummy; } ;
struct hptiop_hba {size_t max_requests; TYPE_3__* pcidev; TYPE_2__* ops; scalar_t__* dma_coherent_handle; scalar_t__* dma_coherent; scalar_t__ req_size; TYPE_1__* host; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_8__ {int dev; int irq; } ;
struct TYPE_7__ {int (* unmap_pci_bar ) (struct hptiop_hba*) ;int (* internal_memfree ) (struct hptiop_hba*) ;} ;
struct TYPE_6__ {int host_no; } ;


 int FUNC_0 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,struct hptiop_hba*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (TYPE_3__*) ;
 struct Scsi_Host* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct hptiop_hba*) ;
 int FUNC_11 (struct hptiop_hba*) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_5(VAR_0);
 struct hptiop_hba *VAR_2 = (struct hptiop_hba *)VAR_1->hostdata;
 u32 VAR_3;

 FUNC_1("scsi%d: hptiop_remove\n", VAR_2->host->host_no);

 FUNC_9(VAR_1);

 FUNC_3(VAR_0);

 FUNC_2(VAR_2->pcidev->irq, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2->max_requests; VAR_3++) {
  if (VAR_2->dma_coherent[VAR_3] && VAR_2->dma_coherent_handle[VAR_3])
   FUNC_0(&VAR_2->pcidev->dev,
     VAR_2->req_size + 0x20,
     VAR_2->dma_coherent[VAR_3],
     VAR_2->dma_coherent_handle[VAR_3]);
  else
   break;
 }

 VAR_2->ops->internal_memfree(VAR_2);

 VAR_2->ops->unmap_pci_bar(VAR_2);

 FUNC_6(VAR_2->pcidev);
 FUNC_7(VAR_2->pcidev, ((void*)0));
 FUNC_4(VAR_2->pcidev);

 FUNC_8(VAR_1);
}
