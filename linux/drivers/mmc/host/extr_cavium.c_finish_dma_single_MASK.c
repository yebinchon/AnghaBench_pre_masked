
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int bytes_xfered; int blocks; int blksz; int sg_len; int sg; scalar_t__ error; } ;
struct cvm_mmc_host {int dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mmc_data*) ;

__attribute__((used)) static int FUNC_2(struct cvm_mmc_host *VAR_0, struct mmc_data *VAR_1)
{
 VAR_1->bytes_xfered = VAR_1->blocks * VAR_1->blksz;
 VAR_1->error = 0;
 FUNC_0(VAR_0->dev, VAR_1->sg, VAR_1->sg_len, FUNC_1(VAR_1));
 return 1;
}
