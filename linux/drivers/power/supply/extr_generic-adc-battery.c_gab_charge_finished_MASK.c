
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gab_platform_data {int gpio_inverted; int gpio_charge_finished; } ;
struct gab {struct gab_platform_data* pdata; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct gab *VAR_0)
{
 struct gab_platform_data *VAR_1 = VAR_0->pdata;
 bool VAR_2 = FUNC_0(VAR_1->gpio_charge_finished);
 bool VAR_3 = VAR_1->gpio_inverted;

 if (!FUNC_1(VAR_1->gpio_charge_finished))
  return 0;
 return VAR_2 ^ VAR_3;
}
