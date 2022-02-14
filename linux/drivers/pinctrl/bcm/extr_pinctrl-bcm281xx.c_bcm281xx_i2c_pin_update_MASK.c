
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


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int*,int*,int,int ,int ) ;
 int* VAR_5 ;
 int FUNC_4 (int ,char*,int,int ,unsigned int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 struct bcm281xx_pinctrl_data* FUNC_7 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_6,
       unsigned VAR_7,
       unsigned long *VAR_8,
       unsigned VAR_9,
       u32 *VAR_10,
       u32 *VAR_11)
{
 struct bcm281xx_pinctrl_data *VAR_12 = FUNC_7(VAR_6);
 int VAR_13, VAR_14;
 enum pin_config_param VAR_15;
 u32 VAR_16;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_15 = FUNC_6(VAR_8[VAR_13]);
  VAR_16 = FUNC_5(VAR_8[VAR_13]);

  switch (VAR_15) {
  case 130:
   for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_5); VAR_14++)
    if (VAR_5[VAR_14] == VAR_16)
     break;

   if (VAR_14 == FUNC_0(VAR_5)) {
    FUNC_4(VAR_6->dev,
     "Invalid pull-up value (%d) for pin %s "
     "(%d). Valid values are 568, 720, 831, "
     "1080, 1200, 1800, 2700 Ohms.\n",
     VAR_16, VAR_12->pins[VAR_7].name, VAR_7);
    return -VAR_0;
   }

   FUNC_3(VAR_10, VAR_11, VAR_14+1,
    FUNC_2(VAR_1, VAR_3),
    FUNC_1(VAR_1, VAR_3));
   break;

  case 131:
   FUNC_3(VAR_10, VAR_11, 0,
    FUNC_2(VAR_1, VAR_3),
    FUNC_1(VAR_1, VAR_3));
   break;

  case 128:
   VAR_16 = (VAR_16 >= 1 ? 1 : 0);
   FUNC_3(VAR_10, VAR_11, VAR_16,
    FUNC_2(VAR_1, VAR_4),
    FUNC_1(VAR_1, VAR_4));
   break;

  case 129:

   VAR_16 = (VAR_16 >= 1 ? 0 : 1);
   FUNC_3(VAR_10, VAR_11, VAR_16,
    FUNC_2(VAR_1, VAR_2),
    FUNC_1(VAR_1, VAR_2));
   break;

  default:
   FUNC_4(VAR_6->dev,
    "Unrecognized pin config %d for pin %s (%d).\n",
    VAR_15, VAR_12->pins[VAR_7].name, VAR_7);
   return -VAR_0;

  }
 }

 return 0;
}
