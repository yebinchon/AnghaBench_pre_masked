
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct adapter {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct adapter* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct adapter*) ;

__attribute__((used)) static pci_ers_result_t FUNC_2(struct pci_dev *VAR_2)
{
 struct adapter *VAR_3 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_3))
  return VAR_1;

 return VAR_0;
}
