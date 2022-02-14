
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int device; scalar_t__ msix_cap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_6, int VAR_7)
{
 u16 VAR_8;
 u16 VAR_9;





 if ((VAR_6->device & 0xf000) != 0x4000)
  return -VAR_0;





 if (VAR_7)
  return 0;







 FUNC_0(VAR_6, VAR_1, &VAR_8);
 FUNC_3(VAR_6, VAR_1,
         VAR_8 | VAR_2);





 FUNC_2(VAR_6);
 FUNC_0(VAR_6, VAR_6->msix_cap+VAR_3, &VAR_9);
 if ((VAR_9 & VAR_4) == 0)
  FUNC_3(VAR_6, VAR_6->msix_cap+VAR_3,
          VAR_9 |
          VAR_4 |
          VAR_5);

 FUNC_4(VAR_6);






 FUNC_1(VAR_6);
 FUNC_3(VAR_6, VAR_1, VAR_8);
 return 0;
}
