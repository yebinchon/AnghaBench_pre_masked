
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_tree {struct ocfs2_extent_list* et_root_el; int et_ci; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {int * l_recs; scalar_t__ l_next_free_rec; scalar_t__ l_tree_depth; } ;
struct ocfs2_extent_block {int h_blkno; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_extent_tree*) ;
 int FUNC_4 (struct ocfs2_extent_tree*,int ) ;
 int FUNC_5 (int ,struct ocfs2_path*,scalar_t__*) ;
 int FUNC_6 (int ,struct ocfs2_path*,scalar_t__) ;
 int FUNC_7 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*) ;
 int FUNC_8 (struct ocfs2_path*) ;
 int FUNC_9 (int ,int *,struct ocfs2_path*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;
 struct ocfs2_path* FUNC_12 (struct ocfs2_path*) ;
 int FUNC_13 (int *,struct ocfs2_extent_tree*,struct ocfs2_cached_dealloc_ctxt*,struct ocfs2_path*,int) ;
 int FUNC_14 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*,int,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_15 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*) ;
 TYPE_1__* FUNC_16 (struct ocfs2_path*) ;
 int FUNC_17 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_18(handle_t *VAR_1,
    struct ocfs2_extent_tree *VAR_2,
    struct ocfs2_path *VAR_3,
    struct ocfs2_cached_dealloc_ctxt *VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7;
 struct ocfs2_path *VAR_8 = ((void*)0);
 struct ocfs2_extent_block *VAR_9;
 struct ocfs2_extent_list *VAR_10;

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_9(VAR_2->et_ci, VAR_1, VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_5);
  goto out;
 }

 VAR_5 = FUNC_5(FUNC_11(VAR_2->et_ci),
         VAR_3, &VAR_7);
 if (VAR_5) {
  FUNC_2(VAR_5);
  goto out;
 }

 if (VAR_7) {




  VAR_8 = FUNC_12(VAR_3);
  if (!VAR_8) {
   VAR_5 = -VAR_0;
   FUNC_2(VAR_5);
   goto out;
  }

  VAR_5 = FUNC_6(VAR_2->et_ci, VAR_8, VAR_7);
  if (VAR_5) {
   FUNC_2(VAR_5);
   goto out;
  }

  VAR_5 = FUNC_9(VAR_2->et_ci, VAR_1, VAR_8);
  if (VAR_5) {
   FUNC_2(VAR_5);
   goto out;
  }

  VAR_6 = FUNC_7(VAR_2, VAR_8, VAR_3);

  FUNC_14(VAR_1, VAR_2, VAR_8, VAR_3,
         VAR_6, VAR_4);
  VAR_5 = FUNC_15(VAR_1, VAR_2, VAR_8);
  if (VAR_5) {
   FUNC_2(VAR_5);
   goto out;
  }

  VAR_9 = (struct ocfs2_extent_block *)FUNC_16(VAR_8)->b_data;
  FUNC_4(VAR_2, FUNC_0(VAR_9->h_blkno));
 } else {







  FUNC_13(VAR_1, VAR_2, VAR_4, VAR_3, 1);

  VAR_10 = VAR_2->et_root_el;
  VAR_10->l_tree_depth = 0;
  VAR_10->l_next_free_rec = 0;
  FUNC_1(&VAR_10->l_recs[0], 0, sizeof(struct ocfs2_extent_rec));

  FUNC_4(VAR_2, 0);
 }

 FUNC_10(VAR_1, FUNC_17(VAR_3));

out:
 FUNC_8(VAR_8);
 return VAR_5;
}
