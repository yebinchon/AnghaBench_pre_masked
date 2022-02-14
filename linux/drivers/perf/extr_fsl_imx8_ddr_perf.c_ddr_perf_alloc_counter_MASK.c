
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ddr_pmu {int ** events; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct ddr_pmu *VAR_4, int VAR_5)
{
 int VAR_6;






 if (VAR_5 == VAR_2) {
  if (VAR_4->events[VAR_1] == ((void*)0))
   return VAR_1;
  else
   return -VAR_0;
 }

 for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_4->events[VAR_6] == ((void*)0))
   return VAR_6;
 }

 return -VAR_0;
}
