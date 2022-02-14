
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb {int dummy; } ;
struct pci_dev {int dev; } ;
struct device {int dummy; } ;


 struct tb* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct tb*) ;
 struct pci_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_4(VAR_0);
 struct tb *VAR_2 = FUNC_0(VAR_1);






 if (FUNC_2(&VAR_1->dev))
  FUNC_1(&VAR_1->dev);
 else
  FUNC_3(VAR_2);
}
