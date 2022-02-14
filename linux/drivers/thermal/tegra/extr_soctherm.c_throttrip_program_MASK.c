
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tegra_tsensor_group {int thermctl_lvl0_dn_thresh_mask; int thermctl_lvl0_up_thresh_mask; int thermctl_lvl0_offset; } ;
struct tegra_soctherm {scalar_t__ regs; TYPE_1__* soc; } ;
struct soctherm_throt_cfg {unsigned int id; int init; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int thresh_grain; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 struct tegra_soctherm* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*,unsigned int) ;
 int FUNC_4 (struct device*,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_10,
        const struct tegra_tsensor_group *VAR_11,
        struct soctherm_throt_cfg *VAR_12,
        int VAR_13)
{
 struct tegra_soctherm *VAR_14 = FUNC_2(VAR_10);
 int VAR_15, VAR_16, VAR_17;
 unsigned int VAR_18;
 u32 VAR_19, VAR_20;

 if (!VAR_11 || !VAR_12 || !VAR_12->init)
  return -VAR_0;

 VAR_15 = FUNC_4(VAR_10, VAR_13) / VAR_14->soc->thresh_grain;


 VAR_18 = VAR_12->id;
 VAR_20 = FUNC_1(VAR_11->thermctl_lvl0_offset, VAR_18 + 1);

 if (VAR_18 == VAR_9) {
  VAR_16 = VAR_2;
  VAR_17 = VAR_6;
 } else {
  VAR_16 = VAR_1;
  VAR_17 = VAR_5;
  if (VAR_18 != VAR_8)
   FUNC_3(VAR_10,
     "invalid throt id %d - assuming HEAVY",
     VAR_18);
 }

 VAR_19 = FUNC_5(VAR_14->regs + VAR_20);
 VAR_19 = FUNC_0(VAR_19, VAR_11->thermctl_lvl0_up_thresh_mask, VAR_15);
 VAR_19 = FUNC_0(VAR_19, VAR_11->thermctl_lvl0_dn_thresh_mask, VAR_15);
 VAR_19 = FUNC_0(VAR_19, VAR_3, VAR_16);
 VAR_19 = FUNC_0(VAR_19, VAR_7, VAR_17);
 VAR_19 = FUNC_0(VAR_19, VAR_4, 1);
 FUNC_6(VAR_19, VAR_14->regs + VAR_20);

 return 0;
}
