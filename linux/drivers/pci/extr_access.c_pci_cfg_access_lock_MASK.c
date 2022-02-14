
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int block_cfg_access; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct pci_dev *VAR_1)
{
 FUNC_0();

 FUNC_2(&VAR_0);
 if (VAR_1->block_cfg_access)
  FUNC_1(VAR_1);
 VAR_1->block_cfg_access = 1;
 FUNC_3(&VAR_0);
}
