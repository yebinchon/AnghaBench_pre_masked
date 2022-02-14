
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct mmc_ios {int bus_width; scalar_t__ timing; scalar_t__ clock; int power_mode; int vdd; } ;
struct TYPE_6__ {int vqmmc; int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;
struct dw_mci_slot {int id; scalar_t__ clock; TYPE_2__* host; int flags; int ctype; } ;
struct dw_mci_drv_data {int (* set_ios ) (TYPE_2__*,struct mmc_ios*) ;} ;
struct TYPE_7__ {scalar_t__ timing; int vqmmc_enabled; scalar_t__ state; int dev; struct dw_mci_drv_data* drv_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;





 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct dw_mci_slot*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 struct dw_mci_slot* FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (TYPE_2__*,struct mmc_ios*) ;

__attribute__((used)) static void FUNC_12(struct mmc_host *VAR_12, struct mmc_ios *VAR_13)
{
 struct dw_mci_slot *VAR_14 = FUNC_6(VAR_12);
 const struct dw_mci_drv_data *VAR_15 = VAR_14->host->drv_data;
 u32 VAR_16;
 int VAR_17;

 switch (VAR_13->bus_width) {
 case 132:
  VAR_14->ctype = VAR_7;
  break;
 case 131:
  VAR_14->ctype = VAR_8;
  break;
 default:

  VAR_14->ctype = VAR_6;
 }

 VAR_16 = FUNC_4(VAR_14->host, VAR_11);


 if (VAR_13->timing == VAR_1 ||
     VAR_13->timing == VAR_3 ||
     VAR_13->timing == VAR_2)
  VAR_16 |= ((0x1 << VAR_14->id) << 16);
 else
  VAR_16 &= ~((0x1 << VAR_14->id) << 16);

 FUNC_5(VAR_14->host, VAR_11, VAR_16);
 VAR_14->host->timing = VAR_13->timing;





 VAR_14->clock = VAR_13->clock;

 if (VAR_15 && VAR_15->set_ios)
  VAR_15->set_ios(VAR_14->host, VAR_13);

 switch (VAR_13->power_mode) {
 case 128:
  if (!FUNC_0(VAR_12->supply.vmmc)) {
   VAR_17 = FUNC_7(VAR_12, VAR_12->supply.vmmc,
     VAR_13->vdd);
   if (VAR_17) {
    FUNC_1(VAR_14->host->dev,
     "failed to enable vmmc regulator\n");

    return;
   }
  }
  FUNC_10(VAR_0, &VAR_14->flags);
  VAR_16 = FUNC_4(VAR_14->host, VAR_4);
  VAR_16 |= (1 << VAR_14->id);
  FUNC_5(VAR_14->host, VAR_4, VAR_16);
  break;
 case 129:
  if (!VAR_14->host->vqmmc_enabled) {
   if (!FUNC_0(VAR_12->supply.vqmmc)) {
    VAR_17 = FUNC_9(VAR_12->supply.vqmmc);
    if (VAR_17 < 0)
     FUNC_1(VAR_14->host->dev,
      "failed to enable vqmmc\n");
    else
     VAR_14->host->vqmmc_enabled = 1;

   } else {

    VAR_14->host->vqmmc_enabled = 1;
   }


   FUNC_2(VAR_14->host,
       VAR_5);
  }


  FUNC_3(VAR_14, 0);

  break;
 case 130:

  FUNC_3(VAR_14, 0);

  if (!FUNC_0(VAR_12->supply.vmmc))
   FUNC_7(VAR_12, VAR_12->supply.vmmc, 0);

  if (!FUNC_0(VAR_12->supply.vqmmc) && VAR_14->host->vqmmc_enabled)
   FUNC_8(VAR_12->supply.vqmmc);
  VAR_14->host->vqmmc_enabled = 0;

  VAR_16 = FUNC_4(VAR_14->host, VAR_4);
  VAR_16 &= ~(1 << VAR_14->id);
  FUNC_5(VAR_14->host, VAR_4, VAR_16);
  break;
 default:
  break;
 }

 if (VAR_14->host->state == VAR_10 && VAR_13->clock != 0)
  VAR_14->host->state = VAR_9;
}
