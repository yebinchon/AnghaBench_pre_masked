
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct alx_hw {int dummy; } ;
struct alx_priv {struct alx_hw hw; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alx_hw*) ;
 int FUNC_1 (struct alx_hw*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 struct alx_priv* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static pci_ers_result_t FUNC_9(struct pci_dev *VAR_2)
{
 struct alx_priv *VAR_3 = FUNC_5(VAR_2);
 struct alx_hw *VAR_4 = &VAR_3->hw;
 pci_ers_result_t VAR_5 = VAR_0;

 FUNC_3(&VAR_2->dev, "pci error slot reset\n");

 FUNC_7();

 if (FUNC_4(VAR_2)) {
  FUNC_2(&VAR_2->dev, "Failed to re-enable PCI device after reset\n");
  goto out;
 }

 FUNC_6(VAR_2);

 FUNC_1(VAR_4);
 if (!FUNC_0(VAR_4))
  VAR_5 = VAR_1;
out:
 FUNC_8();

 return VAR_5;
}
