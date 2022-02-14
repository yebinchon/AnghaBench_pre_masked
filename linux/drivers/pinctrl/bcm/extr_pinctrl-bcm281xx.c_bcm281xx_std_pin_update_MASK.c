
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dev; } ;
struct bcm281xx_pinctrl_data {TYPE_1__* pins; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int*,int*,int,int ,int ) ;
 int FUNC_3 (int ,char*,int,int ,unsigned int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 struct bcm281xx_pinctrl_data* FUNC_6 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_8,
       unsigned VAR_9,
       unsigned long *VAR_10,
       unsigned VAR_11,
       u32 *VAR_12,
       u32 *VAR_13)
{
 struct bcm281xx_pinctrl_data *VAR_14 = FUNC_6(VAR_8);
 int VAR_15;
 enum pin_config_param VAR_16;
 u32 VAR_17;

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  VAR_16 = FUNC_5(VAR_10[VAR_15]);
  VAR_17 = FUNC_4(VAR_10[VAR_15]);

  switch (VAR_16) {
  case 129:
   VAR_17 = (VAR_17 >= 1 ? 1 : 0);
   FUNC_2(VAR_12, VAR_13, VAR_17,
    FUNC_1(VAR_7, VAR_2),
    FUNC_0(VAR_7, VAR_2));
   break;






  case 134:
   FUNC_2(VAR_12, VAR_13, 0,
    FUNC_1(VAR_7, VAR_5),
    FUNC_0(VAR_7, VAR_5));
   FUNC_2(VAR_12, VAR_13, 0,
    FUNC_1(VAR_7, VAR_4),
    FUNC_0(VAR_7, VAR_4));
   break;

  case 132:
   FUNC_2(VAR_12, VAR_13, 1,
    FUNC_1(VAR_7, VAR_5),
    FUNC_0(VAR_7, VAR_5));
   FUNC_2(VAR_12, VAR_13, 0,
    FUNC_1(VAR_7, VAR_4),
    FUNC_0(VAR_7, VAR_4));
   break;

  case 133:
   FUNC_2(VAR_12, VAR_13, 0,
    FUNC_1(VAR_7, VAR_5),
    FUNC_0(VAR_7, VAR_5));
   FUNC_2(VAR_12, VAR_13, 1,
    FUNC_1(VAR_7, VAR_4),
    FUNC_0(VAR_7, VAR_4));
   break;

  case 128:
   VAR_17 = (VAR_17 >= 1 ? 1 : 0);
   FUNC_2(VAR_12, VAR_13, VAR_17,
    FUNC_1(VAR_7, VAR_6),
    FUNC_0(VAR_7, VAR_6));
   break;

  case 130:

   VAR_17 = (VAR_17 >= 1 ? 0 : 1);
   FUNC_2(VAR_12, VAR_13, VAR_17,
    FUNC_1(VAR_7, VAR_3),
    FUNC_0(VAR_7, VAR_3));
   break;

  case 131:

   if ((VAR_17 < 2) || (VAR_17 > 16) || (VAR_17 % 2)) {
    FUNC_3(VAR_8->dev,
     "Invalid Drive Strength value (%d) for "
     "pin %s (%d). Valid values are "
     "(2..16) mA, even numbers only.\n",
     VAR_17, VAR_14->pins[VAR_9].name, VAR_9);
    return -VAR_1;
   }
   FUNC_2(VAR_12, VAR_13, (VAR_17/2)-1,
    FUNC_1(VAR_7, VAR_0),
    FUNC_0(VAR_7, VAR_0));
   break;

  default:
   FUNC_3(VAR_8->dev,
    "Unrecognized pin config %d for pin %s (%d).\n",
    VAR_16, VAR_14->pins[VAR_9].name, VAR_9);
   return -VAR_1;

  }
 }

 return 0;
}
