
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int s_inode_steal_slot; int s_meta_steal_slot; int osb_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_super *VAR_2, int VAR_3, int VAR_4)
{
 FUNC_0(&VAR_2->osb_lock);
 if (VAR_4 == VAR_1)
  VAR_2->s_inode_steal_slot = VAR_3;
 else if (VAR_4 == VAR_0)
  VAR_2->s_meta_steal_slot = VAR_3;
 FUNC_1(&VAR_2->osb_lock);
}
