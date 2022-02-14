
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pci_dev const*) ;

bool FUNC_1(const struct pci_dev *VAR_7)
{
 int VAR_8 = FUNC_0(VAR_7);

 return VAR_8 == VAR_1 ||
        VAR_8 == VAR_2 ||
        VAR_8 == VAR_5 ||
        VAR_8 == VAR_6 ||
        VAR_8 == VAR_0 ||
        VAR_8 == VAR_4 ||
        VAR_8 == VAR_3;
}
