
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ds278x_info {int capacity; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_battery_current ) (struct ds278x_info*,int*) ;int (* get_battery_capacity ) (struct ds278x_info*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ds278x_info*,int*) ;
 int FUNC_1 (struct ds278x_info*,int*) ;

__attribute__((used)) static int FUNC_2(struct ds278x_info *VAR_4, int *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = VAR_4->ops->get_battery_current(VAR_4, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_6 = VAR_4->ops->get_battery_capacity(VAR_4, &VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_4->capacity = VAR_8;

 if (VAR_8 == 100)
  *VAR_5 = VAR_2;
 else if (VAR_7 == 0)
  *VAR_5 = VAR_3;
 else if (VAR_7 < 0)
  *VAR_5 = VAR_1;
 else
  *VAR_5 = VAR_0;

 return 0;
}
