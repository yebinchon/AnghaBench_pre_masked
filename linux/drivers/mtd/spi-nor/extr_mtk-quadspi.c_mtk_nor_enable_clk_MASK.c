
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_nor {int spi_clk; int nor_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mtk_nor *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->spi_clk);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->nor_clk);
 if (VAR_1) {
  FUNC_0(VAR_0->spi_clk);
  return VAR_1;
 }

 return 0;
}
