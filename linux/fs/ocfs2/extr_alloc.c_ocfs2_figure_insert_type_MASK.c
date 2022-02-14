
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_path {int dummy; } ;
struct ocfs2_insert_type {scalar_t__ ins_contig; scalar_t__ ins_contig_index; void* ins_tree_depth; int ins_split; } ;
struct ocfs2_extent_tree {int et_ci; struct ocfs2_extent_list* et_root_el; } ;
struct ocfs2_extent_rec {int e_cpos; } ;
struct ocfs2_extent_list {scalar_t__ l_next_free_rec; scalar_t__ l_count; scalar_t__ l_tree_depth; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {scalar_t__ b_blocknr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ocfs2_extent_tree*) ;
 int FUNC_5 (struct ocfs2_insert_type*,struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;
 int FUNC_6 (struct ocfs2_extent_tree*,struct ocfs2_insert_type*,struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;
 int FUNC_7 (int ,struct ocfs2_path*,int ) ;
 int FUNC_8 (struct ocfs2_path*) ;
 struct ocfs2_path* FUNC_9 (struct ocfs2_extent_tree*) ;
 int FUNC_10 (int ,scalar_t__,struct buffer_head**) ;
 TYPE_1__* FUNC_11 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_12 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_13(struct ocfs2_extent_tree *VAR_4,
        struct buffer_head **VAR_5,
        struct ocfs2_extent_rec *VAR_6,
        int *VAR_7,
        struct ocfs2_insert_type *VAR_8)
{
 int VAR_9;
 struct ocfs2_extent_block *VAR_10;
 struct ocfs2_extent_list *VAR_11;
 struct ocfs2_path *VAR_12 = ((void*)0);
 struct buffer_head *VAR_13 = ((void*)0);

 VAR_8->ins_split = VAR_3;

 VAR_11 = VAR_4->et_root_el;
 VAR_8->ins_tree_depth = FUNC_1(VAR_11->l_tree_depth);

 if (VAR_11->l_tree_depth) {






  VAR_9 = FUNC_10(VAR_4->et_ci,
           FUNC_4(VAR_4),
           &VAR_13);
  if (VAR_9) {
   FUNC_3(VAR_9);
   goto out;
  }
  VAR_10 = (struct ocfs2_extent_block *) VAR_13->b_data;
  VAR_11 = &VAR_10->h_list;
 }
 *VAR_7 = FUNC_1(VAR_11->l_count) -
  FUNC_1(VAR_11->l_next_free_rec);

 if (!VAR_8->ins_tree_depth) {
  FUNC_6(VAR_4, VAR_8, VAR_11, VAR_6);
  FUNC_5(VAR_8, VAR_11, VAR_6);
  return 0;
 }

 VAR_12 = FUNC_9(VAR_4);
 if (!VAR_12) {
  VAR_9 = -VAR_2;
  FUNC_3(VAR_9);
  goto out;
 }







 VAR_9 = FUNC_7(VAR_4->et_ci, VAR_12, FUNC_2(VAR_6->e_cpos));
 if (VAR_9) {
  FUNC_3(VAR_9);
  goto out;
 }

 VAR_11 = FUNC_12(VAR_12);
 FUNC_6(VAR_4, VAR_8, VAR_11, VAR_6);
 if (VAR_8->ins_contig == VAR_0 &&
     VAR_8->ins_contig_index == 0)
  VAR_8->ins_contig = VAR_1;







 if (FUNC_4(VAR_4) ==
     FUNC_11(VAR_12)->b_blocknr) {
  FUNC_5(VAR_8, VAR_11, VAR_6);
 }

out:
 FUNC_8(VAR_12);

 if (VAR_9 == 0)
  *VAR_5 = VAR_13;
 else
  FUNC_0(VAR_13);
 return VAR_9;
}
