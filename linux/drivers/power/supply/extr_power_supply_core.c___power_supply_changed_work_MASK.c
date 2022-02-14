
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply {TYPE_1__* desc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* external_power_changed ) (struct power_supply*) ;} ;


 scalar_t__ FUNC_0 (struct power_supply*,struct power_supply*) ;
 struct power_supply* FUNC_1 (struct device*) ;
 int FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct power_supply *VAR_2 = VAR_1;
 struct power_supply *VAR_3 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_2, VAR_3)) {
  if (VAR_3->desc->external_power_changed)
   VAR_3->desc->external_power_changed(VAR_3);
 }

 return 0;
}
