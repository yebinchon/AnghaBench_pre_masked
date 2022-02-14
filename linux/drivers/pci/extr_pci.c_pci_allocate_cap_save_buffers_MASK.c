
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,char*) ;

void FUNC_4(struct pci_dev *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0,
     VAR_2 * sizeof(u16));
 if (VAR_5)
  FUNC_3(VAR_4, "unable to preallocate PCI Express save buffer\n");

 VAR_5 = FUNC_0(VAR_4, VAR_1, sizeof(u16));
 if (VAR_5)
  FUNC_3(VAR_4, "unable to preallocate PCI-X save buffer\n");

 VAR_5 = FUNC_1(VAR_4, VAR_3,
         2 * sizeof(u16));
 if (VAR_5)
  FUNC_3(VAR_4, "unable to allocate suspend buffer for LTR\n");

 FUNC_2(VAR_4);
}
