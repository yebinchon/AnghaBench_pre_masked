
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct vm_area_struct {int vm_pgoff; void* vm_start; } ;
struct TYPE_7__ {int flags; } ;
struct stack_map_irq_work {TYPE_2__ irq_work; TYPE_1__* sem; } ;
struct bpf_stack_build_id {void* status; void* offset; int build_id; void* ip; } ;
struct TYPE_9__ {TYPE_3__* mm; } ;
struct TYPE_6__ {int dep_map; } ;
struct TYPE_8__ {TYPE_1__ mmap_sem; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct vm_area_struct* FUNC_1 (TYPE_3__*,void*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,int,int ) ;
 scalar_t__ FUNC_6 (struct vm_area_struct*,int ) ;
 struct stack_map_irq_work* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_9(struct bpf_stack_build_id *VAR_8,
       u64 *VAR_9, u32 VAR_10, bool VAR_11)
{
 int VAR_12;
 struct vm_area_struct *VAR_13;
 bool VAR_14 = 0;
 struct stack_map_irq_work *VAR_15 = ((void*)0);

 if (FUNC_2()) {
  VAR_15 = FUNC_7(&VAR_7);
  if (VAR_15->irq_work.flags & VAR_3)

   VAR_14 = 1;
 }
 if (!VAR_11 || !VAR_6 || !VAR_6->mm || VAR_14 ||
     FUNC_0(&VAR_6->mm->mmap_sem) == 0) {

  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
   VAR_8[VAR_12].status = VAR_1;
   VAR_8[VAR_12].ip = VAR_9[VAR_12];
   FUNC_4(VAR_8[VAR_12].build_id, 0, VAR_0);
  }
  return;
 }

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_13 = FUNC_1(VAR_6->mm, VAR_9[VAR_12]);
  if (!VAR_13 || FUNC_6(VAR_13, VAR_8[VAR_12].build_id)) {

   VAR_8[VAR_12].status = VAR_1;
   VAR_8[VAR_12].ip = VAR_9[VAR_12];
   FUNC_4(VAR_8[VAR_12].build_id, 0, VAR_0);
   continue;
  }
  VAR_8[VAR_12].offset = (VAR_13->vm_pgoff << VAR_4) + VAR_9[VAR_12]
   - VAR_13->vm_start;
  VAR_8[VAR_12].status = VAR_2;
 }

 if (!VAR_15) {
  FUNC_8(&VAR_6->mm->mmap_sem);
 } else {
  VAR_15->sem = &VAR_6->mm->mmap_sem;
  FUNC_3(&VAR_15->irq_work);





  FUNC_5(&VAR_6->mm->mmap_sem.dep_map, 1, VAR_5);
 }
}
