
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {struct f2fs_gc_kthread* gc_thread; } ;
struct f2fs_gc_kthread {int f2fs_gc_task; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct f2fs_gc_kthread*) ;

void FUNC_2(struct f2fs_sb_info *VAR_0)
{
 struct f2fs_gc_kthread *VAR_1 = VAR_0->gc_thread;
 if (!VAR_1)
  return;
 FUNC_0(VAR_1->f2fs_gc_task);
 FUNC_1(VAR_1);
 VAR_0->gc_thread = ((void*)0);
}
