
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_file; struct vm_area_struct* vm_next; } ;
struct perf_addr_filter_range {int dummy; } ;
struct perf_addr_filter {int dummy; } ;
struct mm_struct {struct vm_area_struct* mmap; } ;


 scalar_t__ FUNC_0 (struct perf_addr_filter*,struct vm_area_struct*,struct perf_addr_filter_range*) ;

__attribute__((used)) static void FUNC_1(struct perf_addr_filter *VAR_0,
       struct mm_struct *VAR_1,
       struct perf_addr_filter_range *VAR_2)
{
 struct vm_area_struct *VAR_3;

 for (VAR_3 = VAR_1->mmap; VAR_3; VAR_3 = VAR_3->vm_next) {
  if (!VAR_3->vm_file)
   continue;

  if (FUNC_0(VAR_0, VAR_3, VAR_2))
   return;
 }
}
