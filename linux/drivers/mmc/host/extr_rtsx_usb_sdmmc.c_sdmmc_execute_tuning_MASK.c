
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_usb_sdmmc {int ddr_mode; scalar_t__ host_removal; struct rtsx_ucr* ucr; } ;
struct rtsx_ucr {int dev_mutex; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtsx_usb_sdmmc* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtsx_usb_sdmmc*,int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_2, u32 VAR_3)
{
 struct rtsx_usb_sdmmc *VAR_4 = FUNC_0(VAR_2);
 struct rtsx_ucr *VAR_5 = VAR_4->ucr;
 int VAR_6 = 0;

 if (VAR_4->host_removal)
  return -VAR_0;

 FUNC_1(&VAR_5->dev_mutex);

 if (!VAR_4->ddr_mode)
  VAR_6 = FUNC_3(VAR_4, VAR_1);

 FUNC_2(&VAR_5->dev_mutex);

 return VAR_6;
}
