
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int erase_wait; int erase_free_sem; int erase_completion_lock; int erase_complete_list; } ;
struct jffs2_eraseblock {int list; int offset; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct jffs2_sb_info*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct jffs2_sb_info *VAR_0, struct jffs2_eraseblock *VAR_1)
{
 FUNC_0(1, "Erase completed successfully at 0x%08x\n", VAR_1->offset);
 FUNC_3(&VAR_0->erase_free_sem);
 FUNC_5(&VAR_0->erase_completion_lock);
 FUNC_2(&VAR_1->list, &VAR_0->erase_complete_list);

 FUNC_1(VAR_0);
 FUNC_6(&VAR_0->erase_completion_lock);
 FUNC_4(&VAR_0->erase_free_sem);
 FUNC_7(&VAR_0->erase_wait);
}
