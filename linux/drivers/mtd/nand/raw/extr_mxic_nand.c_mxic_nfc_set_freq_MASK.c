
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxic_nand_ctlr {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct mxic_nand_ctlr*) ;
 int FUNC_1 (struct mxic_nand_ctlr*) ;
 int FUNC_2 (struct mxic_nand_ctlr*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mxic_nand_ctlr *VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 FUNC_0(VAR_1);
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;

 return 0;
}
