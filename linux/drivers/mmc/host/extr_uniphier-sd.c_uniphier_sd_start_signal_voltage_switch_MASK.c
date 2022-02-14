
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_sd_priv {int pinctrl; struct pinctrl_state* pinstate_uhs; struct pinctrl_state* pinstate_default; } ;
struct tmio_mmc_host {scalar_t__ ctl; } ;
struct pinctrl_state {int dummy; } ;
struct mmc_ios {int signal_voltage; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tmio_mmc_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int ,struct pinctrl_state*) ;
 int FUNC_3 (scalar_t__) ;
 struct uniphier_sd_priv* FUNC_4 (struct tmio_mmc_host*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mmc_host *VAR_5,
         struct mmc_ios *VAR_6)
{
 struct tmio_mmc_host *VAR_7 = FUNC_1(VAR_5);
 struct uniphier_sd_priv *VAR_8 = FUNC_4(VAR_7);
 struct pinctrl_state *VAR_9;
 u32 VAR_10, VAR_11;

 switch (VAR_6->signal_voltage) {
 case 128:
  VAR_10 = VAR_3;
  VAR_9 = VAR_8->pinstate_default;
  break;
 case 129:
  VAR_10 = VAR_2;
  VAR_9 = VAR_8->pinstate_uhs;
  break;
 default:
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_7->ctl + VAR_1);
 VAR_11 &= ~VAR_4;
 VAR_11 |= FUNC_0(VAR_4, VAR_10);
 FUNC_5(VAR_11, VAR_7->ctl + VAR_1);

 FUNC_2(VAR_8->pinctrl, VAR_9);

 return 0;
}
