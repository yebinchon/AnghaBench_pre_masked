
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (char*,char*,...) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_0);
 char *VAR_4 = VAR_2;
 int VAR_5, VAR_6;
 u32 VAR_7;

 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  VAR_4 += FUNC_1(VAR_4, "[%08X] ", VAR_5 * 16);
  for (VAR_6 = 0; VAR_6 < 16; VAR_6 += 4) {
   FUNC_0(VAR_3, VAR_5 * 16 + VAR_6, &VAR_7);
   VAR_4 += FUNC_1(VAR_4, "%08X ", VAR_7);
  }
  VAR_4 += FUNC_1(VAR_4, "\n");
 }

 return VAR_4 - VAR_2;
}
