
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx_pinctrl_soc_info {struct pinctrl_pin_desc* pins; } ;
struct zx_pinctrl {scalar_t__ aux_base; struct zx_pinctrl_soc_info* info; } ;
struct zx_pin_data {int cbitpos; scalar_t__ coffset; } ;
struct pinctrl_pin_desc {struct zx_pin_data* drv_data; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct zx_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_7, unsigned int VAR_8,
        unsigned long *VAR_9, unsigned int VAR_10)
{
 struct zx_pinctrl *VAR_11 = FUNC_3(VAR_7);
 struct zx_pinctrl_soc_info *VAR_12 = VAR_11->info;
 const struct pinctrl_pin_desc *VAR_13 = VAR_12->pins + VAR_8;
 struct zx_pin_data *VAR_14 = VAR_13->drv_data;
 enum pin_config_param VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18;


 if (!VAR_14)
  return -VAR_0;

 VAR_16 = FUNC_4(VAR_11->aux_base + VAR_14->coffset);

 for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++) {
  VAR_15 = FUNC_2(VAR_9[VAR_18]);
  VAR_17 = FUNC_1(VAR_9[VAR_18]);

  switch (VAR_15) {
  case 132:
   VAR_16 |= VAR_4 << VAR_14->cbitpos;
   break;
  case 131:
   VAR_16 |= VAR_5 << VAR_14->cbitpos;
   break;
  case 129:
   VAR_16 |= VAR_3 << VAR_14->cbitpos;
   break;
  case 130:
   VAR_16 &= ~(VAR_2 << VAR_14->cbitpos);
   VAR_16 |= FUNC_0(VAR_17) << VAR_14->cbitpos;
   break;
  case 128:
   if (VAR_17)
    VAR_16 |= VAR_6 << VAR_14->cbitpos;
   else
    VAR_16 &= ~VAR_6 << VAR_14->cbitpos;
   break;
  default:
   return -VAR_1;
  }
 }

 FUNC_5(VAR_16, VAR_11->aux_base + VAR_14->coffset);
 return 0;
}
