
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,char*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_2)
{
 if (!FUNC_3(VAR_2))
  return -VAR_0;

 if (FUNC_1(VAR_2)) {
  FUNC_4(VAR_2, "Failed to enable Intel PCH ACS quirk\n");
  return 0;
 }

 FUNC_2(VAR_2);

 VAR_2->dev_flags |= VAR_1;

 FUNC_0(VAR_2, "Intel PCH root port ACS workaround enabled\n");

 return 0;
}
