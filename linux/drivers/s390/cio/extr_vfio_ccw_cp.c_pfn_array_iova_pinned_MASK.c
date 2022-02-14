
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfn_array {int pa_nr; unsigned long* pa_iova_pfn; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct pfn_array *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_2 >> VAR_0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->pa_nr; VAR_4++)
  if (VAR_1->pa_iova_pfn[VAR_4] == VAR_3)
   return 1;

 return 0;
}
