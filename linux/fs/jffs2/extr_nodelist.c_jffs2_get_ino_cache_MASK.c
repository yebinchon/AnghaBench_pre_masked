
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct jffs2_sb_info {size_t inocache_hashsize; struct jffs2_inode_cache** inocache_list; } ;
struct jffs2_inode_cache {size_t ino; struct jffs2_inode_cache* next; } ;



struct jffs2_inode_cache *FUNC_0(struct jffs2_sb_info *VAR_0, uint32_t VAR_1)
{
 struct jffs2_inode_cache *VAR_2;

 VAR_2 = VAR_0->inocache_list[VAR_1 % VAR_0->inocache_hashsize];
 while (VAR_2 && VAR_2->ino < VAR_1) {
  VAR_2 = VAR_2->next;
 }

 if (VAR_2 && VAR_2->ino != VAR_1)
  VAR_2 = ((void*)0);

 return VAR_2;
}
