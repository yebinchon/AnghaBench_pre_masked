
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rp2_card {int fw_loaded; } ;
struct pci_dev {int dummy; } ;


 struct rp2_card* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct rp2_card*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct rp2_card *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->fw_loaded);
 FUNC_1(VAR_1);
}
