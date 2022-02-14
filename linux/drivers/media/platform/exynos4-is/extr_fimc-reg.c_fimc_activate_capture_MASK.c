
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; } ;
struct fimc_ctx {TYPE_1__ scaler; int fimc_dev; } ;


 int FUNC_0 (struct fimc_ctx*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct fimc_ctx *VAR_0)
{
 FUNC_1(VAR_0->fimc_dev, VAR_0->scaler.enabled);
 FUNC_0(VAR_0);
}
