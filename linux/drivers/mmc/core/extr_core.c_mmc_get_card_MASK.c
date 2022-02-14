
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ctx {int dummy; } ;
struct mmc_card {int host; int dev; } ;


 int FUNC_0 (int ,struct mmc_ctx*,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mmc_card *VAR_0, struct mmc_ctx *VAR_1)
{
 FUNC_1(&VAR_0->dev);
 FUNC_0(VAR_0->host, VAR_1, ((void*)0));
}
