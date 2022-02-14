
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct proc_maps_private* private; } ;
struct proc_maps_private {int * task; TYPE_1__* mm; } ;
struct TYPE_2__ {int mmap_sem; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct proc_maps_private *VAR_2 = VAR_0->private;

 if (!FUNC_0(VAR_1)) {
  FUNC_3(&VAR_2->mm->mmap_sem);
  FUNC_1(VAR_2->mm);
 }
 if (VAR_2->task) {
  FUNC_2(VAR_2->task);
  VAR_2->task = ((void*)0);
 }
}
