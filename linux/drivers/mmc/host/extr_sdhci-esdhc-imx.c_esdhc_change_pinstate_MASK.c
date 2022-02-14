
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int mmc; } ;
struct pltfm_imx_data {struct pinctrl_state* pinctrl; struct pinctrl_state* pins_default; struct pinctrl_state* pins_200mhz; struct pinctrl_state* pins_100mhz; } ;
struct pinctrl_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pinctrl_state*) ;





 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pinctrl_state*,struct pinctrl_state*) ;
 struct pltfm_imx_data* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_6(struct sdhci_host *VAR_1,
      unsigned int VAR_2)
{
 struct sdhci_pltfm_host *VAR_3 = FUNC_5(VAR_1);
 struct pltfm_imx_data *VAR_4 = FUNC_4(VAR_3);
 struct pinctrl_state *VAR_5;

 FUNC_1(FUNC_2(VAR_1->mmc), "change pinctrl state for uhs %d\n", VAR_2);

 if (FUNC_0(VAR_4->pinctrl) ||
  FUNC_0(VAR_4->pins_default) ||
  FUNC_0(VAR_4->pins_100mhz) ||
  FUNC_0(VAR_4->pins_200mhz))
  return -VAR_0;

 switch (VAR_2) {
 case 128:
 case 130:
  VAR_5 = VAR_4->pins_100mhz;
  break;
 case 129:
 case 132:
 case 131:
  VAR_5 = VAR_4->pins_200mhz;
  break;
 default:

  VAR_5 = VAR_4->pins_default;
 }

 return FUNC_3(VAR_4->pinctrl, VAR_5);
}
