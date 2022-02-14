
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_sd_priv {void* pinstate_uhs; void* pinctrl; void* pinstate_default; } ;
struct TYPE_2__ {int start_signal_voltage_switch; } ;
struct tmio_mmc_host {TYPE_1__ ops; int mmc; } ;


 scalar_t__ FUNC_0 (void*) ;
 char* VAR_0 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (void*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct tmio_mmc_host *VAR_2,
    struct uniphier_sd_priv *VAR_3)
{
 VAR_3->pinctrl = FUNC_2(FUNC_3(VAR_2->mmc));
 if (FUNC_0(VAR_3->pinctrl))
  return FUNC_1(VAR_3->pinctrl);

 VAR_3->pinstate_default = FUNC_4(VAR_3->pinctrl,
            VAR_0);
 if (FUNC_0(VAR_3->pinstate_default))
  return FUNC_1(VAR_3->pinstate_default);

 VAR_3->pinstate_uhs = FUNC_4(VAR_3->pinctrl, "uhs");
 if (FUNC_0(VAR_3->pinstate_uhs))
  return FUNC_1(VAR_3->pinstate_uhs);

 VAR_2->ops.start_signal_voltage_switch =
     VAR_1;

 return 0;
}
