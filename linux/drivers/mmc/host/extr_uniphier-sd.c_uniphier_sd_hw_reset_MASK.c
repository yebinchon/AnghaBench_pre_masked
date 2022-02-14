
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_sd_priv {int rst_hw; } ;
struct tmio_mmc_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct uniphier_sd_priv* FUNC_3 (struct tmio_mmc_host*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct tmio_mmc_host *VAR_0)
{
 struct uniphier_sd_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->rst_hw);

 FUNC_2(9);
 FUNC_1(VAR_1->rst_hw);

 FUNC_4(300, 1000);
}
