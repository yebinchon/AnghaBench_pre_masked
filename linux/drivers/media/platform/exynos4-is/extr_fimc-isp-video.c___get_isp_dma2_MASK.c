
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct param_dma_output {int dummy; } ;
struct fimc_is {int dummy; } ;
struct TYPE_3__ {struct param_dma_output dma2_output; } ;
struct TYPE_4__ {TYPE_1__ isp; } ;


 TYPE_2__* FUNC_0 (struct fimc_is*) ;

__attribute__((used)) static inline struct param_dma_output *FUNC_1(struct fimc_is *VAR_0)
{
 return &FUNC_0(VAR_0)->isp.dma2_output;
}
