
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpumask const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct cpumask* FUNC_4 (struct pci_dev*,int) ;

int FUNC_5(struct pci_dev *VAR_0, int VAR_1)
{
 const struct cpumask *VAR_2;

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2)
  return FUNC_3(FUNC_0(FUNC_1(VAR_2)));
 return FUNC_2(&VAR_0->dev);
}
