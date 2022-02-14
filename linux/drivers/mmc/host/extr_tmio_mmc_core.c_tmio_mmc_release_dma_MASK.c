
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {TYPE_1__* dma_ops; } ;
struct TYPE_2__ {int (* release ) (struct tmio_mmc_host*) ;} ;


 int FUNC_0 (struct tmio_mmc_host*) ;

__attribute__((used)) static inline void FUNC_1(struct tmio_mmc_host *VAR_0)
{
 if (VAR_0->dma_ops)
  VAR_0->dma_ops->release(VAR_0);
}
