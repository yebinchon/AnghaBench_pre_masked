
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (char*,char*,char*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_0);

 return FUNC_2(VAR_2, "%s\n", FUNC_0(FUNC_1(VAR_3)));
}
