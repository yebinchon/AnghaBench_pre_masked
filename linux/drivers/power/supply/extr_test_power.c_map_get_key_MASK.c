
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct battery_property_map {char const* key; int value; } ;



__attribute__((used)) static const char *FUNC_0(struct battery_property_map *VAR_0, int VAR_1,
    const char *VAR_2)
{
 while (VAR_0->key) {
  if (VAR_0->value == VAR_1)
   return VAR_0->key;
  VAR_0++;
 }

 return VAR_2;
}
