
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device {struct device* parent; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static struct pci_dev *FUNC_4(struct device *VAR_0)
{
 struct device *VAR_1;

 VAR_0 = FUNC_1(VAR_0);

 while (VAR_0) {
  if (FUNC_0(VAR_0))
   return FUNC_3(VAR_0);

  VAR_1 = FUNC_1(VAR_0->parent);
  FUNC_2(VAR_0);
  VAR_0 = VAR_1;
 }

 return ((void*)0);
}
