
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_ios {scalar_t__ signal_voltage; } ;
struct TYPE_2__ {int vqmmc; } ;
struct mmc_host {int class_dev; TYPE_1__ supply; } ;
struct dw_mci_slot {int id; struct dw_mci* host; } ;
struct dw_mci_drv_data {int (* switch_voltage ) (struct mmc_host*,struct mmc_ios*) ;} ;
struct dw_mci {struct dw_mci_drv_data* drv_data; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int,char*) ;
 int FUNC_2 (struct dw_mci*,int ) ;
 int FUNC_3 (struct dw_mci*,int ,int) ;
 struct dw_mci_slot* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_6 (struct mmc_host*,struct mmc_ios*) ;

__attribute__((used)) static int FUNC_7(struct mmc_host *VAR_3, struct mmc_ios *VAR_4)
{
 struct dw_mci_slot *VAR_5 = FUNC_4(VAR_3);
 struct dw_mci *VAR_6 = VAR_5->host;
 const struct dw_mci_drv_data *VAR_7 = VAR_6->drv_data;
 u32 VAR_8;
 u32 VAR_9 = VAR_1 << VAR_5->id;
 int VAR_10;

 if (VAR_7 && VAR_7->switch_voltage)
  return VAR_7->switch_voltage(VAR_3, VAR_4);






 VAR_8 = FUNC_2(VAR_6, VAR_2);
 if (VAR_4->signal_voltage == VAR_0)
  VAR_8 &= ~VAR_9;
 else
  VAR_8 |= VAR_9;

 if (!FUNC_0(VAR_3->supply.vqmmc)) {
  VAR_10 = FUNC_5(VAR_3, VAR_4);

  if (VAR_10) {
   FUNC_1(&VAR_3->class_dev,
      "Regulator set error %d - %s V\n",
      VAR_10, VAR_8 & VAR_9 ? "1.8" : "3.3");
   return VAR_10;
  }
 }
 FUNC_3(VAR_6, VAR_2, VAR_8);

 return 0;
}
