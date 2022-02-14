
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_sprd_host {int pins_default; int pinctrl; int pins_uhs; } ;
struct sdhci_host {int dummy; } ;
struct mmc_ios {int signal_voltage; } ;
struct TYPE_2__ {int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 scalar_t__ FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 struct sdhci_sprd_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 struct sdhci_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct sdhci_host*,int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct mmc_host *VAR_2, struct mmc_ios *VAR_3)
{
 struct sdhci_host *VAR_4 = FUNC_3(VAR_2);
 struct sdhci_sprd_host *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 if (!FUNC_0(VAR_2->supply.vqmmc)) {
  VAR_6 = FUNC_4(VAR_2, VAR_3);
  if (VAR_6) {
   FUNC_6("%s: Switching signalling voltage failed\n",
          FUNC_2(VAR_2));
   return VAR_6;
  }
 }

 if (FUNC_0(VAR_5->pinctrl))
  return 0;

 switch (VAR_3->signal_voltage) {
 case 129:
  VAR_6 = FUNC_5(VAR_5->pinctrl,
        VAR_5->pins_uhs);
  if (VAR_6) {
   FUNC_6("%s: failed to select uhs pin state\n",
          FUNC_2(VAR_2));
   return VAR_6;
  }
  break;

 default:

 case 128:
  VAR_6 = FUNC_5(VAR_5->pinctrl,
        VAR_5->pins_default);
  if (VAR_6) {
   FUNC_6("%s: failed to select default pin state\n",
          FUNC_2(VAR_2));
   return VAR_6;
  }
  break;
 }


 FUNC_8(300, 500);
 FUNC_7(VAR_4, VAR_0 | VAR_1);

 return 0;
}
