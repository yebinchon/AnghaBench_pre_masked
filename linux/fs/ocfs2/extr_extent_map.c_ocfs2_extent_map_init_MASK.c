
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int em_list; scalar_t__ em_num_items; } ;
struct ocfs2_inode_info {TYPE_1__ ip_extent_map; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *) ;
 struct ocfs2_inode_info* FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_0)
{
 struct ocfs2_inode_info *VAR_1 = FUNC_1(VAR_0);

 VAR_1->ip_extent_map.em_num_items = 0;
 FUNC_0(&VAR_1->ip_extent_map.em_list);
}
