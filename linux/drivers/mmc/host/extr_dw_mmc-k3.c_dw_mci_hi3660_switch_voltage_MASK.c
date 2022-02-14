
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_ios {scalar_t__ signal_voltage; } ;
struct TYPE_2__ {int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;
struct k3_priv {scalar_t__ ctrl_id; int reg; } ;
struct dw_mci_slot {struct dw_mci* host; } ;
struct dw_mci {int dev; struct k3_priv* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct dw_mci*,int) ;
 struct dw_mci_slot* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,struct mmc_ios*) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_3,
     struct mmc_ios *VAR_4)
{
 int VAR_5 = 0;
 struct dw_mci_slot *VAR_6 = FUNC_3(VAR_3);
 struct k3_priv *VAR_7;
 struct dw_mci *VAR_8;

 VAR_8 = VAR_6->host;
 VAR_7 = VAR_8->priv;

 if (!VAR_7 || !VAR_7->reg)
  return 0;

 if (VAR_7->ctrl_id == VAR_0)
  return 0;

 if (VAR_4->signal_voltage == VAR_2)
  VAR_5 = FUNC_2(VAR_8, 0);
 else if (VAR_4->signal_voltage == VAR_1)
  VAR_5 = FUNC_2(VAR_8, 1);
 if (VAR_5)
  return VAR_5;

 if (!FUNC_0(VAR_3->supply.vqmmc)) {
  VAR_5 = FUNC_4(VAR_3, VAR_4);
  if (VAR_5) {
   FUNC_1(VAR_8->dev, "Regulator set error %d\n", VAR_5);
   return VAR_5;
  }
 }

 return 0;
}
