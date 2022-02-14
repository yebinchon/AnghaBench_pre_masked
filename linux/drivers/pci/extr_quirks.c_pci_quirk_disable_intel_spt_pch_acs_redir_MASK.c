
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,char*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_7)
{
 int VAR_8;
 u32 VAR_9, VAR_10;

 if (!FUNC_2(VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7, VAR_6);
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(VAR_7, VAR_8 + VAR_2, &VAR_9);
 FUNC_3(VAR_7, VAR_8 + VAR_1, &VAR_10);

 VAR_10 &= ~(VAR_5 | VAR_3 | VAR_4);

 FUNC_4(VAR_7, VAR_8 + VAR_1, VAR_10);

 FUNC_1(VAR_7, "Intel SPT PCH root port workaround: disabled ACS redirect\n");

 return 0;
}
