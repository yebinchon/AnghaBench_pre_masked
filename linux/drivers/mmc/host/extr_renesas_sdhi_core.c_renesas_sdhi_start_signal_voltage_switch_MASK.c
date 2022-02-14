
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int mmc; } ;
struct renesas_sdhi {struct pinctrl_state* pinctrl; struct pinctrl_state* pins_uhs; struct pinctrl_state* pins_default; } ;
struct pinctrl_state {int dummy; } ;
struct mmc_ios {int signal_voltage; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pinctrl_state*) ;


 struct renesas_sdhi* FUNC_1 (struct tmio_mmc_host*) ;
 struct tmio_mmc_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int ,struct mmc_ios*) ;
 int FUNC_4 (struct pinctrl_state*,struct pinctrl_state*) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_1,
          struct mmc_ios *VAR_2)
{
 struct tmio_mmc_host *VAR_3 = FUNC_2(VAR_1);
 struct renesas_sdhi *VAR_4 = FUNC_1(VAR_3);
 struct pinctrl_state *VAR_5;
 int VAR_6;

 switch (VAR_2->signal_voltage) {
 case 128:
  VAR_5 = VAR_4->pins_default;
  break;
 case 129:
  VAR_5 = VAR_4->pins_uhs;
  break;
 default:
  return -VAR_0;
 }





 if (FUNC_0(VAR_4->pinctrl) || FUNC_0(VAR_5))
  return VAR_2->signal_voltage ==
   128 ? 0 : -VAR_0;

 VAR_6 = FUNC_3(VAR_3->mmc, VAR_2);
 if (VAR_6)
  return VAR_6;

 return FUNC_4(VAR_4->pinctrl, VAR_5);
}
