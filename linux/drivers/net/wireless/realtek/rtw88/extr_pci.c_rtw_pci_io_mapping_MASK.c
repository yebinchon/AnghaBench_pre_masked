
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_pci {int mmap; } ;
struct rtw_dev {scalar_t__ priv; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,unsigned long) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 unsigned long FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct rtw_dev*,char*) ;

__attribute__((used)) static int FUNC_4(struct rtw_dev *VAR_2,
         struct pci_dev *VAR_3)
{
 struct rtw_pci *VAR_4 = (struct rtw_pci *)VAR_2->priv;
 unsigned long VAR_5;
 u8 VAR_6 = 2;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_1);
 if (VAR_7) {
  FUNC_3(VAR_2, "failed to request pci regions\n");
  return VAR_7;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_6);
 VAR_4->mmap = FUNC_0(VAR_3, VAR_6, VAR_5);
 if (!VAR_4->mmap) {
  FUNC_3(VAR_2, "failed to map pci memory\n");
  return -VAR_0;
 }

 return 0;
}
