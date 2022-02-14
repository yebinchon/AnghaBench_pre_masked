
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_mmc_host {scalar_t__ reg_base; TYPE_1__* cfg; } ;
struct TYPE_2__ {int can_calibrate; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct sunxi_mmc_host *VAR_1, int VAR_2)
{
 if (!VAR_1->cfg->can_calibrate)
  return 0;
 FUNC_0(VAR_0, VAR_1->reg_base + VAR_2);

 return 0;
}
