
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_0 (int,int) ;
 int FUNC_1 (unsigned long) ;
 struct zx_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_8, unsigned int VAR_9,
        unsigned long *VAR_10)
{
 struct zx_pinctrl *VAR_11 = FUNC_2(VAR_8);
 struct zx_pinctrl_soc_info *VAR_12 = VAR_11->info;
 const struct pinctrl_pin_desc *VAR_13 = VAR_12->pins + VAR_9;
 struct zx_pin_data *VAR_14 = VAR_13->drv_data;
 enum pin_config_param VAR_15 = FUNC_1(*VAR_10);
 u32 VAR_16;


 if (!VAR_14)
  return -VAR_0;

 VAR_16 = FUNC_3(VAR_11->aux_base + VAR_14->coffset);
 VAR_16 = VAR_16 >> VAR_14->cbitpos;

 switch (VAR_15) {
 case 132:
  VAR_16 &= VAR_5;
  VAR_16 = !!VAR_16;
  if (VAR_16 == 0)
   return -VAR_0;
  break;
 case 131:
  VAR_16 &= VAR_6;
  VAR_16 = !!VAR_16;
  if (VAR_16 == 0)
   return -VAR_0;
  break;
 case 129:
  VAR_16 &= VAR_4;
  VAR_16 = !!VAR_16;
  if (VAR_16 == 0)
   return -VAR_0;
  break;
 case 130:
  VAR_16 &= VAR_2;
  VAR_16 = VAR_16 >> VAR_3;
  break;
 case 128:
  VAR_16 &= VAR_7;
  VAR_16 = !!VAR_16;
  break;
 default:
  return -VAR_1;
 }

 *VAR_10 = FUNC_0(VAR_15, VAR_16);

 return 0;
}
