
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mmc_data {int bytes_xfered; int blocks; int blksz; int sg_len; int sg; scalar_t__ error; } ;
struct cvm_mmc_host {int dev; scalar_t__ dma_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct mmc_data*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct cvm_mmc_host *VAR_1, struct mmc_data *VAR_2)
{
 u64 VAR_3;
 int VAR_4;


 VAR_3 = FUNC_6(VAR_1->dma_base + FUNC_2(VAR_1));
 VAR_4 = FUNC_1(VAR_0, VAR_3);
 if (VAR_4)
  FUNC_3(VAR_1->dev, "%u requests still pending\n", VAR_4);

 VAR_2->bytes_xfered = VAR_2->blocks * VAR_2->blksz;
 VAR_2->error = 0;


 FUNC_7(FUNC_0(16), VAR_1->dma_base + FUNC_2(VAR_1));
 FUNC_4(VAR_1->dev, VAR_2->sg, VAR_2->sg_len, FUNC_5(VAR_2));
 return 1;
}
