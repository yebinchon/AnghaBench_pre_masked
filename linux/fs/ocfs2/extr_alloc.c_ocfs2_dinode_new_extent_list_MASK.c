
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l_count; scalar_t__ l_next_free_rec; scalar_t__ l_tree_depth; } ;
struct TYPE_4__ {TYPE_1__ i_list; } ;
struct ocfs2_dinode {TYPE_2__ id2; } ;
struct inode {int i_sb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ocfs2_dinode*) ;
 int FUNC_2 (struct inode*,struct ocfs2_dinode*) ;

void FUNC_3(struct inode *VAR_0,
      struct ocfs2_dinode *VAR_1)
{
 FUNC_2(VAR_0, VAR_1);
 VAR_1->id2.i_list.l_tree_depth = 0;
 VAR_1->id2.i_list.l_next_free_rec = 0;
 VAR_1->id2.i_list.l_count = FUNC_0(
  FUNC_1(VAR_0->i_sb, VAR_1));
}
