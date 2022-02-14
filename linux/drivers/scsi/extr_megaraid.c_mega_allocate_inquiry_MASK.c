
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int mega_inquiry3 ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct pci_dev*,int,int *) ;

__attribute__((used)) static inline void *
FUNC_1(dma_addr_t *VAR_0, struct pci_dev *VAR_1)
{
 return FUNC_0(VAR_1, sizeof(mega_inquiry3), VAR_0);
}
