
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_power_supply {int properties_count; int last_update; TYPE_1__* props; } ;
struct gb_connection {int bundle; } ;
struct TYPE_2__ {int prop; } ;


 int FUNC_0 (struct gb_power_supply*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct gb_connection* FUNC_3 (struct gb_power_supply*) ;
 scalar_t__ FUNC_4 (struct gb_power_supply*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct gb_power_supply *VAR_1)
{
 struct gb_connection *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = 0;
 int VAR_4;

 if (FUNC_4(VAR_1))
  return 0;

 VAR_3 = FUNC_1(VAR_2->bundle);
 if (VAR_3)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_1->properties_count; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1,
       VAR_1->props[VAR_4].prop);
  if (VAR_3 < 0)
   break;
 }

 if (VAR_3 == 0)
  VAR_1->last_update = VAR_0;

 FUNC_2(VAR_2->bundle);
 return VAR_3;
}
