
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_dma {int lock_cap; TYPE_1__* task; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_3__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*,int ,int,TYPE_1__*,int ) ;
 int FUNC_1 (long) ;
 int FUNC_2 (int *) ;
 struct mm_struct* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct vfio_dma *VAR_1, long VAR_2, bool VAR_3)
{
 struct mm_struct *VAR_4;
 int VAR_5;

 if (!VAR_2)
  return 0;

 VAR_4 = VAR_3 ? FUNC_3(VAR_1->task) : VAR_1->task->mm;
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_2(&VAR_4->mmap_sem);
 if (!VAR_5) {
  VAR_5 = FUNC_0(VAR_4, FUNC_1(VAR_2), VAR_2 > 0, VAR_1->task,
       VAR_1->lock_cap);
  FUNC_5(&VAR_4->mmap_sem);
 }

 if (VAR_3)
  FUNC_4(VAR_4);

 return VAR_5;
}
