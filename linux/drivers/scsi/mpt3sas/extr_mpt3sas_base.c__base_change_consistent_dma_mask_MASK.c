
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct MPT3SAS_ADAPTER {int dma_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static int
FUNC_2(struct MPT3SAS_ADAPTER *VAR_1,
          struct pci_dev *VAR_2)
{
 if (FUNC_1(VAR_2, FUNC_0(VAR_1->dma_mask))) {
  if (FUNC_1(VAR_2, FUNC_0(32)))
   return -VAR_0;
 }
 return 0;
}
