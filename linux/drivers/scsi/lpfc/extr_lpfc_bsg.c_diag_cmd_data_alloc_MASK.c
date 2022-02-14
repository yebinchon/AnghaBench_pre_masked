
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ushort ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ bdeSize; scalar_t__ bdeFlags; } ;
struct TYPE_6__ {void* w; TYPE_2__ f; } ;
struct ulp_bde64 {TYPE_3__ tus; void* addrHigh; void* addrLow; } ;
struct pci_dev {int dev; } ;
struct lpfc_hba {struct pci_dev* pcidev; } ;
struct TYPE_4__ {int phys; scalar_t__ virt; int list; } ;
struct lpfc_dmabufext {int size; int flag; TYPE_1__ dma; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_dmabufext*) ;
 scalar_t__ FUNC_2 (int *,int,int *,int ) ;
 struct lpfc_dmabufext* FUNC_3 (int,int ) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int) ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static struct lpfc_dmabufext *
FUNC_9(struct lpfc_hba *VAR_3,
     struct ulp_bde64 *VAR_4, uint32_t VAR_5,
     int VAR_6)
{
 struct lpfc_dmabufext *VAR_7 = ((void*)0);
 struct lpfc_dmabufext *VAR_8;
 int VAR_9, VAR_10 = 0, VAR_11 = 0;
 struct pci_dev *VAR_12;

 VAR_12 = VAR_3->pcidev;

 while (VAR_5) {

  if (VAR_5 > VAR_1)
   VAR_9 = VAR_1;
  else
   VAR_9 = VAR_5;


  VAR_8 = FUNC_3(sizeof(struct lpfc_dmabufext), VAR_2);
  if (!VAR_8)
   goto out;

  FUNC_0(&VAR_8->dma.list);


  if (VAR_7)
   FUNC_5(&VAR_8->dma.list, &VAR_7->dma.list);
  else
   VAR_7 = VAR_8;


  VAR_8->dma.virt = FUNC_2(&VAR_12->dev,
         VAR_9,
         &(VAR_8->dma.phys),
         VAR_2);

  if (!VAR_8->dma.virt)
   goto out;

  VAR_8->size = VAR_9;

  if (VAR_6) {
   VAR_4->tus.f.bdeFlags = 0;
  } else {
   FUNC_6((uint8_t *)VAR_8->dma.virt, 0, VAR_9);
   VAR_4->tus.f.bdeFlags = VAR_0;
  }


  VAR_4->addrLow = FUNC_4(FUNC_8(VAR_8->dma.phys));
  VAR_4->addrHigh = FUNC_4(FUNC_7(VAR_8->dma.phys));
  VAR_4->tus.f.bdeSize = (ushort) VAR_9;
  VAR_4->tus.w = FUNC_4(VAR_4->tus.w);
  VAR_4++;

  VAR_11++;
  VAR_10 += VAR_9;
  VAR_5 -= VAR_9;
 }

 if (VAR_7) {
  VAR_7->flag = VAR_11;
  return VAR_7;
 }
out:
 FUNC_1(VAR_3, VAR_7);
 return ((void*)0);
}
