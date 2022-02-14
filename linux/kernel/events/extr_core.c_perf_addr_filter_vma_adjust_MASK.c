
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; struct file* vm_file; } ;
struct perf_addr_filter_range {unsigned long start; void* size; } ;
struct perf_addr_filter {unsigned long offset; unsigned long size; } ;
struct file {int dummy; } ;


 unsigned long VAR_0 ;
 void* FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct perf_addr_filter*,struct file*,unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct perf_addr_filter *VAR_1,
     struct vm_area_struct *VAR_2,
     struct perf_addr_filter_range *VAR_3)
{
 unsigned long VAR_4 = VAR_2->vm_end - VAR_2->vm_start;
 unsigned long VAR_5 = VAR_2->vm_pgoff << VAR_0;
 struct file *VAR_6 = VAR_2->vm_file;

 if (!FUNC_1(VAR_1, VAR_6, VAR_5, VAR_4))
  return 0;

 if (VAR_1->offset < VAR_5) {
  VAR_3->start = VAR_2->vm_start;
  VAR_3->size = FUNC_0(VAR_4, VAR_1->size - (VAR_5 - VAR_1->offset));
 } else {
  VAR_3->start = VAR_2->vm_start + VAR_1->offset - VAR_5;
  VAR_3->size = FUNC_0(VAR_2->vm_end - VAR_3->start, VAR_1->size);
 }

 return 1;
}
