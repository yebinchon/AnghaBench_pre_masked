
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtsx_pcr {TYPE_1__* slots; } ;
struct realtek_pci_sdmmc {int cookie; int host_mutex; int work; int power_state; struct platform_device* pdev; struct mmc_host* mmc; struct rtsx_pcr* pcr; } ;
struct TYPE_5__ {struct pcr_handle* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct pcr_handle {struct rtsx_pcr* pcr; } ;
struct mmc_host {int dummy; } ;
struct TYPE_4__ {int card_event; struct platform_device* p_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct mmc_host*) ;
 struct mmc_host* FUNC_3 (int,TYPE_2__*) ;
 struct realtek_pci_sdmmc* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct platform_device*,struct realtek_pci_sdmmc*) ;
 int FUNC_7 (struct realtek_pci_sdmmc*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct mmc_host *VAR_7;
 struct realtek_pci_sdmmc *VAR_8;
 struct rtsx_pcr *VAR_9;
 struct pcr_handle *VAR_10 = VAR_6->dev.platform_data;

 if (!VAR_10)
  return -VAR_1;

 VAR_9 = VAR_10->pcr;
 if (!VAR_9)
  return -VAR_1;

 FUNC_1(&(VAR_6->dev), ": Realtek PCI-E SDMMC controller found\n");

 VAR_7 = FUNC_3(sizeof(*VAR_8), &VAR_6->dev);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_7);
 VAR_8->pcr = VAR_9;
 VAR_8->mmc = VAR_7;
 VAR_8->pdev = VAR_6;
 VAR_8->cookie = -1;
 VAR_8->power_state = VAR_3;
 FUNC_0(&VAR_8->work, VAR_5);
 FUNC_6(VAR_6, VAR_8);
 VAR_9->slots[VAR_2].p_dev = VAR_6;
 VAR_9->slots[VAR_2].card_event = VAR_4;

 FUNC_5(&VAR_8->host_mutex);

 FUNC_7(VAR_8);

 FUNC_2(VAR_7);

 return 0;
}
