
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dummy; } ;
struct exynos_dp_video_phy {TYPE_1__* drvdata; int regs; } ;
struct TYPE_2__ {int phy_ctrl_offset; } ;


 int VAR_0 ;
 struct exynos_dp_video_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_1)
{
 struct exynos_dp_video_phy *VAR_2 = FUNC_0(VAR_1);


 return FUNC_1(VAR_2->regs, VAR_2->drvdata->phy_ctrl_offset,
      VAR_0, VAR_0);
}
