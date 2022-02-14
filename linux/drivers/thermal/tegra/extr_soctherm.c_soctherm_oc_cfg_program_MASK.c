
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tegra_soctherm {scalar_t__ regs; TYPE_1__* throt_cfgs; } ;
struct soctherm_oc_cfg {int mode; int active_low; int intr_en; scalar_t__ alarm_filter; scalar_t__ alarm_cnt_thresh; scalar_t__ throt_period; } ;
typedef enum soctherm_throttle_id { ____Placeholder_soctherm_throttle_id } soctherm_throttle_id ;
struct TYPE_2__ {struct soctherm_oc_cfg oc_cfg; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (struct tegra_soctherm*,int,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct tegra_soctherm *VAR_6,
          enum soctherm_throttle_id VAR_7)
{
 u32 VAR_8;
 struct soctherm_oc_cfg *VAR_9 = &VAR_6->throt_cfgs[VAR_7].oc_cfg;

 if (VAR_9->mode == VAR_5)
  return -VAR_0;

 VAR_8 = FUNC_4(0, VAR_3, 1);
 VAR_8 = FUNC_4(VAR_8, VAR_4, VAR_9->mode);
 VAR_8 = FUNC_4(VAR_8, VAR_1, VAR_9->active_low);
 VAR_8 = FUNC_4(VAR_8, VAR_2, 1);
 FUNC_6(VAR_8, VAR_6->regs + FUNC_0(VAR_7));
 FUNC_6(VAR_9->throt_period, VAR_6->regs + FUNC_3(VAR_7));
 FUNC_6(VAR_9->alarm_cnt_thresh, VAR_6->regs + FUNC_1(VAR_7));
 FUNC_6(VAR_9->alarm_filter, VAR_6->regs + FUNC_2(VAR_7));
 FUNC_5(VAR_6, VAR_7, VAR_9->intr_en);

 return 0;
}
