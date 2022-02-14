
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {scalar_t__ stop; scalar_t__ cmd; } ;
struct mmc_host {int dummy; } ;
struct cb710_slot {int dummy; } ;
struct cb710_mmc_reader {int finish_req_tasklet; struct mmc_request* mrq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_host*,scalar_t__) ;
 int FUNC_2 (struct cb710_slot*,int ,int ) ;
 struct cb710_slot* FUNC_3 (struct mmc_host*) ;
 struct cb710_mmc_reader* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 struct cb710_slot *VAR_3 = FUNC_3(VAR_1);
 struct cb710_mmc_reader *VAR_4 = FUNC_4(VAR_1);

 FUNC_0(VAR_4->mrq != ((void*)0));

 VAR_4->mrq = VAR_2;
 FUNC_2(VAR_3, VAR_0, 0);

 if (!FUNC_1(VAR_1, VAR_2->cmd) && VAR_2->stop)
  FUNC_1(VAR_1, VAR_2->stop);

 FUNC_5(&VAR_4->finish_req_tasklet);
}
