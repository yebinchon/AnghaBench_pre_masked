
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxic_nand_ctlr {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mxic_nand_ctlr *VAR_0, u8 VAR_1)
{
 FUNC_2(FUNC_1(0, VAR_1) |
        FUNC_1(1, VAR_1) |
        FUNC_1(2, VAR_1) |
        FUNC_1(3, VAR_1),
        VAR_0->regs + FUNC_0(0));
 FUNC_2(FUNC_1(4, VAR_1) |
        FUNC_1(5, VAR_1) |
        FUNC_1(6, VAR_1) |
        FUNC_1(7, VAR_1),
        VAR_0->regs + FUNC_0(1));
}
