
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbphy_device {int dummy; } ;
struct gb_gpio_controller {struct gb_gpio_controller* lines; int chip; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;


 int FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_connection*) ;
 struct gb_gpio_controller* FUNC_3 (struct gbphy_device*) ;
 int FUNC_4 (struct gbphy_device*) ;
 int FUNC_5 (struct gbphy_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct gb_gpio_controller*) ;

__attribute__((used)) static void FUNC_8(struct gbphy_device *VAR_0)
{
 struct gb_gpio_controller *VAR_1 = FUNC_3(VAR_0);
 struct gb_connection *VAR_2 = VAR_1->connection;
 int VAR_3;

 VAR_3 = FUNC_5(VAR_0);
 if (VAR_3)
  FUNC_4(VAR_0);

 FUNC_2(VAR_2);
 FUNC_6(&VAR_1->chip);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 FUNC_7(VAR_1->lines);
 FUNC_7(VAR_1);
}
