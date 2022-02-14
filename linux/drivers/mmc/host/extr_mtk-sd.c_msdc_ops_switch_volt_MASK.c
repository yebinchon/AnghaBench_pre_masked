
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msdc_host {int pins_default; int pinctrl; int pins_uhs; int dev; } ;
struct mmc_ios {int signal_voltage; } ;
struct TYPE_2__ {int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (int ,char*) ;
 struct msdc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct mmc_host *VAR_3, struct mmc_ios *VAR_4)
{
 struct msdc_host *VAR_5 = FUNC_3(VAR_3);
 int VAR_6 = 0;

 if (!FUNC_0(VAR_3->supply.vqmmc)) {
  if (VAR_4->signal_voltage != VAR_2 &&
      VAR_4->signal_voltage != VAR_1) {
   FUNC_2(VAR_5->dev, "Unsupported signal voltage!\n");
   return -VAR_0;
  }

  VAR_6 = FUNC_4(VAR_3, VAR_4);
  if (VAR_6) {
   FUNC_1(VAR_5->dev, "Regulator set error %d (%d)\n",
    VAR_6, VAR_4->signal_voltage);
  } else {

   if (VAR_4->signal_voltage == VAR_1)
    FUNC_5(VAR_5->pinctrl, VAR_5->pins_uhs);
   else
    FUNC_5(VAR_5->pinctrl, VAR_5->pins_default);
  }
 }
 return VAR_6;
}
