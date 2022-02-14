
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int tuning_delay; int adma_table_cnt; int sdma_boundary; int tuning_loop_count; int cqe_err_ier; int cqe_ier; int flags; int mmc_host_ops; struct mmc_host* mmc; } ;
struct mmc_host {int * ops; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct sdhci_host* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 struct mmc_host* FUNC_2 (int,struct device*) ;
 struct sdhci_host* FUNC_3 (struct mmc_host*) ;
 int VAR_7 ;

struct sdhci_host *FUNC_4(struct device *VAR_8,
 size_t VAR_9)
{
 struct mmc_host *VAR_10;
 struct sdhci_host *VAR_11;

 FUNC_1(VAR_8 == ((void*)0));

 VAR_10 = FUNC_2(sizeof(struct sdhci_host) + VAR_9, VAR_8);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_3(VAR_10);
 VAR_11->mmc = VAR_10;
 VAR_11->mmc_host_ops = VAR_7;
 VAR_10->ops = &VAR_11->mmc_host_ops;

 VAR_11->flags = VAR_6;

 VAR_11->cqe_ier = VAR_3;
 VAR_11->cqe_err_ier = VAR_2;

 VAR_11->tuning_delay = -1;
 VAR_11->tuning_loop_count = VAR_1;

 VAR_11->sdma_boundary = VAR_4;






 VAR_11->adma_table_cnt = VAR_5 * 2 + 1;

 return VAR_11;
}
