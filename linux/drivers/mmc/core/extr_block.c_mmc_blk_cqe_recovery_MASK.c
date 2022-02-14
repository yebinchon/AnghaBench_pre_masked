
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_queue {int blkdata; struct mmc_card* card; } ;
struct mmc_host {int dummy; } ;
struct mmc_card {struct mmc_host* host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mmc_host*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (char*,int ) ;

void FUNC_5(struct mmc_queue *VAR_1)
{
 struct mmc_card *VAR_2 = VAR_1->card;
 struct mmc_host *VAR_3 = VAR_2->host;
 int VAR_4;

 FUNC_4("%s: CQE recovery start\n", FUNC_3(VAR_3));

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  FUNC_0(VAR_1->blkdata, VAR_3, VAR_0);
 else
  FUNC_1(VAR_1->blkdata, VAR_0);

 FUNC_4("%s: CQE recovery done\n", FUNC_3(VAR_3));
}
