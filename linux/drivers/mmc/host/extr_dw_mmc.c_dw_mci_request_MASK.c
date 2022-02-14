
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {TYPE_1__* cmd; } ;
struct mmc_host {int dummy; } ;
struct dw_mci_slot {int mrq; struct dw_mci* host; } ;
struct dw_mci {int lock; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct dw_mci*,struct dw_mci_slot*,struct mmc_request*) ;
 struct dw_mci_slot* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 struct dw_mci_slot *VAR_3 = FUNC_3(VAR_1);
 struct dw_mci *VAR_4 = VAR_3->host;

 FUNC_0(VAR_3->mrq);







 if (!FUNC_1(VAR_1)) {
  VAR_2->cmd->error = -VAR_0;
  FUNC_4(VAR_1, VAR_2);
  return;
 }

 FUNC_5(&VAR_4->lock);

 FUNC_2(VAR_4, VAR_3, VAR_2);

 FUNC_6(&VAR_4->lock);
}
