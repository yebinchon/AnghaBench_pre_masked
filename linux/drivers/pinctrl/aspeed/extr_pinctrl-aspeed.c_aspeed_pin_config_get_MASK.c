
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct aspeed_pinctrl_data {int scu; } ;
struct aspeed_pin_config_map {scalar_t__ arg; } ;
struct aspeed_pin_config {unsigned int bit; int reg; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 struct aspeed_pin_config* FUNC_1 (struct aspeed_pinctrl_data const*,unsigned int,int const) ;
 struct aspeed_pin_config_map* FUNC_2 (int const,int ,unsigned int) ;
 unsigned long FUNC_3 (int const,int) ;
 int FUNC_4 (unsigned long) ;
 struct aspeed_pinctrl_data* FUNC_5 (struct pinctrl_dev*) ;
 int FUNC_6 (int ,int ,unsigned int*) ;

int FUNC_7(struct pinctrl_dev *VAR_5, unsigned int VAR_6,
  unsigned long *VAR_7)
{
 const enum pin_config_param VAR_8 = FUNC_4(*VAR_7);
 const struct aspeed_pin_config_map *VAR_9;
 const struct aspeed_pinctrl_data *VAR_10;
 const struct aspeed_pin_config *VAR_11;
 unsigned int VAR_12;
 int VAR_13 = 0;
 u32 VAR_14;

 VAR_10 = FUNC_5(VAR_5);
 VAR_11 = FUNC_1(VAR_10, VAR_6, VAR_8);
 if (!VAR_11)
  return -VAR_1;

 VAR_13 = FUNC_6(VAR_10->scu, VAR_11->reg, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_9 = FUNC_2(VAR_8, VAR_2,
   (VAR_12 & FUNC_0(VAR_11->bit)) >> VAR_11->bit);

 if (!VAR_9)
  return -VAR_0;

 if (VAR_8 == VAR_4)
  VAR_14 = (u32) VAR_9->arg;
 else if (VAR_8 == VAR_3)
  VAR_14 = !!VAR_9->arg;
 else
  VAR_14 = 1;

 if (!VAR_14)
  return -VAR_0;

 *VAR_7 = FUNC_3(VAR_8, VAR_14);

 return 0;
}
