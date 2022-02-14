
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv_otg {scalar_t__ active; int phy_regs; TYPE_2__* pdata; TYPE_1__* pdev; } ;
struct TYPE_4__ {int (* phy_deinit ) (int ) ;} ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mv_otg*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mv_otg *VAR_0)
{
 if (VAR_0->active) {
  FUNC_0(&VAR_0->pdev->dev, "otg disabled\n");
  if (VAR_0->pdata->phy_deinit)
   VAR_0->pdata->phy_deinit(VAR_0->phy_regs);
  FUNC_1(VAR_0);
  VAR_0->active = 0;
 }
}
