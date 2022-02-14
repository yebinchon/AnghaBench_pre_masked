
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct pinctrl_dev {int dummy; } ;
struct npcm7xx_pinctrl {int gcr_regmap; struct npcm7xx_gpio* gpio_bank; } ;
struct TYPE_2__ {unsigned int ngpio; } ;
struct npcm7xx_gpio {scalar_t__ base; TYPE_1__ gc; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_3 (struct npcm7xx_gpio*,int ,unsigned int) ;
 unsigned long FUNC_4 (int,int) ;
 int FUNC_5 (unsigned long) ;
 struct npcm7xx_pinctrl* FUNC_6 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_9, unsigned int VAR_10,
         unsigned long *VAR_11)
{
 enum pin_config_param VAR_12 = FUNC_5(*VAR_11);
 struct npcm7xx_pinctrl *VAR_13 = FUNC_6(VAR_9);
 struct npcm7xx_gpio *VAR_14 =
  &VAR_13->gpio_bank[VAR_10 / VAR_2];
 int VAR_15 = (VAR_10 % VAR_14->gc.ngpio);
 unsigned long VAR_16 = FUNC_0(VAR_15);
 u32 VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21 = 0;

 switch (VAR_12) {
 case 137:
 case 135:
 case 136:
  VAR_19 = FUNC_1(VAR_14->base + VAR_8) & VAR_16;
  VAR_20 = FUNC_1(VAR_14->base + VAR_7) & VAR_16;
  if (VAR_12 == 137)
   VAR_21 = (!VAR_19 && !VAR_20);
  else if (VAR_12 == 135)
   VAR_21 = (VAR_19 && !VAR_20);
  else if (VAR_12 == 136)
   VAR_21 = (!VAR_19 && VAR_20);
  break;
 case 129:
 case 130:
  VAR_17 = FUNC_1(VAR_14->base + VAR_4) & VAR_16;
  VAR_18 = FUNC_1(VAR_14->base + VAR_5) & VAR_16;
  if (VAR_12 == 130)
   VAR_21 = (VAR_17 && !VAR_18);
  else if (VAR_12 == 129)
   VAR_21 = (!VAR_17 && VAR_18);
  break;
 case 133:
  VAR_21 = !(FUNC_1(VAR_14->base + VAR_6) & VAR_16);
  break;
 case 134:
  VAR_21 = FUNC_1(VAR_14->base + VAR_6) & VAR_16;
  break;
 case 131:
  VAR_21 = FUNC_1(VAR_14->base + VAR_3) & VAR_16;
  break;
 case 132:
  VAR_21 = FUNC_2(VAR_9, VAR_10);
  if (VAR_21)
   *VAR_11 = FUNC_4(VAR_12, VAR_21);
  break;
 case 128:
  VAR_21 = FUNC_3(VAR_14, VAR_13->gcr_regmap, VAR_10);
  if (VAR_21 >= 0)
   *VAR_11 = FUNC_4(VAR_12, VAR_21);
  break;
 default:
  return -VAR_1;
 }

 if (!VAR_21)
  return -VAR_0;

 return 0;
}
