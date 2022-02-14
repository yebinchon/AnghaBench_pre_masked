
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {scalar_t__ fw_dump_host_ready; int fw_dump_ctrl; int fw_status; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;
typedef enum rdwr_status { ____Placeholder_rdwr_status } rdwr_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*) ;
 scalar_t__ FUNC_1 (struct mwifiex_adapter*,int ,int *) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,scalar_t__*) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,scalar_t__) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static enum rdwr_status
FUNC_5(struct mwifiex_adapter *VAR_7, u8 VAR_8)
{
 int VAR_9, VAR_10;
 u8 VAR_11;
 u32 VAR_12;
 struct pcie_service_card *VAR_13 = VAR_7->card;
 const struct mwifiex_pcie_card_reg *VAR_14 = VAR_13->pcie.reg;

 if (FUNC_1(VAR_7, VAR_14->fw_status, &VAR_12))
  return VAR_4;

 VAR_9 = FUNC_3(VAR_7, VAR_14->fw_dump_ctrl,
    VAR_14->fw_dump_host_ready);
 if (VAR_9) {
  FUNC_0(VAR_7, VAR_0,
       "PCIE write err\n");
  return VAR_4;
 }

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  FUNC_2(VAR_7, VAR_14->fw_dump_ctrl, &VAR_11);
  if (VAR_11 == VAR_1)
   return VAR_5;
  if (VAR_8 && VAR_11 == VAR_8)
   return VAR_3;
  if (VAR_11 != VAR_14->fw_dump_host_ready) {
   FUNC_0(VAR_7, VAR_6,
        "The ctrl reg was changed, re-try again!\n");
   VAR_9 = FUNC_3(VAR_7, VAR_14->fw_dump_ctrl,
      VAR_14->fw_dump_host_ready);
   if (VAR_9) {
    FUNC_0(VAR_7, VAR_0,
         "PCIE write err\n");
    return VAR_4;
   }
  }
  FUNC_4(100, 200);
 }

 FUNC_0(VAR_7, VAR_0, "Fail to pull ctrl_data\n");
 return VAR_4;
}
