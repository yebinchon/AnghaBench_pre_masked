
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int power_mode; } ;
struct mmc_host {int caps2; int ocr_avail; TYPE_1__ ios; scalar_t__ rescan_disable; int f_min; int f_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_host*,int ,int) ;
 int * VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int ) ;
 int FUNC_5 (struct mmc_host*) ;

void FUNC_6(struct mmc_host *VAR_3)
{
 VAR_3->f_init = FUNC_1(VAR_2[0], VAR_3->f_min);
 VAR_3->rescan_disable = 0;
 VAR_3->ios.power_mode = VAR_1;

 if (!(VAR_3->caps2 & VAR_0)) {
  FUNC_2(VAR_3);
  FUNC_4(VAR_3, VAR_3->ocr_avail);
  FUNC_5(VAR_3);
 }

 FUNC_3(VAR_3);
 FUNC_0(VAR_3, 0, 0);
}
