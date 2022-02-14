
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply {scalar_t__ last_update; scalar_t__ cache_invalid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gb_power_supply *VAR_1)
{

 if (VAR_1->cache_invalid) {
  VAR_1->cache_invalid = 0;
  return 0;
 }

 if (VAR_1->last_update &&
     FUNC_1(VAR_1->last_update +
      FUNC_0(VAR_0)))
  return 1;

 return 0;
}
