
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
 int VAR_7 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,char*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_8)
{
 int VAR_9;
 u32 VAR_10, VAR_11;

 if (!FUNC_2(VAR_8))
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_8, VAR_7);
 if (!VAR_9)
  return -VAR_0;

 FUNC_3(VAR_8, VAR_9 + VAR_2, &VAR_10);
 FUNC_3(VAR_8, VAR_9 + VAR_1, &VAR_11);

 VAR_11 |= (VAR_10 & VAR_5);
 VAR_11 |= (VAR_10 & VAR_4);
 VAR_11 |= (VAR_10 & VAR_3);
 VAR_11 |= (VAR_10 & VAR_6);

 FUNC_4(VAR_8, VAR_9 + VAR_1, VAR_11);

 FUNC_1(VAR_8, "Intel SPT PCH root port ACS workaround enabled\n");

 return 0;
}
