
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int s_inode_steal_slot; int s_meta_steal_slot; int osb_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_super *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_2;

 FUNC_0(&VAR_3->osb_lock);
 if (VAR_4 == VAR_1)
  VAR_5 = VAR_3->s_inode_steal_slot;
 else if (VAR_4 == VAR_0)
  VAR_5 = VAR_3->s_meta_steal_slot;
 FUNC_1(&VAR_3->osb_lock);

 return VAR_5;
}
