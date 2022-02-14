
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_tsensor_group {int thermtrip_any_en_mask; int thermtrip_enable_mask; int thermtrip_threshold_mask; } ;
struct tegra_soctherm {scalar_t__ regs; TYPE_1__* soc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int thresh_grain; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 struct tegra_soctherm* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2,
        const struct tegra_tsensor_group *VAR_3,
        int VAR_4)
{
 struct tegra_soctherm *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;
 u32 VAR_7;

 if (!VAR_3 || !VAR_3->thermtrip_threshold_mask)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2, VAR_4) / VAR_5->soc->thresh_grain;

 VAR_7 = FUNC_3(VAR_5->regs + VAR_1);
 VAR_7 = FUNC_0(VAR_7, VAR_3->thermtrip_threshold_mask, VAR_6);
 VAR_7 = FUNC_0(VAR_7, VAR_3->thermtrip_enable_mask, 1);
 VAR_7 = FUNC_0(VAR_7, VAR_3->thermtrip_any_en_mask, 0);
 FUNC_4(VAR_7, VAR_5->regs + VAR_1);

 return 0;
}
