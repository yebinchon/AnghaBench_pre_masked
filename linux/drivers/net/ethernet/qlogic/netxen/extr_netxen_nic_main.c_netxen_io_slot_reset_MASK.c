
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_1(struct pci_dev *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_2);

 return VAR_3 ? VAR_0 : VAR_1;
}
