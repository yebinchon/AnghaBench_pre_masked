
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct device {int dummy; } ;
struct gbphy_device {struct device dev; } ;
struct gb_gpio_deactivate_request {size_t which; } ;
struct gb_gpio_controller {TYPE_1__* lines; int connection; struct gbphy_device* gbphy_dev; } ;
typedef int request ;
struct TYPE_2__ {int active; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,size_t) ;
 int FUNC_1 (int ,int ,struct gb_gpio_deactivate_request*,int,int *,int ) ;
 int FUNC_2 (struct gbphy_device*) ;

__attribute__((used)) static void FUNC_3(struct gb_gpio_controller *VAR_1,
      u8 VAR_2)
{
 struct gbphy_device *VAR_3 = VAR_1->gbphy_dev;
 struct device *VAR_4 = &VAR_3->dev;
 struct gb_gpio_deactivate_request VAR_5;
 int VAR_6;

 VAR_5.which = VAR_2;
 VAR_6 = FUNC_1(VAR_1->connection, VAR_0,
    &VAR_5, sizeof(VAR_5), ((void*)0), 0);
 if (VAR_6) {
  FUNC_0(VAR_4, "failed to deactivate gpio %u\n", VAR_2);
  goto out_pm_put;
 }

 VAR_1->lines[VAR_2].active = 0;

out_pm_put:
 FUNC_2(VAR_3);
}
