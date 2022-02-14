
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_command* cmd; struct mmc_command* sbc; } ;
struct mmc_command {int dummy; } ;
struct dw_mci_slot {struct mmc_request* mrq; } ;
struct dw_mci {int dummy; } ;


 int FUNC_0 (struct dw_mci*,struct dw_mci_slot*,struct mmc_command*) ;

__attribute__((used)) static void FUNC_1(struct dw_mci *VAR_0,
     struct dw_mci_slot *VAR_1)
{
 struct mmc_request *VAR_2 = VAR_1->mrq;
 struct mmc_command *VAR_3;

 VAR_3 = VAR_2->sbc ? VAR_2->sbc : VAR_2->cmd;
 FUNC_0(VAR_0, VAR_1, VAR_3);
}
