
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hw_reg_map {int regblk; int mask; int num_ranges; TYPE_1__* range; } ;
struct TYPE_2__ {int start; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hw_reg_map* VAR_2 ;

bool FUNC_0(int VAR_3, int VAR_4, u64 VAR_5)
{
 int VAR_6;
 struct hw_reg_map *VAR_7;


 if (VAR_5 & 0x07)
  return 0;

 if (VAR_3 == VAR_1) {
  if (VAR_4 >= VAR_0)
   return 0;
  VAR_7 = &VAR_2[VAR_4];
 } else {
  return 0;
 }


 if (VAR_7->regblk != VAR_4)
  return 0;

 VAR_5 &= VAR_7->mask;

 for (VAR_6 = 0; VAR_6 < VAR_7->num_ranges; VAR_6++) {
  if (VAR_5 >= VAR_7->range[VAR_6].start &&
      VAR_5 < VAR_7->range[VAR_6].end)
   return 1;
 }
 return 0;
}
