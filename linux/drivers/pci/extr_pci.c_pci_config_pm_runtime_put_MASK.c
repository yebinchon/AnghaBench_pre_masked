
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device* parent; } ;
struct pci_dev {struct device dev; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;

void FUNC_2(struct pci_dev *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct device *VAR_2 = VAR_1->parent;

 FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_1(VAR_2);
}
