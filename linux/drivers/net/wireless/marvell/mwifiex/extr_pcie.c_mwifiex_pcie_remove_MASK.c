
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {TYPE_1__ pcie; struct mwifiex_adapter* adapter; int fw_done; } ;
struct pci_dev {int dummy; } ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_pcie_card_reg {int fw_status; } ;
struct mwifiex_adapter {int mfg_mode; int priv_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (struct mwifiex_private*) ;
 struct mwifiex_private* FUNC_2 (struct mwifiex_adapter*,int ) ;
 int FUNC_3 (struct mwifiex_private*,int ) ;
 int FUNC_4 (struct mwifiex_adapter*,int ,int*) ;
 int FUNC_5 (struct mwifiex_adapter*) ;
 struct pcie_service_card* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_3)
{
 struct pcie_service_card *VAR_4;
 struct mwifiex_adapter *VAR_5;
 struct mwifiex_private *VAR_6;
 const struct mwifiex_pcie_card_reg *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_4 = FUNC_6(VAR_3);

 FUNC_7(&VAR_4->fw_done);

 VAR_5 = VAR_4->adapter;
 if (!VAR_5 || !VAR_5->priv_num)
  return;

 VAR_7 = VAR_4->pcie.reg;
 if (VAR_7)
  VAR_9 = FUNC_4(VAR_5, VAR_7->fw_status, &VAR_8);
 else
  VAR_8 = -1;

 if (VAR_8 == VAR_0 && !VAR_5->mfg_mode) {
  FUNC_0(VAR_5);

  VAR_6 = FUNC_2(VAR_5, VAR_1);

  FUNC_1(VAR_6);

  FUNC_3(VAR_6, VAR_2);
 }

 FUNC_5(VAR_5);
}
