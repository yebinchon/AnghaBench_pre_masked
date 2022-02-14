
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int vendor; int device; int subsystem_vendor; int subsystem_device; int class; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int,int) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "pci:v%08Xd%08Xsv%08Xsd%08Xbc%02Xsc%02Xi%02X\n",
         VAR_3->vendor, VAR_3->device,
         VAR_3->subsystem_vendor, VAR_3->subsystem_device,
         (u8)(VAR_3->class >> 16), (u8)(VAR_3->class >> 8),
         (u8)(VAR_3->class));
}
