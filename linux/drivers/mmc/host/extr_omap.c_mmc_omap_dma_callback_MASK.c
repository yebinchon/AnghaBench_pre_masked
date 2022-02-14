
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_host {struct mmc_data* data; } ;
struct mmc_data {int bytes_xfered; int blocks; int blksz; } ;


 int FUNC_0 (struct mmc_omap_host*,struct mmc_data*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct mmc_omap_host *VAR_1 = VAR_0;
 struct mmc_data *VAR_2 = VAR_1->data;


 VAR_2->bytes_xfered += VAR_2->blocks * VAR_2->blksz;

 FUNC_0(VAR_1, VAR_2);
}
