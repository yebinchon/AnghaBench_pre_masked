
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_pci {scalar_t__ mmap; } ;
struct rtw_dev {scalar_t__ priv; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_0,
     struct pci_dev *VAR_1)
{
 struct rtw_pci *VAR_2 = (struct rtw_pci *)VAR_0->priv;

 if (VAR_2->mmap) {
  FUNC_0(VAR_1, VAR_2->mmap);
  FUNC_1(VAR_1);
 }
}
