
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (char*,char*,int) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
           struct device_attribute *VAR_5, char *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_2(VAR_4);
 u16 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_1, &VAR_8);
 if (VAR_9)
  return -VAR_0;

 return FUNC_1(VAR_6, "%u\n",
  (VAR_8 & VAR_2) >> VAR_3);
}
