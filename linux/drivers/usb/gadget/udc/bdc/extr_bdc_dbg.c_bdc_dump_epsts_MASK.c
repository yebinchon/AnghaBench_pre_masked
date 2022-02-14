
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
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;

void FUNC_2(struct bdc *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_8->regs, VAR_0);
 FUNC_1(VAR_8->dev, "BDC_EPSTS0:0x%08x\n", VAR_9);

 VAR_9 = FUNC_0(VAR_8->regs, VAR_1);
 FUNC_1(VAR_8->dev, "BDC_EPSTS1:0x%x\n", VAR_9);

 VAR_9 = FUNC_0(VAR_8->regs, VAR_2);
 FUNC_1(VAR_8->dev, "BDC_EPSTS2:0x%08x\n", VAR_9);

 VAR_9 = FUNC_0(VAR_8->regs, VAR_3);
 FUNC_1(VAR_8->dev, "BDC_EPSTS3:0x%08x\n", VAR_9);

 VAR_9 = FUNC_0(VAR_8->regs, VAR_4);
 FUNC_1(VAR_8->dev, "BDC_EPSTS4:0x%08x\n", VAR_9);

 VAR_9 = FUNC_0(VAR_8->regs, VAR_5);
 FUNC_1(VAR_8->dev, "BDC_EPSTS5:0x%08x\n", VAR_9);

 VAR_9 = FUNC_0(VAR_8->regs, VAR_6);
 FUNC_1(VAR_8->dev, "BDC_EPSTS6:0x%08x\n", VAR_9);

 VAR_9 = FUNC_0(VAR_8->regs, VAR_7);
 FUNC_1(VAR_8->dev, "BDC_EPSTS7:0x%08x\n", VAR_9);
}
