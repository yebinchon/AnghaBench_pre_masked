
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


 int FUNC_2 (int*,int*,int,int ,int ) ;
 int FUNC_3 (int ,char*,int,int ,unsigned int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 struct bcm281xx_pinctrl_data* FUNC_6 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_4,
        unsigned VAR_5,
        unsigned long *VAR_6,
        unsigned VAR_7,
        u32 *VAR_8,
        u32 *VAR_9)
{
 struct bcm281xx_pinctrl_data *VAR_10 = FUNC_6(VAR_4);
 int VAR_11;
 enum pin_config_param VAR_12;
 u32 VAR_13;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_12 = FUNC_5(VAR_6[VAR_11]);
  VAR_13 = FUNC_4(VAR_6[VAR_11]);

  switch (VAR_12) {
  case 128:
   VAR_13 = (VAR_13 >= 1 ? 1 : 0);
   FUNC_2(VAR_8, VAR_9, VAR_13,
    FUNC_1(VAR_1, VAR_3),
    FUNC_0(VAR_1, VAR_3));
   break;

  case 129:

   VAR_13 = (VAR_13 >= 1 ? 0 : 1);
   FUNC_2(VAR_8, VAR_9, VAR_13,
    FUNC_1(VAR_1, VAR_2),
    FUNC_0(VAR_1, VAR_2));
   break;

  default:
   FUNC_3(VAR_4->dev,
    "Unrecognized pin config %d for pin %s (%d).\n",
    VAR_12, VAR_10->pins[VAR_5].name, VAR_5);
   return -VAR_0;

  }
 }

 return 0;
}
