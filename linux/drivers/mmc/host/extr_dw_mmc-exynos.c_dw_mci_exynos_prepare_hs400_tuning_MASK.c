
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int clock; } ;
struct dw_mci_exynos_priv_data {int hs400_timing; } ;
struct dw_mci {struct dw_mci_exynos_priv_data* priv; } ;


 int FUNC_0 (struct dw_mci*,int) ;
 int FUNC_1 (struct dw_mci*,int ) ;

__attribute__((used)) static int FUNC_2(struct dw_mci *VAR_0,
     struct mmc_ios *VAR_1)
{
 struct dw_mci_exynos_priv_data *VAR_2 = VAR_0->priv;

 FUNC_1(VAR_0, VAR_2->hs400_timing);
 FUNC_0(VAR_0, (VAR_1->clock) << 1);

 return 0;
}
