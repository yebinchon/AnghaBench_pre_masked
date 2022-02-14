
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_property_entry {int type; size_t length; size_t value; } ;







__attribute__((used)) static bool FUNC_0(const struct tb_property_entry *VAR_0,
      size_t VAR_1)
{
 switch (VAR_0->type) {
 case 130:
 case 131:
 case 129:
  if (VAR_0->length > VAR_1)
   return 0;
  if (VAR_0->value + VAR_0->length > VAR_1)
   return 0;
  break;

 case 128:
  if (VAR_0->length != 1)
   return 0;
  break;
 }

 return 1;
}
