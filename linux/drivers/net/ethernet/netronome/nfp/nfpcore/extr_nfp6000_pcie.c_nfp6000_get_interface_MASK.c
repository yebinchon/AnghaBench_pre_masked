
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (!VAR_4) {
  FUNC_0(VAR_2, "can't find PCIe Serial Number Capability\n");
  return -VAR_0;
 }

 FUNC_2(VAR_3, VAR_4 + 4, &VAR_5);

 return VAR_5 & 0xffff;
}
