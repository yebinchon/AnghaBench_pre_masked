
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int dma_addr; scalar_t__ entries; } ;
struct sge {struct freelQ* freelQ; TYPE_2__ respQ; TYPE_1__* adapter; } ;
struct respQ_e {int dummy; } ;
struct pci_dev {int dummy; } ;
struct freelQ_e {int dummy; } ;
struct freelQ {int size; int dma_addr; scalar_t__ entries; scalar_t__ centries; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct pci_dev*,struct freelQ*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pci_dev*,unsigned int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct sge *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->adapter->pdev;
 unsigned int VAR_3, VAR_4;

 if (VAR_1->respQ.entries) {
  VAR_3 = sizeof(struct respQ_e) * VAR_1->respQ.size;
  FUNC_2(VAR_2, VAR_3, VAR_1->respQ.entries,
        VAR_1->respQ.dma_addr);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct freelQ *VAR_5 = &VAR_1->freelQ[VAR_4];

  if (VAR_5->centries) {
   FUNC_0(VAR_2, VAR_5);
   FUNC_1(VAR_5->centries);
  }
  if (VAR_5->entries) {
   VAR_3 = sizeof(struct freelQ_e) * VAR_5->size;
   FUNC_2(VAR_2, VAR_3, VAR_5->entries,
         VAR_5->dma_addr);
  }
 }
}
