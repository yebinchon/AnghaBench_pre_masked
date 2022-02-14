
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mmc_host {int dummy; } ;
struct dw_mci_slot {struct mmc_host* mmc; struct dw_mci* host; } ;
struct dw_mci_exynos_priv_data {scalar_t__ tuned_sample; } ;
struct dw_mci {struct dw_mci_exynos_priv_data* priv; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dw_mci*) ;
 int FUNC_2 (struct dw_mci*) ;
 int FUNC_3 (struct dw_mci*,scalar_t__) ;
 int FUNC_4 (struct dw_mci*,int ,int ) ;
 int FUNC_5 (struct mmc_host*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct dw_mci_slot *VAR_2, u32 VAR_3)
{
 struct dw_mci *VAR_4 = VAR_2->host;
 struct dw_mci_exynos_priv_data *VAR_5 = VAR_4->priv;
 struct mmc_host *VAR_6 = VAR_2->mmc;
 u8 VAR_7, VAR_8, VAR_9 = 0;
 s8 VAR_10 = -1;
 int VAR_11 = 0;

 VAR_7 = FUNC_1(VAR_4);

 do {
  FUNC_4(VAR_4, VAR_1, ~0);
  VAR_8 = FUNC_2(VAR_4);

  if (!FUNC_5(VAR_6, VAR_3, ((void*)0)))
   VAR_9 |= (1 << VAR_8);

 } while (VAR_7 != VAR_8);

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10 >= 0) {
  FUNC_3(VAR_4, VAR_10);
  VAR_5->tuned_sample = VAR_10;
 } else {
  VAR_11 = -VAR_0;
 }

 return VAR_11;
}
