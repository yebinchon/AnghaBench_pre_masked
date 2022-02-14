
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {int flags; } ;
struct bq27xxx_device_info {int opts; TYPE_1__ cache; int bat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct bq27xxx_device_info *VAR_9,
      union power_supply_propval *VAR_10)
{
 int VAR_11;

 if (VAR_9->opts & VAR_4) {
  if (VAR_9->cache.flags & VAR_1)
   VAR_11 = VAR_7;
  else if (VAR_9->cache.flags & VAR_0)
   VAR_11 = VAR_5;
  else if (FUNC_0(VAR_9->bat) > 0)
   VAR_11 = VAR_8;
  else
   VAR_11 = VAR_6;
 } else {
  if (VAR_9->cache.flags & VAR_3)
   VAR_11 = VAR_7;
  else if (VAR_9->cache.flags & VAR_2)
   VAR_11 = VAR_6;
  else
   VAR_11 = VAR_5;
 }

 VAR_10->intval = VAR_11;

 return 0;
}
