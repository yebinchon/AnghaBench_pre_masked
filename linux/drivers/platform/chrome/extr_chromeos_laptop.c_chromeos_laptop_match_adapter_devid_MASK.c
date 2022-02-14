
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static bool FUNC_3(struct device *VAR_0, u32 VAR_1)
{
 struct pci_dev *VAR_2;

 if (!FUNC_0(VAR_0))
  return 0;

 VAR_2 = FUNC_2(VAR_0);
 return VAR_1 == FUNC_1(VAR_2);
}
