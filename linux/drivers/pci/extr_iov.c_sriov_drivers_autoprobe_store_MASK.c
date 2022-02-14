
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* sriov; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int drivers_autoprobe; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int*) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_1(VAR_1);
 bool VAR_6;

 if (FUNC_0(VAR_3, &VAR_6) < 0)
  return -VAR_0;

 VAR_5->sriov->drivers_autoprobe = VAR_6;

 return VAR_4;
}
