
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* default_trigger; int brightness_set; int brightness; int name; } ;
struct rtsx_usb_sdmmc {int led_work; TYPE_3__ led; int led_name; int host_mutex; struct platform_device* pdev; struct mmc_host* mmc; struct rtsx_ucr* ucr; } ;
struct rtsx_ucr {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (struct mmc_host*) ;
 struct mmc_host* FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (struct mmc_host*) ;
 char* FUNC_7 (struct mmc_host*) ;
 struct rtsx_usb_sdmmc* FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,struct rtsx_usb_sdmmc*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct rtsx_usb_sdmmc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int ,int,char*,char*) ;
 int FUNC_14 (int ) ;
 struct rtsx_ucr* FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_5)
{
 struct mmc_host *VAR_6;
 struct rtsx_usb_sdmmc *VAR_7;
 struct rtsx_ucr *VAR_8;




 VAR_8 = FUNC_15(FUNC_14(VAR_5->dev.parent));
 if (!VAR_8)
  return -VAR_1;

 FUNC_1(&(VAR_5->dev), ": Realtek USB SD/MMC controller found\n");

 VAR_6 = FUNC_5(sizeof(*VAR_7), &VAR_5->dev);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_8(VAR_6);
 VAR_7->ucr = VAR_8;
 VAR_7->mmc = VAR_6;
 VAR_7->pdev = VAR_5;
 FUNC_10(VAR_5, VAR_7);

 FUNC_9(&VAR_7->host_mutex);
 FUNC_12(VAR_7);
 FUNC_11(&VAR_5->dev);
 FUNC_4(VAR_6);

 return 0;
}
