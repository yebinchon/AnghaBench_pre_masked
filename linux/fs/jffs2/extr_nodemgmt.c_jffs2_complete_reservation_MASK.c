
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int alloc_sem; int erase_completion_lock; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct jffs2_sb_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct jffs2_sb_info *VAR_0)
{
 FUNC_0(1, "jffs2_complete_reservation()\n");
 FUNC_3(&VAR_0->erase_completion_lock);
 FUNC_1(VAR_0);
 FUNC_4(&VAR_0->erase_completion_lock);
 FUNC_2(&VAR_0->alloc_sem);
}
