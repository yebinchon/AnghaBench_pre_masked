
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_sd_priv {int dma_dir; } ;
struct tmio_mmc_host {int sg_ptr; int mmc; } ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tmio_mmc_host*) ;
 int FUNC_3 (struct tmio_mmc_host*,int ) ;
 struct uniphier_sd_priv* FUNC_4 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_5(struct tmio_mmc_host *VAR_0)
{
 struct uniphier_sd_priv *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(VAR_0, 0);
 FUNC_0(FUNC_1(VAR_0->mmc), VAR_0->sg_ptr, 1, VAR_1->dma_dir);

 FUNC_2(VAR_0);
}
