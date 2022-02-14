
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {int lock; struct mmc_request* mrq; int last_req_ts; } ;
struct mmc_request {TYPE_1__* cmd; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mmc_request*) ;
 int VAR_1 ;
 struct tmio_mmc_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct tmio_mmc_host*,struct mmc_request*) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct mmc_host *VAR_2, struct mmc_request *VAR_3)
{
 struct tmio_mmc_host *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5;

 FUNC_4(&VAR_4->lock, VAR_5);

 if (VAR_4->mrq) {
  FUNC_3("request not null\n");
  if (FUNC_0(VAR_4->mrq)) {
   FUNC_5(&VAR_4->lock, VAR_5);
   VAR_3->cmd->error = -VAR_0;
   FUNC_2(VAR_2, VAR_3);
   return;
  }
 }

 VAR_4->last_req_ts = VAR_1;
 FUNC_7();
 VAR_4->mrq = VAR_3;

 FUNC_5(&VAR_4->lock, VAR_5);

 FUNC_6(VAR_4, VAR_3);
}
