
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,char*,char*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int,int,char*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 static char *VAR_1 = "CS5536 ISA bridge";

 if (FUNC_1(VAR_0, 0) != 8) {
  FUNC_2(VAR_0, 0, 8, VAR_1);
  FUNC_2(VAR_0, 1, 256, VAR_1);
  FUNC_2(VAR_0, 2, 64, VAR_1);
  FUNC_0(VAR_0, "%s bug detected (incorrect header); workaround applied\n",
    VAR_1);
 }
}
