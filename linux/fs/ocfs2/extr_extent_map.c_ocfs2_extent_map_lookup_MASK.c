
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {int ip_lock; int ip_extent_map; } ;
struct ocfs2_extent_map_item {unsigned int ei_cpos; unsigned int ei_phys; unsigned int ei_clusters; unsigned int ei_flags; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,unsigned int,struct ocfs2_extent_map_item**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, unsigned int VAR_2,
       unsigned int *VAR_3, unsigned int *VAR_4,
       unsigned int *VAR_5)
{
 unsigned int VAR_6;
 struct ocfs2_inode_info *VAR_7 = FUNC_0(VAR_1);
 struct ocfs2_extent_map_item *VAR_8;

 FUNC_2(&VAR_7->ip_lock);

 FUNC_1(&VAR_7->ip_extent_map, VAR_2, &VAR_8);
 if (VAR_8) {
  VAR_6 = VAR_2 - VAR_8->ei_cpos;
  *VAR_3 = VAR_8->ei_phys + VAR_6;
  if (VAR_4)
   *VAR_4 = VAR_8->ei_clusters - VAR_6;
  if (VAR_5)
   *VAR_5 = VAR_8->ei_flags;
 }

 FUNC_3(&VAR_7->ip_lock);

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 return 0;
}
