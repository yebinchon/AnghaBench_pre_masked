
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pciedev_info {int pdev; scalar_t__ regs; scalar_t__ tcm; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct brcmf_pciedev_info *VAR_0)
{
 if (VAR_0->tcm)
  FUNC_0(VAR_0->tcm);
 if (VAR_0->regs)
  FUNC_0(VAR_0->regs);

 FUNC_1(VAR_0->pdev);
}
