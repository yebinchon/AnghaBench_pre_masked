
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int devfn; } ;
struct device {int parent; } ;
struct acpi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct acpi_device* FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct pci_dev*) ;
 struct pci_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static struct acpi_device *FUNC_6(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_5(VAR_0);
 bool VAR_2;
 u64 VAR_3;

 VAR_2 = FUNC_4(VAR_1);

 VAR_3 = (FUNC_2(VAR_1->devfn) << 16) | FUNC_1(VAR_1->devfn);
 return FUNC_3(FUNC_0(VAR_0->parent), VAR_3,
          VAR_2);
}
