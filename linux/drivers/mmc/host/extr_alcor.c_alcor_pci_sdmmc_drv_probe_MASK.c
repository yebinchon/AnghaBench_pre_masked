
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct alcor_pci_priv* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mmc_host {int dummy; } ;
struct alcor_sdmmc_host {int timeout_work; int cmd_mutex; struct alcor_pci_priv* alcor_pci; int cur_power_mode; TYPE_1__* dev; } ;
struct alcor_pci_priv {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct alcor_sdmmc_host*) ;
 int FUNC_2 (struct alcor_sdmmc_host*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct alcor_pci_priv*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,struct alcor_sdmmc_host*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,int ,int ,struct alcor_sdmmc_host*) ;
 int FUNC_7 (struct mmc_host*) ;
 struct mmc_host* FUNC_8 (int,TYPE_1__*) ;
 struct alcor_sdmmc_host* FUNC_9 (struct mmc_host*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct alcor_pci_priv *VAR_10 = VAR_9->dev.platform_data;
 struct mmc_host *VAR_11;
 struct alcor_sdmmc_host *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_8(sizeof(*VAR_12), &VAR_9->dev);
 if (!VAR_11) {
  FUNC_4(&VAR_9->dev, "Can't allocate MMC\n");
  return -VAR_3;
 }

 VAR_12 = FUNC_9(VAR_11);
 VAR_12->dev = &VAR_9->dev;
 VAR_12->cur_power_mode = VAR_5;
 VAR_12->alcor_pci = VAR_10;


 FUNC_3(VAR_10, 0, VAR_1);
 FUNC_3(VAR_10, 0, VAR_0);

 VAR_13 = FUNC_6(&VAR_9->dev, VAR_10->irq,
   VAR_6, VAR_7, VAR_4,
   VAR_2, VAR_12);

 if (VAR_13) {
  FUNC_4(&VAR_9->dev, "Failed to get irq for data line\n");
  return VAR_13;
 }

 FUNC_10(&VAR_12->cmd_mutex);
 FUNC_0(&VAR_12->timeout_work, VAR_8);

 FUNC_2(VAR_12);
 FUNC_1(VAR_12);

 FUNC_5(&VAR_9->dev, VAR_12);
 FUNC_7(VAR_11);
 return 0;
}
