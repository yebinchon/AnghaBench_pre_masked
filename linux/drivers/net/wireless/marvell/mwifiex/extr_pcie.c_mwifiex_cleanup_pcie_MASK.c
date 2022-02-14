
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {int pci_mmap1; int pci_mmap; int work; TYPE_1__ pcie; struct pci_dev* dev; } ;
struct pci_dev {int dummy; } ;
struct mwifiex_pcie_card_reg {int drv_rdy; int fw_status; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct mwifiex_adapter*,int ,int) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_8(struct mwifiex_adapter *VAR_3)
{
 struct pcie_service_card *VAR_4 = VAR_3->card;
 struct pci_dev *VAR_5 = VAR_4->dev;
 const struct mwifiex_pcie_card_reg *VAR_6 = VAR_4->pcie.reg;
 int VAR_7;
 u32 VAR_8;

 FUNC_0(&VAR_4->work);

 VAR_7 = FUNC_3(VAR_3, VAR_6->fw_status, &VAR_8);
 if (VAR_8 == VAR_1) {
  FUNC_1(VAR_3, VAR_2,
       "Clearing driver ready signature\n");
  if (FUNC_4(VAR_3, VAR_6->drv_rdy, 0x00000000))
   FUNC_1(VAR_3, VAR_0,
        "Failed to write driver not-ready signature\n");
 }

 FUNC_5(VAR_5);

 FUNC_6(VAR_5, VAR_4->pci_mmap);
 FUNC_6(VAR_5, VAR_4->pci_mmap1);
 FUNC_7(VAR_5, 2);
 FUNC_7(VAR_5, 0);

 FUNC_2(VAR_3);
}
