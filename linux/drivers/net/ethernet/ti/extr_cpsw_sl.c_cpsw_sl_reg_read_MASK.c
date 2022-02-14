
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpsw_sl {scalar_t__* regs; scalar_t__ sl_base; int dev; } ;
typedef enum cpsw_sl_regs { ____Placeholder_cpsw_sl_regs } cpsw_sl_regs ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

u32 FUNC_3(struct cpsw_sl *VAR_1, enum cpsw_sl_regs VAR_2)
{
 int VAR_3;

 if (VAR_1->regs[VAR_2] == VAR_0) {
  FUNC_1(VAR_1->dev, "cpsw_sl: not sup r reg: %04X\n",
   VAR_1->regs[VAR_2]);
  return 0;
 }

 VAR_3 = FUNC_2(VAR_1->sl_base + VAR_1->regs[VAR_2]);
 FUNC_0(VAR_1->dev, "cpsw_sl: reg: %04X r 0x%08X\n", VAR_1->regs[VAR_2], VAR_3);
 return VAR_3;
}
