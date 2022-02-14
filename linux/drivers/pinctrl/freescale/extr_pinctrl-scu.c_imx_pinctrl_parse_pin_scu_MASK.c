
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imx_pinctrl_soc_info {TYPE_2__* pins; } ;
struct imx_pinctrl {int dev; struct imx_pinctrl_soc_info* info; } ;
struct imx_pin_scu {void* config; void* mux_mode; } ;
struct TYPE_3__ {struct imx_pin_scu scu; } ;
struct imx_pin {unsigned int pin; TYPE_1__ conf; } ;
typedef int __be32 ;
struct TYPE_4__ {int name; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,void*,void*) ;

void FUNC_2(struct imx_pinctrl *VAR_0,
          unsigned int *VAR_1, struct imx_pin *VAR_2,
          const __be32 **VAR_3)
{
 const struct imx_pinctrl_soc_info *VAR_4 = VAR_0->info;
 struct imx_pin_scu *VAR_5 = &VAR_2->conf.scu;
 const __be32 *VAR_6 = *VAR_3;

 VAR_2->pin = FUNC_0(*VAR_6++);
 *VAR_1 = VAR_2->pin;
 VAR_5->mux_mode = FUNC_0(*VAR_6++);
 VAR_5->config = FUNC_0(*VAR_6++);
 *VAR_3 = VAR_6;

 FUNC_1(VAR_0->dev, "%s: 0x%x 0x%08lx", VAR_4->pins[VAR_2->pin].name,
  VAR_5->mux_mode, VAR_5->config);
}
