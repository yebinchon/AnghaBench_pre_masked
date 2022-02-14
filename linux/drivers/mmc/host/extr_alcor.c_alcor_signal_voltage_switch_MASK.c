
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int signal_voltage; } ;
struct mmc_host {int dummy; } ;
struct alcor_sdmmc_host {int cmd_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct alcor_sdmmc_host*,int ,int ,int ) ;
 struct alcor_sdmmc_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_2,
           struct mmc_ios *VAR_3)
{
 struct alcor_sdmmc_host *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(&VAR_4->cmd_mutex);

 switch (VAR_3->signal_voltage) {
 case 128:
  FUNC_0(VAR_4, VAR_0, VAR_1, 0);
  break;
 case 129:
  FUNC_0(VAR_4, VAR_0, 0, VAR_1);
  break;
 default:

  break;
 }

 FUNC_3(&VAR_4->cmd_mutex);
 return 0;
}
