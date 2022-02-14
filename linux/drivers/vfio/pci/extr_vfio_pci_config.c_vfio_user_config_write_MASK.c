
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int,int ) ;
 int FUNC_2 (struct pci_dev*,int,int ) ;
 int FUNC_3 (struct pci_dev*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_1, int VAR_2,
      __le32 VAR_3, int VAR_4)
{
 int VAR_5 = -VAR_0;
 u32 VAR_6 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 1:
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_6);
  break;
 case 2:
  VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_6);
  break;
 case 4:
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_6);
  break;
 }

 return VAR_5;
}
