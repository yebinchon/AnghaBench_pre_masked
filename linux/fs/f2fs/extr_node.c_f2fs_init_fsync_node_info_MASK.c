
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {scalar_t__ fsync_node_num; scalar_t__ fsync_seg_id; int fsync_node_list; int fsync_node_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct f2fs_sb_info *VAR_0)
{
 FUNC_1(&VAR_0->fsync_node_lock);
 FUNC_0(&VAR_0->fsync_node_list);
 VAR_0->fsync_seg_id = 0;
 VAR_0->fsync_node_num = 0;
}
