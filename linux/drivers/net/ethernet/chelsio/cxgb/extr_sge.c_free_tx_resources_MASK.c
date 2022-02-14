
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge {struct cmdQ* cmdQ; TYPE_1__* adapter; } ;
struct pci_dev {int dummy; } ;
struct cmdQ_e {int dummy; } ;
struct cmdQ {int size; int dma_addr; scalar_t__ entries; scalar_t__ centries; scalar_t__ in_use; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sge*,struct cmdQ*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pci_dev*,unsigned int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct sge *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->adapter->pdev;
 unsigned int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct cmdQ *VAR_5 = &VAR_1->cmdQ[VAR_4];

  if (VAR_5->centries) {
   if (VAR_5->in_use)
    FUNC_0(VAR_1, VAR_5, VAR_5->in_use);
   FUNC_1(VAR_5->centries);
  }
  if (VAR_5->entries) {
   VAR_3 = sizeof(struct cmdQ_e) * VAR_5->size;
   FUNC_2(VAR_2, VAR_3, VAR_5->entries,
         VAR_5->dma_addr);
  }
 }
}
