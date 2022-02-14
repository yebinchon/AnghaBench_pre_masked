
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int inocache_hashsize; struct jffs2_inode_cache** inocache_list; } ;
struct jffs2_inode_cache {int dummy; } ;



__attribute__((used)) static inline struct jffs2_inode_cache *
FUNC_0(int *VAR_0, struct jffs2_sb_info *VAR_1)
{
 for (; *VAR_0 < VAR_1->inocache_hashsize; (*VAR_0)++) {
  if (VAR_1->inocache_list[*VAR_0])
   return VAR_1->inocache_list[*VAR_0];
 }
 return ((void*)0);
}
