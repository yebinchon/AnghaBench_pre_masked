
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aspeed_smc_controller {scalar_t__ regs; int dev; } ;
struct aspeed_smc_chip {struct aspeed_smc_controller* controller; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct aspeed_smc_chip*) ;
 int FUNC_1 (int ,char*,scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct aspeed_smc_chip *VAR_1)
{
 struct aspeed_smc_controller *VAR_2 = VAR_1->controller;
 u32 VAR_3;

 VAR_3 = FUNC_2(VAR_2->regs + VAR_0);

 if (VAR_3 & FUNC_0(VAR_1))
  return;

 FUNC_1(VAR_2->dev, "config write is not set ! @%p: 0x%08x\n",
  VAR_2->regs + VAR_0, VAR_3);
 VAR_3 |= FUNC_0(VAR_1);
 FUNC_3(VAR_3, VAR_2->regs + VAR_0);
}
