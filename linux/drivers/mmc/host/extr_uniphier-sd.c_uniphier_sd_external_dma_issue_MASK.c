
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_sd_priv {int chan; } ;
struct tmio_mmc_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tmio_mmc_host*,int) ;
 struct uniphier_sd_priv* FUNC_2 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct tmio_mmc_host *VAR_1 = (void *)VAR_0;
 struct uniphier_sd_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, 1);
 FUNC_0(VAR_2->chan);
}
