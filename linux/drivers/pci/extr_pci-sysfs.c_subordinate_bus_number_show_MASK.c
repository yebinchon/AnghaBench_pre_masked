
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (char*,char*,int) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
        struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_2(VAR_2);
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_1, &VAR_6);
 if (VAR_7)
  return -VAR_0;

 return FUNC_1(VAR_4, "%u\n", VAR_6);
}
