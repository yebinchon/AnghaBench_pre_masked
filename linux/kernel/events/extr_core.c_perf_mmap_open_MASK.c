
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int vm_mm; scalar_t__ vm_pgoff; TYPE_2__* vm_file; } ;
struct perf_event {TYPE_1__* pmu; TYPE_3__* rb; int mmap_count; } ;
struct TYPE_6__ {int aux_mmap_count; int mmap_count; } ;
struct TYPE_5__ {struct perf_event* private_data; } ;
struct TYPE_4__ {int (* event_mapped ) (struct perf_event*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct perf_event*,int ) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_0)
{
 struct perf_event *VAR_1 = VAR_0->vm_file->private_data;

 FUNC_0(&VAR_1->mmap_count);
 FUNC_0(&VAR_1->rb->mmap_count);

 if (VAR_0->vm_pgoff)
  FUNC_0(&VAR_1->rb->aux_mmap_count);

 if (VAR_1->pmu->event_mapped)
  VAR_1->pmu->event_mapped(VAR_1, VAR_0->vm_mm);
}
