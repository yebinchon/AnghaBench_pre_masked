
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int dummy; } ;
struct mmc_host {int dummy; } ;
struct dw_mci_slot {struct dw_mci* host; } ;
struct dw_mci_drv_data {int (* prepare_hs400_tuning ) (struct dw_mci*,struct mmc_ios*) ;} ;
struct dw_mci {struct dw_mci_drv_data* drv_data; } ;


 struct dw_mci_slot* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct dw_mci*,struct mmc_ios*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_0,
           struct mmc_ios *VAR_1)
{
 struct dw_mci_slot *VAR_2 = FUNC_0(VAR_0);
 struct dw_mci *VAR_3 = VAR_2->host;
 const struct dw_mci_drv_data *VAR_4 = VAR_3->drv_data;

 if (VAR_4 && VAR_4->prepare_hs400_tuning)
  return VAR_4->prepare_hs400_tuning(VAR_3, VAR_1);

 return 0;
}
