
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_dev {scalar_t__ regs; } ;
struct fimc_addr {int cr; int cb; int y; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(struct fimc_dev *VAR_2, struct fimc_addr *VAR_3)
{
 u32 VAR_4 = FUNC_3(VAR_2->regs + VAR_0);
 VAR_4 |= VAR_1;
 FUNC_4(VAR_4, VAR_2->regs + VAR_0);

 FUNC_4(VAR_3->y, VAR_2->regs + FUNC_2(0));
 FUNC_4(VAR_3->cb, VAR_2->regs + FUNC_0(0));
 FUNC_4(VAR_3->cr, VAR_2->regs + FUNC_1(0));

 VAR_4 &= ~VAR_1;
 FUNC_4(VAR_4, VAR_2->regs + VAR_0);
}
