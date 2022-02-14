
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbs_info {int is_present; int gpio_detect; struct power_supply* power_supply; } ;
struct power_supply {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct power_supply*) ;

__attribute__((used)) static void FUNC_2(struct sbs_info *VAR_0)
{
 struct power_supply *VAR_1 = VAR_0->power_supply;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->gpio_detect);
 if (VAR_2 < 0)
  return;
 VAR_0->is_present = VAR_2;
 FUNC_1(VAR_1);
}
