
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct pci_dev {int dummy; } ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;


 struct device* FUNC_0 (struct kobject*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static umode_t FUNC_3(struct kobject *VAR_0,
         struct attribute *VAR_1, int VAR_2)
{
 struct device *VAR_3 = FUNC_0(VAR_0);
 struct pci_dev *VAR_4 = FUNC_2(VAR_3);

 if (FUNC_1(VAR_4))
  return VAR_1->mode;

 return 0;
}
