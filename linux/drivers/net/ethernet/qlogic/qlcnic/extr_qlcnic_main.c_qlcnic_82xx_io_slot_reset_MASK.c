
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct pci_dev *VAR_2)
{
 pci_ers_result_t VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_2) ? VAR_0 :
      VAR_1;
 FUNC_2();

 return VAR_3;
}
