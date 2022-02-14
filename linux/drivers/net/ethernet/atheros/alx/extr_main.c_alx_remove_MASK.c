
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct alx_hw {int hw_addr; int perm_addr; } ;
struct alx_priv {int dev; int reset_wk; int link_check_wk; struct alx_hw hw; } ;


 int FUNC_0 (struct alx_hw*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct alx_priv* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct alx_priv *VAR_1 = FUNC_6(VAR_0);
 struct alx_hw *VAR_2 = &VAR_1->hw;

 FUNC_1(&VAR_1->link_check_wk);
 FUNC_1(&VAR_1->reset_wk);


 FUNC_0(VAR_2, VAR_2->perm_addr);

 FUNC_8(VAR_1->dev);
 FUNC_3(VAR_2->hw_addr);
 FUNC_7(VAR_0);

 FUNC_5(VAR_0);
 FUNC_4(VAR_0);

 FUNC_2(VAR_1->dev);
}
