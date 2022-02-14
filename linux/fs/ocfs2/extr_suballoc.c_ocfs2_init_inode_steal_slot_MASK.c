
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int s_num_inodes_stolen; int osb_lock; int s_inode_steal_slot; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_super *VAR_1)
{
 FUNC_1(&VAR_1->osb_lock);
 VAR_1->s_inode_steal_slot = VAR_0;
 FUNC_2(&VAR_1->osb_lock);
 FUNC_0(&VAR_1->s_num_inodes_stolen, 0);
}
