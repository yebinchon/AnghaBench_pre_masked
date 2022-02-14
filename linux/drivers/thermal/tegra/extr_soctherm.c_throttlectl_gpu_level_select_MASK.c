
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_soctherm {scalar_t__ regs; TYPE_1__* throt_cfgs; } ;
typedef enum soctherm_throttle_id { ____Placeholder_soctherm_throttle_id } soctherm_throttle_id ;
struct TYPE_2__ {int gpu_throt_level; } ;


 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tegra_soctherm *VAR_3,
      enum soctherm_throttle_id VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;

 VAR_6 = VAR_3->throt_cfgs[VAR_4].gpu_throt_level;
 VAR_7 = FUNC_1(VAR_6);
 VAR_5 = FUNC_3(VAR_3->regs + FUNC_2(VAR_4, VAR_0));
 VAR_5 = FUNC_0(VAR_5, VAR_1, 1);
 VAR_5 = FUNC_0(VAR_5, VAR_2, VAR_7);
 FUNC_4(VAR_5, VAR_3->regs + FUNC_2(VAR_4, VAR_0));
}
