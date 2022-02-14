
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_trans_pcie {int pci_dev; } ;
struct iwl_trans {int pm_support; int ltr_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,char*,char*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (int ,int ,int*) ;

void FUNC_5(struct iwl_trans *VAR_7)
{
 struct iwl_trans_pcie *VAR_8 = FUNC_1(VAR_7);
 u16 VAR_9;
 u16 VAR_10;
 FUNC_4(VAR_8->pci_dev, VAR_4, &VAR_9);
 if (VAR_9 & VAR_6)
  FUNC_3(VAR_7, VAR_0, VAR_1);
 else
  FUNC_2(VAR_7, VAR_0, VAR_1);
 VAR_7->pm_support = !(VAR_9 & VAR_5);

 FUNC_4(VAR_8->pci_dev, VAR_2, &VAR_10);
 VAR_7->ltr_enabled = VAR_10 & VAR_3;
 FUNC_0(VAR_7, "L1 %sabled - LTR %sabled\n",
   (VAR_9 & VAR_6) ? "En" : "Dis",
   VAR_7->ltr_enabled ? "En" : "Dis");
}
