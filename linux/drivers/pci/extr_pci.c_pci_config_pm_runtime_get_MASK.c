
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device* parent; } ;
struct pci_dev {scalar_t__ current_state; struct device dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;

void FUNC_4(struct pci_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct device *VAR_3 = VAR_2->parent;

 if (VAR_3)
  FUNC_2(VAR_3);
 FUNC_1(VAR_2);




 FUNC_0(VAR_2);





 if (VAR_1->current_state == VAR_0)
  FUNC_3(VAR_2);
}
