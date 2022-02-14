
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {struct mmc_ctx* claimer; } ;
struct mmc_ctx {int dummy; } ;
struct mmc_card {int dev; struct mmc_host* host; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mmc_card *VAR_0, struct mmc_ctx *VAR_1)
{
 struct mmc_host *VAR_2 = VAR_0->host;

 FUNC_0(VAR_1 && VAR_2->claimer != VAR_1);

 FUNC_1(VAR_2);
 FUNC_2(&VAR_0->dev);
 FUNC_3(&VAR_0->dev);
}
