
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gadc_thermal_info {int* lookup_table; int nlookup_table; } ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int FUNC_1(struct gadc_thermal_info *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;

 if (!VAR_0->lookup_table)
  return VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_0->nlookup_table; VAR_7++) {
  if (VAR_1 >= VAR_0->lookup_table[2 * VAR_7 + 1])
   break;
 }

 if (VAR_7 == 0) {
  VAR_2 = VAR_0->lookup_table[0];
 } else if (VAR_7 >= VAR_0->nlookup_table) {
  VAR_2 = VAR_0->lookup_table[2 * (VAR_0->nlookup_table - 1)];
 } else {
  VAR_5 = VAR_0->lookup_table[2 * VAR_7 - 1];
  VAR_6 = VAR_0->lookup_table[2 * VAR_7 + 1];

  VAR_3 = VAR_0->lookup_table[2 * VAR_7 - 2];
  VAR_4 = VAR_0->lookup_table[2 * VAR_7];

  VAR_2 = VAR_3 + FUNC_0(VAR_4 - VAR_3, VAR_1 - VAR_5,
        VAR_6 - VAR_5);
 }

 return VAR_2;
}
