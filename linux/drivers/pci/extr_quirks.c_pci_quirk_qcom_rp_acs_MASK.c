
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
 int FUNC_0 (struct pci_dev*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_4, u16 VAR_5)
{
 u16 VAR_6 = (VAR_1 | VAR_0 | VAR_3 | VAR_2);
 int VAR_7 = VAR_5 & ~VAR_6 ? 0 : 1;

 FUNC_0(VAR_4, "Using QCOM ACS Quirk (%d)\n", VAR_7);

 return VAR_7;
}
