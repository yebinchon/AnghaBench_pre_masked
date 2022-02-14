
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_extent_tree {int et_ci; struct ocfs2_extent_list* et_root_el; } ;
struct ocfs2_extent_list {scalar_t__ l_tree_depth; int l_next_free_rec; int l_count; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ocfs2_extent_tree*) ;
 int FUNC_5 (int ,scalar_t__,struct buffer_head**) ;
 int FUNC_6 (int) ;

int FUNC_7(struct ocfs2_extent_tree *VAR_0)
{
 int VAR_1;
 struct ocfs2_extent_list *VAR_2 = ((void*)0);
 struct ocfs2_extent_block *VAR_3;
 struct buffer_head *VAR_4 = ((void*)0);
 u64 VAR_5 = 0;

 VAR_2 = VAR_0->et_root_el;
 VAR_5 = FUNC_4(VAR_0);

 if (VAR_5) {
  VAR_1 = FUNC_5(VAR_0->et_ci, VAR_5,
       &VAR_4);
  if (VAR_1 < 0) {
   FUNC_3(VAR_1);
   goto bail;
  }
  VAR_3 = (struct ocfs2_extent_block *) VAR_4->b_data;
  VAR_2 = &VAR_3->h_list;
 }

 FUNC_0(VAR_2->l_tree_depth != 0);

 VAR_1 = FUNC_2(VAR_2->l_count) - FUNC_2(VAR_2->l_next_free_rec);
bail:
 FUNC_1(VAR_4);

 FUNC_6(VAR_1);
 return VAR_1;
}
