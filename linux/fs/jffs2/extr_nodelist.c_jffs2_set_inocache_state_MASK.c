
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int inocache_lock; int inocache_wq; } ;
struct jffs2_inode_cache {int state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct jffs2_sb_info *VAR_0, struct jffs2_inode_cache *VAR_1, int VAR_2)
{
 FUNC_0(&VAR_0->inocache_lock);
 VAR_1->state = VAR_2;
 FUNC_2(&VAR_0->inocache_wq);
 FUNC_1(&VAR_0->inocache_lock);
}
