
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int var; } ;
struct sa1100fb_info {int* palette_cpu; int reg_lccr3; int reg_lccr2; int reg_lccr1; int reg_lccr0; int dbar1; int dbar2; scalar_t__ base; int dev; int clk; TYPE_1__ fb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct sa1100fb_info *VAR_8)
{
 FUNC_1(VAR_8->dev, "Enabling LCD controller\n");




 VAR_8->palette_cpu[0] &= 0xcfff;
 VAR_8->palette_cpu[0] |= FUNC_4(&VAR_8->fb.var);


 FUNC_0(VAR_8->clk);


 FUNC_6(VAR_8->reg_lccr3, VAR_8->base + VAR_6);
 FUNC_6(VAR_8->reg_lccr2, VAR_8->base + VAR_5);
 FUNC_6(VAR_8->reg_lccr1, VAR_8->base + VAR_4);
 FUNC_6(VAR_8->reg_lccr0 & ~VAR_3, VAR_8->base + VAR_2);
 FUNC_6(VAR_8->dbar1, VAR_8->base + VAR_0);
 FUNC_6(VAR_8->dbar2, VAR_8->base + VAR_1);
 FUNC_6(VAR_8->reg_lccr0 | VAR_3, VAR_8->base + VAR_2);

 if (FUNC_3())
  FUNC_2(VAR_7, 1);

 FUNC_1(VAR_8->dev, "DBAR1: 0x%08x\n", FUNC_5(VAR_8->base + VAR_0));
 FUNC_1(VAR_8->dev, "DBAR2: 0x%08x\n", FUNC_5(VAR_8->base + VAR_1));
 FUNC_1(VAR_8->dev, "LCCR0: 0x%08x\n", FUNC_5(VAR_8->base + VAR_2));
 FUNC_1(VAR_8->dev, "LCCR1: 0x%08x\n", FUNC_5(VAR_8->base + VAR_4));
 FUNC_1(VAR_8->dev, "LCCR2: 0x%08x\n", FUNC_5(VAR_8->base + VAR_5));
 FUNC_1(VAR_8->dev, "LCCR3: 0x%08x\n", FUNC_5(VAR_8->base + VAR_6));
}
