
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct iwl_trans {int drv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_trans*) ;
 struct iwl_trans* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct iwl_trans *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->drv);

 FUNC_1(VAR_1);
}
