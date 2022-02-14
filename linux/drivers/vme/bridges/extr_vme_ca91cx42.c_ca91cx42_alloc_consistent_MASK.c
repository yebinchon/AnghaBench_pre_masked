
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct pci_dev*,size_t,int *) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static void *FUNC_2(struct device *VAR_0, size_t VAR_1,
 dma_addr_t *VAR_2)
{
 struct pci_dev *VAR_3;


 VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
