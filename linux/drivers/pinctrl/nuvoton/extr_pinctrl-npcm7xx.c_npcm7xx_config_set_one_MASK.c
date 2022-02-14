
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct npcm7xx_pinctrl {int gcr_regmap; struct npcm7xx_gpio* gpio_bank; } ;
struct TYPE_5__ {unsigned int ngpio; int parent; } ;
struct npcm7xx_gpio {scalar_t__ base; TYPE_1__ gc; int (* direction_output ) (TYPE_1__*,unsigned int,int ) ;int (* direction_input ) (TYPE_1__*,unsigned int) ;} ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,int,unsigned int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct npcm7xx_pinctrl*,unsigned int,int ) ;
 int FUNC_4 (struct npcm7xx_gpio*,int ,unsigned int,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (TYPE_1__*,unsigned int) ;
 int FUNC_10 (TYPE_1__*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_11(struct npcm7xx_pinctrl *VAR_8,
      unsigned int VAR_9, unsigned long VAR_10)
{
 enum pin_config_param VAR_11 = FUNC_8(VAR_10);
 u16 VAR_12 = FUNC_7(VAR_10);
 struct npcm7xx_gpio *VAR_13 =
  &VAR_8->gpio_bank[VAR_9 / VAR_1];
 int VAR_14 = FUNC_0(VAR_9 % VAR_13->gc.ngpio);

 FUNC_1(VAR_13->gc.parent, "param=%d %d[GPIO]\n", VAR_11, VAR_9);
 switch (VAR_11) {
 case 137:
  FUNC_5(&VAR_13->gc, VAR_13->base + VAR_7, VAR_14);
  FUNC_5(&VAR_13->gc, VAR_13->base + VAR_6, VAR_14);
  break;
 case 136:
  FUNC_5(&VAR_13->gc, VAR_13->base + VAR_7, VAR_14);
  FUNC_6(&VAR_13->gc, VAR_13->base + VAR_6, VAR_14);
  break;
 case 135:
  FUNC_5(&VAR_13->gc, VAR_13->base + VAR_6, VAR_14);
  FUNC_6(&VAR_13->gc, VAR_13->base + VAR_7, VAR_14);
  break;
 case 130:
  FUNC_2(VAR_14, VAR_13->base + VAR_3);
  VAR_13->direction_input(&VAR_13->gc, VAR_9 % VAR_13->gc.ngpio);
  break;
 case 129:
  FUNC_2(VAR_14, VAR_13->base + VAR_4);
  VAR_13->direction_output(&VAR_13->gc, VAR_9 % VAR_13->gc.ngpio, VAR_12);
  break;
 case 133:
  FUNC_5(&VAR_13->gc, VAR_13->base + VAR_5, VAR_14);
  break;
 case 134:
  FUNC_6(&VAR_13->gc, VAR_13->base + VAR_5, VAR_14);
  break;
 case 131:
  FUNC_6(&VAR_13->gc, VAR_13->base + VAR_2, VAR_14);
  break;
 case 128:
  return FUNC_4(VAR_13, VAR_8->gcr_regmap, VAR_9, VAR_12);
 case 132:
  return FUNC_3(VAR_8, VAR_9, VAR_12);
 default:
  return -VAR_0;
 }

 return 0;
}
