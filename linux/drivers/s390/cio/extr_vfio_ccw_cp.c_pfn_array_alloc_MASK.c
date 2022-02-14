
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct pfn_array {unsigned int pa_nr; unsigned int* pa_iova_pfn; unsigned int pa_iova; unsigned int* pa_pfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int* FUNC_0 (unsigned int,int,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct pfn_array *VAR_6, u64 VAR_7, unsigned int VAR_8)
{
 int VAR_9;

 if (VAR_6->pa_nr || VAR_6->pa_iova_pfn)
  return -VAR_0;

 VAR_6->pa_iova = VAR_7;

 VAR_6->pa_nr = ((VAR_7 & ~VAR_3) + VAR_8 + (VAR_5 - 1)) >> VAR_4;
 if (!VAR_6->pa_nr)
  return -VAR_0;

 VAR_6->pa_iova_pfn = FUNC_0(VAR_6->pa_nr,
      sizeof(*VAR_6->pa_iova_pfn) +
      sizeof(*VAR_6->pa_pfn),
      VAR_2);
 if (FUNC_1(!VAR_6->pa_iova_pfn)) {
  VAR_6->pa_nr = 0;
  return -VAR_1;
 }
 VAR_6->pa_pfn = VAR_6->pa_iova_pfn + VAR_6->pa_nr;

 VAR_6->pa_iova_pfn[0] = VAR_6->pa_iova >> VAR_4;
 VAR_6->pa_pfn[0] = -1ULL;
 for (VAR_9 = 1; VAR_9 < VAR_6->pa_nr; VAR_9++) {
  VAR_6->pa_iova_pfn[VAR_9] = VAR_6->pa_iova_pfn[VAR_9 - 1] + 1;
  VAR_6->pa_pfn[VAR_9] = -1ULL;
 }

 return 0;
}
