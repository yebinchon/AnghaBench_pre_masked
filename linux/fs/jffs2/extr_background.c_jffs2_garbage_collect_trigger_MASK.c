
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {scalar_t__ gc_task; int erase_completion_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct jffs2_sb_info*) ;
 int FUNC_2 (int ,scalar_t__,int) ;

void FUNC_3(struct jffs2_sb_info *VAR_1)
{
 FUNC_0(&VAR_1->erase_completion_lock);
 if (VAR_1->gc_task && FUNC_1(VAR_1))
  FUNC_2(VAR_0, VAR_1->gc_task, 1);
}
