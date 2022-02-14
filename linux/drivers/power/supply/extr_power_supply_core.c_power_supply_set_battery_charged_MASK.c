
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply {TYPE_1__* desc; int use_cnt; } ;
struct TYPE_2__ {scalar_t__ type; int (* set_charged ) (struct power_supply*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct power_supply*) ;

int FUNC_2(struct power_supply *VAR_2)
{
 if (FUNC_0(&VAR_2->use_cnt) >= 0 &&
   VAR_2->desc->type == VAR_1 &&
   VAR_2->desc->set_charged) {
  VAR_2->desc->set_charged(VAR_2);
  return 0;
 }

 return -VAR_0;
}
