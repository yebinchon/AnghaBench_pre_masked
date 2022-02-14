
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfn_array {int pa_nr; unsigned long* pa_pfn; int pa_iova; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(
 struct pfn_array *VAR_2,
 unsigned long *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2->pa_nr; VAR_4++)
  VAR_3[VAR_4] = VAR_2->pa_pfn[VAR_4] << VAR_0;


 VAR_3[0] += VAR_2->pa_iova & (VAR_1 - 1);
}
