
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int fsync_node_lock; scalar_t__ fsync_seg_id; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct f2fs_sb_info *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->fsync_node_lock, VAR_1);
 VAR_0->fsync_seg_id = 0;
 FUNC_1(&VAR_0->fsync_node_lock, VAR_1);
}
