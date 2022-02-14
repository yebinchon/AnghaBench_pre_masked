
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct dw_mci_slot {struct dw_mci* host; } ;
struct dw_mci_drv_data {int (* execute_tuning ) (struct dw_mci_slot*,int ) ;} ;
struct dw_mci {struct dw_mci_drv_data* drv_data; } ;


 int VAR_0 ;
 struct dw_mci_slot* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct dw_mci_slot*,int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_1, u32 VAR_2)
{
 struct dw_mci_slot *VAR_3 = FUNC_0(VAR_1);
 struct dw_mci *VAR_4 = VAR_3->host;
 const struct dw_mci_drv_data *VAR_5 = VAR_4->drv_data;
 int VAR_6 = -VAR_0;

 if (VAR_5 && VAR_5->execute_tuning)
  VAR_6 = VAR_5->execute_tuning(VAR_3, VAR_2);
 return VAR_6;
}
