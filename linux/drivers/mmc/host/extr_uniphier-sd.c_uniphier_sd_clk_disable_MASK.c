
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_sd_priv {int clk; int rst; int rst_br; } ;
struct tmio_mmc_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct uniphier_sd_priv* FUNC_2 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_3(struct tmio_mmc_host *VAR_0)
{
 struct uniphier_sd_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->rst_br);
 FUNC_1(VAR_1->rst);
 FUNC_0(VAR_1->clk);
}
