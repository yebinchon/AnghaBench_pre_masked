
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_info {scalar_t__ clk_state; int clk; } ;
typedef enum s3c_nand_clk_state { ____Placeholder_s3c_nand_clk_state } s3c_nand_clk_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s3c2410_nand_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct s3c2410_nand_info *VAR_2,
  enum s3c_nand_clk_state VAR_3)
{
 if (!FUNC_0(VAR_2) && VAR_3 == VAR_1)
  return;

 if (VAR_2->clk_state == VAR_0) {
  if (VAR_3 != VAR_0)
   FUNC_1(VAR_2->clk);
 } else {
  if (VAR_3 == VAR_0)
   FUNC_2(VAR_2->clk);
 }

 VAR_2->clk_state = VAR_3;
}
