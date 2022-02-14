
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mxic_nand_ctlr {int chip; } ;


 int FUNC_0 (struct mxic_nand_ctlr*) ;
 int FUNC_1 (int *) ;
 struct mxic_nand_ctlr* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct mxic_nand_ctlr *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->chip);
 FUNC_0(VAR_1);
 return 0;
}
