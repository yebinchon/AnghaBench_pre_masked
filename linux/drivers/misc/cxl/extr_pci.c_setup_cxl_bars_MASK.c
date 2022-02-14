
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_3)
{

 if ((FUNC_1(VAR_3) < 0x100000000ULL) ||
     (FUNC_2(VAR_3) < 0x100000000ULL)) {
  FUNC_0(&VAR_3->dev, "ABORTING: M32 BAR assignment incompatible with CXL\n");
  return -VAR_0;
 }






 FUNC_3(VAR_3, VAR_1, 0x00000000);
 FUNC_3(VAR_3, VAR_2, 0x00020000);

 return 0;
}
