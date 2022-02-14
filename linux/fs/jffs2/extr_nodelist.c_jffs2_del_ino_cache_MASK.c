
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {size_t inocache_hashsize; int inocache_lock; struct jffs2_inode_cache** inocache_list; } ;
struct jffs2_inode_cache {size_t ino; scalar_t__ state; struct jffs2_inode_cache* next; int xref; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,struct jffs2_inode_cache*,size_t) ;
 int FUNC_2 (struct jffs2_inode_cache*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct jffs2_sb_info *VAR_2, struct jffs2_inode_cache *VAR_3)
{
 struct jffs2_inode_cache **VAR_4;




 FUNC_1("del %p (ino #%u)\n", VAR_3, VAR_3->ino);
 FUNC_3(&VAR_2->inocache_lock);

 VAR_4 = &VAR_2->inocache_list[VAR_3->ino % VAR_2->inocache_hashsize];

 while ((*VAR_4) && (*VAR_4)->ino < VAR_3->ino) {
  VAR_4 = &(*VAR_4)->next;
 }
 if ((*VAR_4) == VAR_3) {
  *VAR_4 = VAR_3->next;
 }






 if (VAR_3->state != VAR_1 && VAR_3->state != VAR_0)
  FUNC_2(VAR_3);

 FUNC_4(&VAR_2->inocache_lock);
}
