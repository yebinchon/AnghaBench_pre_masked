
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct twl4030_power_data {int num; TYPE_1__** scripts; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int FUNC_0 (struct twl4030_power_data const*,TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(const struct twl4030_power_data *VAR_1)
{
 int VAR_2;
 int VAR_3;
 u8 VAR_4 = VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1->num; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, VAR_1->scripts[VAR_3], VAR_4);
  if (VAR_2)
   return VAR_2;
  VAR_4 += VAR_1->scripts[VAR_3]->size;
 }

 return 0;
}
