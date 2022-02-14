
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_sd_priv {scalar_t__ chan; } ;
struct tmio_mmc_host {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tmio_mmc_host*,int ) ;
 struct uniphier_sd_priv* FUNC_2 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_3(struct tmio_mmc_host *VAR_0)
{
 struct uniphier_sd_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0, 0);

 if (VAR_1->chan)
  FUNC_0(VAR_1->chan);
}
