
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int pci_dev; int iomem_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct pqi_ctrl_info *VAR_0)
{
 FUNC_0(VAR_0->iomem_base);
 FUNC_3(VAR_0->pci_dev);
 if (FUNC_2(VAR_0->pci_dev))
  FUNC_1(VAR_0->pci_dev);
 FUNC_4(VAR_0->pci_dev, ((void*)0));
}
