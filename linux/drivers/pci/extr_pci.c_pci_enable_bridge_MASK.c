
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int is_busmaster; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,char*,int) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct pci_dev *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  FUNC_5(VAR_1);

 if (FUNC_2(VAR_0)) {
  if (!VAR_0->is_busmaster)
   FUNC_3(VAR_0);
  return;
 }

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  FUNC_1(VAR_0, "Error enabling bridge (%d), continuing\n",
   VAR_2);
 FUNC_3(VAR_0);
}
