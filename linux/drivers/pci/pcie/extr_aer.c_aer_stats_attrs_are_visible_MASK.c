
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int umode_t ;
struct pci_dev {int aer_stats; } ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_6__ {struct attribute attr; } ;
struct TYPE_5__ {struct attribute attr; } ;
struct TYPE_4__ {struct attribute attr; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct device* FUNC_0 (struct kobject*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static umode_t FUNC_3(struct kobject *VAR_4,
        struct attribute *VAR_5, int VAR_6)
{
 struct device *VAR_7 = FUNC_0(VAR_4);
 struct pci_dev *VAR_8 = FUNC_2(VAR_7);

 if (!VAR_8->aer_stats)
  return 0;

 if ((VAR_5 == &VAR_1.attr ||
      VAR_5 == &VAR_2.attr ||
      VAR_5 == &VAR_3.attr) &&
     FUNC_1(VAR_8) != VAR_0)
  return 0;

 return VAR_5->mode;
}
