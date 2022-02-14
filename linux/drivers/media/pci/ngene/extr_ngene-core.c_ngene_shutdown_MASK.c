
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ngene {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ngene*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct ngene* FUNC_3 (struct pci_dev*) ;
 int VAR_0 ;

void FUNC_4(struct pci_dev *VAR_1)
{
 struct ngene *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2 || !VAR_0)
  return;

 FUNC_0(&VAR_1->dev, "shutdown workaround...\n");
 FUNC_1(VAR_2);
 FUNC_2(VAR_1);
}
