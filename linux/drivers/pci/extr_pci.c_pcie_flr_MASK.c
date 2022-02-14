
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ imm_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,char*,int ) ;
 int FUNC_2 (struct pci_dev*,char*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;

int FUNC_5(struct pci_dev *VAR_3)
{
 if (!FUNC_3(VAR_3))
  FUNC_2(VAR_3, "timed out waiting for pending transaction; performing function level reset anyway\n");

 FUNC_4(VAR_3, VAR_1, VAR_2);

 if (VAR_3->imm_ready)
  return 0;






 FUNC_0(100);

 return FUNC_1(VAR_3, "FLR", VAR_0);
}
