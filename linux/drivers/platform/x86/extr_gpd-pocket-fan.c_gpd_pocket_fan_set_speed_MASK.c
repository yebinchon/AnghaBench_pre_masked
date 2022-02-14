
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpd_pocket_fan_data {int last_speed; int gpio1; int gpio0; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct gpd_pocket_fan_data *VAR_0, int VAR_1)
{
 if (VAR_1 == VAR_0->last_speed)
  return;

 FUNC_0(VAR_0->gpio0, !!(VAR_1 & 1));
 FUNC_0(VAR_0->gpio1, !!(VAR_1 & 2));

 VAR_0->last_speed = VAR_1;
}
