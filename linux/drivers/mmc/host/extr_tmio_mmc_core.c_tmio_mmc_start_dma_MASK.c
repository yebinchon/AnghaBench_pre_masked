
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {TYPE_1__* dma_ops; } ;
struct mmc_data {int dummy; } ;
struct TYPE_2__ {int (* start ) (struct tmio_mmc_host*,struct mmc_data*) ;} ;


 int FUNC_0 (struct tmio_mmc_host*,struct mmc_data*) ;

__attribute__((used)) static inline void FUNC_1(struct tmio_mmc_host *VAR_0,
          struct mmc_data *VAR_1)
{
 if (VAR_0->dma_ops)
  VAR_0->dma_ops->start(VAR_0, VAR_1);
}
