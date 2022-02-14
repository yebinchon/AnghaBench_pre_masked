
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {char* driver_override; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_1);
 ssize_t VAR_5;

 FUNC_0(VAR_1);
 VAR_5 = FUNC_2(VAR_3, VAR_0, "%s\n", VAR_4->driver_override);
 FUNC_1(VAR_1);
 return VAR_5;
}
