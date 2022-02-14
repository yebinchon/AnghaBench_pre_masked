
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {int eeh_wait_q; struct pci_dev* pdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct ipr_ioa_cfg *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pdev;

 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_1->eeh_wait_q,
       !FUNC_0(VAR_2),
       VAR_0);
  FUNC_1(VAR_2);
 }
}
