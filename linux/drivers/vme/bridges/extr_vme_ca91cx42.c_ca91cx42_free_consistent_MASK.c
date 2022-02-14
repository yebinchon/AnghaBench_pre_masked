
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct pci_dev*,size_t,void*,int ) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, size_t VAR_1,
 void *VAR_2, dma_addr_t VAR_3)
{
 struct pci_dev *VAR_4;


 VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
