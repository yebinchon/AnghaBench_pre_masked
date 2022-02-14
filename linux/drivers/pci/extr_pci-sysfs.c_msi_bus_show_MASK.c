
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int no_msi; struct pci_bus* subordinate; } ;
struct pci_bus {int bus_flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_1);
 struct pci_bus *VAR_5 = VAR_4->subordinate;

 return FUNC_0(VAR_3, "%u\n", VAR_5 ?
         !(VAR_5->bus_flags & VAR_0)
      : !VAR_4->no_msi);
}
