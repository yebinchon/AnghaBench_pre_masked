
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int erase_completion_lock; } ;
struct jffs2_eraseblock {int dummy; } ;


 int FUNC_0 (struct jffs2_sb_info*,struct jffs2_eraseblock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct jffs2_sb_info *VAR_0,
         struct jffs2_eraseblock *VAR_1)
{
 FUNC_1(&VAR_0->erase_completion_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->erase_completion_lock);
}
