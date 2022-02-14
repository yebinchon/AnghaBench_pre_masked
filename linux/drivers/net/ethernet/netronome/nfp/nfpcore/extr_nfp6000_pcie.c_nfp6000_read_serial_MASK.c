
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 struct pci_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, u8 *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_5) {
  FUNC_0(VAR_2, "can't find PCIe Serial Number Capability\n");
  return -VAR_0;
 }

 FUNC_2(VAR_4, VAR_5 + 4, &VAR_6);
 FUNC_3(VAR_6 >> 16, VAR_3 + 4);
 FUNC_2(VAR_4, VAR_5 + 8, &VAR_6);
 FUNC_4(VAR_6, VAR_3);

 return 0;
}
