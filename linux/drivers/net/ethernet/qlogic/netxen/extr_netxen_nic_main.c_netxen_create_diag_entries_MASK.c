
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct netxen_adapter {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*,int *) ;
 scalar_t__ FUNC_2 (struct device*,int *) ;

__attribute__((used)) static void
FUNC_3(struct netxen_adapter *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->pdev;
 struct device *VAR_6;

 VAR_6 = &VAR_5->dev;
 if (FUNC_2(VAR_6, &VAR_3))
  FUNC_0(VAR_6, "failed to create diag_mode sysfs entry\n");
 if (FUNC_1(VAR_6, &VAR_0))
  FUNC_0(VAR_6, "failed to create crb sysfs entry\n");
 if (FUNC_1(VAR_6, &VAR_2))
  FUNC_0(VAR_6, "failed to create mem sysfs entry\n");
 if (FUNC_1(VAR_6, &VAR_1))
  FUNC_0(VAR_6, "failed to create dimm sysfs entry\n");
}
