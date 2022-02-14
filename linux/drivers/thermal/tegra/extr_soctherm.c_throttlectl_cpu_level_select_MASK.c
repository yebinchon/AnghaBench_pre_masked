
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_soctherm {scalar_t__ regs; TYPE_1__* throt_cfgs; } ;
typedef enum soctherm_throttle_id { ____Placeholder_soctherm_throttle_id } soctherm_throttle_id ;
struct TYPE_2__ {int cpu_throt_level; } ;


 int FUNC_0 (int,int ,int) ;



 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tegra_soctherm *VAR_9,
      enum soctherm_throttle_id VAR_10)
{
 u32 VAR_11, VAR_12;


 switch (VAR_9->throt_cfgs[VAR_10].cpu_throt_level) {
 case 129:
  VAR_12 = VAR_6;
  break;
 case 128:
  VAR_12 = VAR_7;
  break;
 case 130:
  VAR_12 = VAR_5;
  break;
 default:
  VAR_12 = VAR_8;
  break;
 }

 VAR_11 = FUNC_3(VAR_9->regs + FUNC_1(VAR_10, VAR_0));
 VAR_11 = FUNC_0(VAR_11, VAR_1, 1);
 VAR_11 = FUNC_0(VAR_11, VAR_3, VAR_12);
 VAR_11 = FUNC_0(VAR_11, VAR_2, VAR_12);
 FUNC_4(VAR_11, VAR_9->regs + FUNC_1(VAR_10, VAR_0));


 VAR_11 = FUNC_0(0, VAR_4, 1);
 FUNC_4(VAR_11, VAR_9->regs + FUNC_2(VAR_10, VAR_0));
}
