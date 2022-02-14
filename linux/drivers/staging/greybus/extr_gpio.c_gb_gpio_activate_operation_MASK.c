
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct gbphy_device {int dummy; } ;
struct gb_gpio_controller {TYPE_1__* lines; int connection; struct gbphy_device* gbphy_dev; } ;
struct gb_gpio_activate_request {size_t which; } ;
typedef int request ;
struct TYPE_2__ {int active; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct gb_gpio_activate_request*,int,int *,int ) ;
 int FUNC_1 (struct gbphy_device*) ;
 int FUNC_2 (struct gbphy_device*) ;

__attribute__((used)) static int FUNC_3(struct gb_gpio_controller *VAR_1, u8 VAR_2)
{
 struct gb_gpio_activate_request VAR_3;
 struct gbphy_device *VAR_4 = VAR_1->gbphy_dev;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3.which = VAR_2;
 VAR_5 = FUNC_0(VAR_1->connection, VAR_0,
    &VAR_3, sizeof(VAR_3), ((void*)0), 0);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return VAR_5;
 }

 VAR_1->lines[VAR_2].active = 1;

 return 0;
}
