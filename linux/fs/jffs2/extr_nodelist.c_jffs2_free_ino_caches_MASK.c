
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int inocache_hashsize; struct jffs2_inode_cache** inocache_list; } ;
struct jffs2_inode_cache {struct jffs2_inode_cache* next; } ;


 int FUNC_0 (struct jffs2_inode_cache*) ;
 int FUNC_1 (struct jffs2_sb_info*,struct jffs2_inode_cache*) ;

void FUNC_2(struct jffs2_sb_info *VAR_0)
{
 int VAR_1;
 struct jffs2_inode_cache *VAR_2, *VAR_3;

 for (VAR_1=0; VAR_1 < VAR_0->inocache_hashsize; VAR_1++) {
  VAR_2 = VAR_0->inocache_list[VAR_1];
  while (VAR_2) {
   VAR_3 = VAR_2->next;
   FUNC_1(VAR_0, VAR_2);
   FUNC_0(VAR_2);
   VAR_2 = VAR_3;
  }
  VAR_0->inocache_list[VAR_1] = ((void*)0);
 }
}
