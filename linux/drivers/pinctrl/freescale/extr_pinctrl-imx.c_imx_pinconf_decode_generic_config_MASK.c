
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_pinctrl_soc_info {unsigned int num_decodes; int (* fixup ) (unsigned long*,unsigned int,int*) ;struct imx_cfg_params_decode* decodes; } ;
struct imx_pinctrl {struct imx_pinctrl_soc_info* info; } ;
struct imx_cfg_params_decode {int param; int shift; int mask; scalar_t__ invert; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long*,unsigned int,int*) ;

__attribute__((used)) static u32 FUNC_4(struct imx_pinctrl *VAR_0,
           unsigned long *VAR_1,
           unsigned int VAR_2)
{
 const struct imx_pinctrl_soc_info *VAR_3 = VAR_0->info;
 const struct imx_cfg_params_decode *VAR_4;
 enum pin_config_param VAR_5;
 u32 VAR_6 = 0;
 u32 VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(VAR_2 > VAR_3->num_decodes);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_5 = FUNC_2(VAR_1[VAR_8]);
  VAR_7 = FUNC_1(VAR_1[VAR_8]);
  VAR_4 = VAR_3->decodes;
  for (VAR_9 = 0; VAR_9 < VAR_3->num_decodes; VAR_9++) {
   if (VAR_5 == VAR_4->param) {
    if (VAR_4->invert)
     VAR_7 = !VAR_7;
    VAR_6 |= (VAR_7 << VAR_4->shift)
           & VAR_4->mask;
    break;
   }
   VAR_4++;
  }
 }

 if (VAR_3->fixup)
  VAR_3->fixup(VAR_1, VAR_2, &VAR_6);

 return VAR_6;
}
