
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_lite {int clock; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct fimc_lite *VAR_1)
{
 VAR_1->clock = FUNC_1(&VAR_1->pdev->dev, VAR_0);
 return FUNC_0(VAR_1->clock);
}
