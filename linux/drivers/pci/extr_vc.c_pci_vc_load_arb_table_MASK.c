
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,char*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (struct pci_dev*,scalar_t__,int ) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_4, int VAR_5)
{
 u16 VAR_6;

 FUNC_1(VAR_4, VAR_5 + VAR_0, &VAR_6);
 FUNC_3(VAR_4, VAR_5 + VAR_0,
         VAR_6 | VAR_1);
 if (FUNC_2(VAR_4, VAR_5 + VAR_2,
     VAR_3))
  return;

 FUNC_0(VAR_4, "VC arbitration table failed to load\n");
}
