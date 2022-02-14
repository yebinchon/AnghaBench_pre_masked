
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tegra_soctherm {scalar_t__ regs; TYPE_1__* throt_cfgs; } ;
typedef enum soctherm_throttle_id { ____Placeholder_soctherm_throttle_id } soctherm_throttle_id ;
struct TYPE_2__ {int cpu_throt_depth; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct tegra_soctherm *VAR_6,
          enum soctherm_throttle_id VAR_7)
{
 u32 VAR_8;
 int VAR_9;
 u8 VAR_10;

 VAR_9 = VAR_6->throt_cfgs[VAR_7].cpu_throt_depth;
 VAR_10 = FUNC_1(VAR_9);

 VAR_8 = FUNC_4(VAR_6->regs + FUNC_2(VAR_7, VAR_0));
 VAR_8 = FUNC_0(VAR_8, VAR_3, 1);
 VAR_8 = FUNC_0(VAR_8, VAR_1, VAR_10);
 VAR_8 = FUNC_0(VAR_8, VAR_2, 0xff);
 FUNC_5(VAR_8, VAR_6->regs + FUNC_2(VAR_7, VAR_0));

 VAR_8 = FUNC_4(VAR_6->regs + FUNC_3(VAR_7, VAR_0));
 VAR_8 = FUNC_0(VAR_8, VAR_4, 0xff);
 VAR_8 = FUNC_0(VAR_8, VAR_5, 0xf);
 FUNC_5(VAR_8, VAR_6->regs + FUNC_3(VAR_7, VAR_0));
}
