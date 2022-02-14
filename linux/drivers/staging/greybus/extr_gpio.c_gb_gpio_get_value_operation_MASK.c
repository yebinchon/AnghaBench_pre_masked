
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct gb_gpio_get_value_response {int value; } ;
struct gb_gpio_get_value_request {int which; } ;
struct gb_gpio_controller {TYPE_1__* lines; int connection; TYPE_2__* gbphy_dev; } ;
struct device {int dummy; } ;
typedef int response ;
typedef int request ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int value; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (int ,int ,struct gb_gpio_get_value_request*,int,struct gb_gpio_get_value_response*,int) ;

__attribute__((used)) static int FUNC_3(struct gb_gpio_controller *VAR_1,
           u8 VAR_2)
{
 struct device *VAR_3 = &VAR_1->gbphy_dev->dev;
 struct gb_gpio_get_value_request VAR_4;
 struct gb_gpio_get_value_response VAR_5;
 int VAR_6;
 u8 VAR_7;

 VAR_4.which = VAR_2;
 VAR_6 = FUNC_2(VAR_1->connection, VAR_0,
    &VAR_4, sizeof(VAR_4),
    &VAR_5, sizeof(VAR_5));
 if (VAR_6) {
  FUNC_0(VAR_3, "failed to get value of gpio %u\n", VAR_2);
  return VAR_6;
 }

 VAR_7 = VAR_5.value;
 if (VAR_7 && VAR_7 != 1) {
  FUNC_1(VAR_3, "gpio %u value was %u (should be 0 or 1)\n",
    VAR_2, VAR_7);
 }
 VAR_1->lines[VAR_2].value = VAR_7 ? 1 : 0;
 return 0;
}
