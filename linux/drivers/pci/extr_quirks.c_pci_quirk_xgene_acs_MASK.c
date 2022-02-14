
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

__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_4, u16 VAR_5)
{





 VAR_5 &= ~(VAR_2 | VAR_1 | VAR_0 | VAR_3);

 return VAR_5 ? 0 : 1;
}
