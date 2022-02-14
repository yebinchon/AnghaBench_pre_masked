
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct pci_dev {int class; } ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_2__ {struct attribute attr; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct device* FUNC_0 (struct kobject*) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static umode_t FUNC_2(struct kobject *VAR_2,
      struct attribute *VAR_3, int VAR_4)
{
 struct device *VAR_5 = FUNC_0(VAR_2);
 struct pci_dev *VAR_6 = FUNC_1(VAR_5);

 if (VAR_3 == &VAR_1.attr)
  if ((VAR_6->class >> 8) != VAR_0)
   return 0;

 return VAR_3->mode;
}
