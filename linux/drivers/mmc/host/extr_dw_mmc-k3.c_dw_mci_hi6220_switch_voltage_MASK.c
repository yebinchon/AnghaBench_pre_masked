
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_ios {scalar_t__ signal_voltage; } ;
struct TYPE_2__ {int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;
struct k3_priv {int reg; } ;
struct dw_mci_slot {struct dw_mci* host; } ;
struct dw_mci {int dev; struct k3_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 struct dw_mci_slot* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_5, struct mmc_ios *VAR_6)
{
 struct dw_mci_slot *VAR_7 = FUNC_2(VAR_5);
 struct k3_priv *VAR_8;
 struct dw_mci *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;

 VAR_9 = VAR_7->host;
 VAR_8 = VAR_9->priv;

 if (!VAR_8 || !VAR_8->reg)
  return 0;

 if (VAR_6->signal_voltage == VAR_4) {
  VAR_12 = FUNC_3(VAR_8->reg, VAR_0,
      VAR_1, 0);
  VAR_10 = 3000000;
  VAR_11 = 3000000;
 } else if (VAR_6->signal_voltage == VAR_3) {
  VAR_12 = FUNC_3(VAR_8->reg, VAR_0,
      VAR_1, VAR_1);
  VAR_10 = 1800000;
  VAR_11 = 1800000;
 } else {
  FUNC_1(VAR_9->dev, "voltage not supported\n");
  return -VAR_2;
 }

 if (VAR_12) {
  FUNC_1(VAR_9->dev, "switch voltage failed\n");
  return VAR_12;
 }

 if (FUNC_0(VAR_5->supply.vqmmc))
  return 0;

 VAR_12 = FUNC_4(VAR_5->supply.vqmmc, VAR_10, VAR_11);
 if (VAR_12) {
  FUNC_1(VAR_9->dev, "Regulator set error %d: %d - %d\n",
     VAR_12, VAR_10, VAR_11);
  return VAR_12;
 }

 return 0;
}
