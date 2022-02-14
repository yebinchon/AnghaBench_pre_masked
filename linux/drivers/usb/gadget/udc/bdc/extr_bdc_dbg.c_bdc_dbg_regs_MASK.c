
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bdc {int dev; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;

void FUNC_2(struct bdc *VAR_7)
{
 u32 VAR_8;

 FUNC_1(VAR_7->dev, "bdc->regs:%p\n", VAR_7->regs);
 VAR_8 = FUNC_0(VAR_7->regs, VAR_2);
 FUNC_1(VAR_7->dev, "bdccfg0:0x%08x\n", VAR_8);
 VAR_8 = FUNC_0(VAR_7->regs, VAR_3);
 FUNC_1(VAR_7->dev, "bdccfg1:0x%08x\n", VAR_8);
 VAR_8 = FUNC_0(VAR_7->regs, VAR_0);
 FUNC_1(VAR_7->dev, "bdccap0:0x%08x\n", VAR_8);
 VAR_8 = FUNC_0(VAR_7->regs, VAR_1);
 FUNC_1(VAR_7->dev, "bdccap1:0x%08x\n", VAR_8);
 VAR_8 = FUNC_0(VAR_7->regs, VAR_6);
 FUNC_1(VAR_7->dev, "uspc:0x%08x\n", VAR_8);
 VAR_8 = FUNC_0(VAR_7->regs, VAR_4);
 FUNC_1(VAR_7->dev, "dvcsa:0x%08x\n", VAR_8);
 VAR_8 = FUNC_0(VAR_7->regs, VAR_5);
 FUNC_1(VAR_7->dev, "dvcsb:0x%x08\n", VAR_8);
}
