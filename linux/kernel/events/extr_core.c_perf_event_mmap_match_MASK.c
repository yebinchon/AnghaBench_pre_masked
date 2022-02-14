
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; } ;
struct perf_mmap_event {struct vm_area_struct* vma; } ;
struct TYPE_2__ {scalar_t__ mmap2; scalar_t__ mmap; scalar_t__ mmap_data; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct perf_event *VAR_1,
     void *VAR_2)
{
 struct perf_mmap_event *VAR_3 = VAR_2;
 struct vm_area_struct *VAR_4 = VAR_3->vma;
 int VAR_5 = VAR_4->vm_flags & VAR_0;

 return (!VAR_5 && VAR_1->attr.mmap_data) ||
        (VAR_5 && (VAR_1->attr.mmap || VAR_1->attr.mmap2));
}
