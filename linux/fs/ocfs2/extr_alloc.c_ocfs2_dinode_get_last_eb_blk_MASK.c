
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_extent_tree {int * et_ops; struct ocfs2_dinode* et_object; } ;
struct ocfs2_dinode {int i_last_eb_blk; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static u64 FUNC_2(struct ocfs2_extent_tree *VAR_1)
{
 struct ocfs2_dinode *VAR_2 = VAR_1->et_object;

 FUNC_0(VAR_1->et_ops != &VAR_0);
 return FUNC_1(VAR_2->i_last_eb_blk);
}
