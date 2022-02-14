
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {int fw_status; int drv_rdy; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct mwifiex_adapter*,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct mwifiex_adapter*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct mwifiex_adapter *VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8;
 struct pcie_service_card *VAR_9 = VAR_5->card;
 const struct mwifiex_pcie_card_reg *VAR_10 = VAR_9->pcie.reg;
 u32 VAR_11;


 if (FUNC_3(VAR_5, VAR_4,
         VAR_2)) {
  FUNC_1(VAR_5, VAR_0,
       "Write register failed\n");
  return -1;
 }

 FUNC_1(VAR_5, VAR_3,
      "Setting driver ready signature\n");
 if (FUNC_3(VAR_5, VAR_10->drv_rdy,
         VAR_1)) {
  FUNC_1(VAR_5, VAR_0,
       "Failed to write driver ready signature\n");
  return -1;
 }


 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  if (FUNC_2(VAR_5, VAR_10->fw_status,
         &VAR_8))
   VAR_7 = -1;
  else
   VAR_7 = 0;

  FUNC_1(VAR_5, VAR_3, "Try %d if FW is ready <%d,%#x>",
       VAR_11, VAR_7, VAR_8);

  if (VAR_7)
   continue;
  if (VAR_8 == VAR_1) {
   VAR_7 = 0;
   break;
  } else {
   FUNC_0(100);
   VAR_7 = -1;
  }
 }

 return VAR_7;
}
