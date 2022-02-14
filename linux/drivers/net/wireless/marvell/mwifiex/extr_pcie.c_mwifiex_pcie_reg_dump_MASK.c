
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {int fw_status; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct mwifiex_adapter*,int,int*) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_4(struct mwifiex_adapter *VAR_5, char *VAR_6)
{
 char *VAR_7 = VAR_6;
 char VAR_8[256], *VAR_9;
 int VAR_10;
 u32 VAR_11;
 struct pcie_service_card *VAR_12 = VAR_5->card;
 const struct mwifiex_pcie_card_reg *VAR_13 = VAR_12->pcie.reg;
 int VAR_14[] = {VAR_2,
      VAR_3,
      VAR_4};

 if (!VAR_7)
  return 0;

 FUNC_1(VAR_5, VAR_1, "PCIE register dump start\n");

 if (FUNC_2(VAR_5, VAR_13->fw_status, &VAR_11)) {
  FUNC_1(VAR_5, VAR_0, "failed to read firmware status");
  return 0;
 }

 VAR_9 = VAR_8;
 FUNC_1(VAR_5, VAR_1, "pcie scratch register:");
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_14); VAR_10++) {
  FUNC_2(VAR_5, VAR_14[VAR_10], &VAR_11);
  VAR_9 += FUNC_3(VAR_9, "reg:0x%x, value=0x%x\n",
          VAR_14[VAR_10], VAR_11);
 }

 FUNC_1(VAR_5, VAR_1, "%s\n", VAR_8);
 VAR_7 += FUNC_3(VAR_7, "%s\n", VAR_8);

 FUNC_1(VAR_5, VAR_1, "PCIE register dump end\n");

 return VAR_7 - VAR_6;
}
