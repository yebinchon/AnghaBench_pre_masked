
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sdhci_omap_host {int flags; size_t timing; int pinctrl; struct pinctrl_state** pinctrl_state; struct device* dev; } ;
struct pinctrl_state {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,struct pinctrl_state*) ;
 int FUNC_2 (struct sdhci_omap_host*) ;
 int FUNC_3 (struct sdhci_omap_host*) ;

__attribute__((used)) static void FUNC_4(struct sdhci_omap_host *VAR_1, u8 VAR_2)
{
 int VAR_3;
 struct pinctrl_state *VAR_4;
 struct device *VAR_5 = VAR_1->dev;

 if (!(VAR_1->flags & VAR_0))
  return;

 if (VAR_1->timing == VAR_2)
  return;

 FUNC_3(VAR_1);

 VAR_4 = VAR_1->pinctrl_state[VAR_2];
 VAR_3 = FUNC_1(VAR_1->pinctrl, VAR_4);
 if (VAR_3) {
  FUNC_0(VAR_5, "failed to select pinctrl state\n");
  return;
 }

 FUNC_2(VAR_1);
 VAR_1->timing = VAR_2;
}
