
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {int flags; } ;
struct bq27xxx_device_info {int opts; TYPE_1__ cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_0(struct bq27xxx_device_info *VAR_11,
       union power_supply_propval *VAR_12)
{
 int VAR_13;

 if (VAR_11->opts & VAR_6) {
  if (VAR_11->cache.flags & VAR_2)
   VAR_13 = VAR_8;
  else if (VAR_11->cache.flags & VAR_0)
   VAR_13 = VAR_9;
  else if (VAR_11->cache.flags & VAR_1)
   VAR_13 = VAR_7;
  else
   VAR_13 = VAR_10;
 } else {
  if (VAR_11->cache.flags & VAR_3)
   VAR_13 = VAR_8;
  else if (VAR_11->cache.flags & VAR_4)
   VAR_13 = VAR_9;
  else if (VAR_11->cache.flags & VAR_5)
   VAR_13 = VAR_7;
  else
   VAR_13 = VAR_10;
 }

 VAR_12->intval = VAR_13;

 return 0;
}
