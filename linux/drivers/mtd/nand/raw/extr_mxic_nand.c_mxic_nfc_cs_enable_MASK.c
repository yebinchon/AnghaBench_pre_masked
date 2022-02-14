
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxic_nand_ctlr {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mxic_nand_ctlr *VAR_3)
{
 FUNC_1(FUNC_0(VAR_3->regs + VAR_0) | VAR_2,
        VAR_3->regs + VAR_0);
 FUNC_1(VAR_1 | FUNC_0(VAR_3->regs + VAR_0),
        VAR_3->regs + VAR_0);
}
