
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxic_nand_ctlr {int complete; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct mxic_nand_ctlr *VAR_6 = VAR_5;
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_6->regs + VAR_1);
 if (VAR_7 & VAR_0)
  FUNC_0(&VAR_6->complete);
 else
  return VAR_3;

 return VAR_2;
}
