
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct gb_gpio_set_value_request {size_t which; int value; } ;
struct gb_gpio_controller {TYPE_2__* lines; int connection; TYPE_1__* gbphy_dev; } ;
struct device {int dummy; } ;
typedef int request ;
struct TYPE_4__ {int direction; int value; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,size_t) ;
 int FUNC_1 (struct device*,char*,size_t) ;
 int FUNC_2 (int ,int ,struct gb_gpio_set_value_request*,int,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct gb_gpio_controller *VAR_1,
     u8 VAR_2, bool VAR_3)
{
 struct device *VAR_4 = &VAR_1->gbphy_dev->dev;
 struct gb_gpio_set_value_request VAR_5;
 int VAR_6;

 if (VAR_1->lines[VAR_2].direction == 1) {
  FUNC_1(VAR_4, "refusing to set value of input gpio %u\n",
    VAR_2);
  return;
 }

 VAR_5.which = VAR_2;
 VAR_5.value = VAR_3 ? 1 : 0;
 VAR_6 = FUNC_2(VAR_1->connection, VAR_0,
    &VAR_5, sizeof(VAR_5), ((void*)0), 0);
 if (VAR_6) {
  FUNC_0(VAR_4, "failed to set value of gpio %u\n", VAR_2);
  return;
 }

 VAR_1->lines[VAR_2].value = VAR_5.value;
}
