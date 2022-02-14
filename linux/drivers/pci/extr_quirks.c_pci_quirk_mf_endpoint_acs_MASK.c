
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
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_6, u16 VAR_7)
{
 VAR_7 &= ~(VAR_3 | VAR_4 | VAR_2 |
         VAR_0 | VAR_5 | VAR_1);

 return VAR_7 ? 0 : 1;
}
