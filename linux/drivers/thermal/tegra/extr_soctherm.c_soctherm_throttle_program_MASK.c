
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tegra_soctherm {scalar_t__ regs; TYPE_1__* soc; struct soctherm_throt_cfg* throt_cfgs; } ;
struct soctherm_throt_cfg {scalar_t__ priority; int init; } ;
typedef enum soctherm_throttle_id { ____Placeholder_soctherm_throttle_id } soctherm_throttle_id ;
struct TYPE_2__ {scalar_t__ use_ccroc; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct tegra_soctherm*,int) ;
 int FUNC_6 (struct tegra_soctherm*,int) ;
 int FUNC_7 (struct tegra_soctherm*,int) ;
 int FUNC_8 (struct tegra_soctherm*,int) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct tegra_soctherm *VAR_5,
          enum soctherm_throttle_id VAR_6)
{
 u32 VAR_7;
 struct soctherm_throt_cfg VAR_8 = VAR_5->throt_cfgs[VAR_6];

 if (!VAR_8.init)
  return;

 if ((VAR_6 >= VAR_0) && (FUNC_5(VAR_5, VAR_6)))
  return;


 if (VAR_5->soc->use_ccroc)
  FUNC_6(VAR_5, VAR_6);
 else
  FUNC_7(VAR_5, VAR_6);

 FUNC_8(VAR_5, VAR_6);

 VAR_7 = FUNC_1(0, VAR_2, VAR_8.priority);
 FUNC_9(VAR_7, VAR_5->regs + FUNC_3(VAR_6));

 VAR_7 = FUNC_1(0, VAR_1, 0);
 FUNC_9(VAR_7, VAR_5->regs + FUNC_2(VAR_6));

 VAR_7 = FUNC_4(VAR_5->regs + VAR_3);
 VAR_7 = FUNC_0(VAR_7, VAR_4);
 if (VAR_7 >= VAR_8.priority)
  return;
 VAR_7 = FUNC_1(0, VAR_4,
    VAR_8.priority);
 FUNC_9(VAR_7, VAR_5->regs + VAR_3);
}
