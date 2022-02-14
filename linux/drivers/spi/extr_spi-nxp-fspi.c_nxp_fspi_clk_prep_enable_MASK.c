
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxp_fspi {int clk_en; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nxp_fspi *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->clk_en);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->clk);
 if (VAR_1) {
  FUNC_0(VAR_0->clk_en);
  return VAR_1;
 }

 return 0;
}
