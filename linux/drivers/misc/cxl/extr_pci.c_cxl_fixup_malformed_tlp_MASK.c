
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct cxl {int psl_rev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct cxl *VAR_4, struct pci_dev *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 if (VAR_4->psl_rev & 0xf000)
  return;
 if (!(VAR_6 = FUNC_0(VAR_5, VAR_3)))
  return;
 FUNC_1(VAR_5, VAR_6 + VAR_0, &VAR_7);
 if (VAR_7 & VAR_2)
  if (VAR_7 & VAR_1)
   return;
 VAR_7 |= VAR_2;
 VAR_7 |= VAR_1;
 FUNC_2(VAR_5, VAR_6 + VAR_0, VAR_7);
}
