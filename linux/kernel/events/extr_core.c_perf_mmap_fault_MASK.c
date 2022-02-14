
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_fault_t ;
struct vm_fault {int flags; int pgoff; TYPE_3__* page; TYPE_2__* vma; } ;
struct ring_buffer {int dummy; } ;
struct perf_event {int rb; } ;
struct TYPE_7__ {int index; int mapping; } ;
struct TYPE_6__ {TYPE_1__* vm_file; } ;
struct TYPE_5__ {int f_mapping; struct perf_event* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (struct ring_buffer*,int ) ;
 struct ring_buffer* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static vm_fault_t FUNC_5(struct vm_fault *VAR_3)
{
 struct perf_event *VAR_4 = VAR_3->vma->vm_file->private_data;
 struct ring_buffer *VAR_5;
 vm_fault_t VAR_6 = VAR_2;

 if (VAR_3->flags & VAR_0) {
  if (VAR_3->pgoff == 0)
   VAR_6 = 0;
  return VAR_6;
 }

 FUNC_3();
 VAR_5 = FUNC_2(VAR_4->rb);
 if (!VAR_5)
  goto unlock;

 if (VAR_3->pgoff && (VAR_3->flags & VAR_1))
  goto unlock;

 VAR_3->page = FUNC_1(VAR_5, VAR_3->pgoff);
 if (!VAR_3->page)
  goto unlock;

 FUNC_0(VAR_3->page);
 VAR_3->page->mapping = VAR_3->vma->vm_file->f_mapping;
 VAR_3->page->index = VAR_3->pgoff;

 VAR_6 = 0;
unlock:
 FUNC_4();

 return VAR_6;
}
