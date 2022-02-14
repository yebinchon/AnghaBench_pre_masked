
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ocfs2_path {scalar_t__ p_tree_depth; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_list {int l_next_free_rec; int * l_recs; } ;
struct ocfs2_extent_block {scalar_t__ h_next_leaf_blk; int h_blkno; struct ocfs2_extent_list h_list; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct TYPE_7__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;
struct TYPE_8__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct ocfs2_extent_tree*,int,struct ocfs2_path*,struct ocfs2_cached_dealloc_ctxt*,struct ocfs2_path**) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_5 (struct ocfs2_path*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_10 (TYPE_1__*,struct ocfs2_extent_tree*,struct ocfs2_path*) ;
 TYPE_2__* FUNC_11 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_12 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_13(handle_t *VAR_1,
      struct ocfs2_extent_tree *VAR_2,
      struct ocfs2_path *VAR_3,
      struct ocfs2_cached_dealloc_ctxt *VAR_4)
{
 int VAR_5, VAR_6 = VAR_1->h_buffer_credits;
 struct ocfs2_path *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 struct ocfs2_extent_block *VAR_9;
 struct ocfs2_extent_list *VAR_10;

 VAR_10 = FUNC_12(VAR_3);
 if (!FUNC_6(&VAR_10->l_recs[0]))
  return 0;

 if (VAR_3->p_tree_depth == 0) {
rightmost_no_delete:




  VAR_5 = FUNC_10(VAR_1, VAR_2, VAR_3);
  if (VAR_5)
   FUNC_3(VAR_5);
  goto out;
 }
 VAR_9 = (struct ocfs2_extent_block *)FUNC_11(VAR_3)->b_data;
 VAR_10 = &VAR_9->h_list;
 if (VAR_9->h_next_leaf_blk == 0) {





  if (FUNC_1(VAR_10->l_next_free_rec) > 1)
   goto rightmost_no_delete;

  if (FUNC_1(VAR_10->l_next_free_rec) == 0) {
   VAR_5 = FUNC_4(FUNC_7(VAR_2->et_ci),
     "Owner %llu has empty extent block at %llu\n",
     (unsigned long long)FUNC_8(VAR_2->et_ci),
     (unsigned long long)FUNC_2(VAR_9->h_blkno));
   goto out;
  }
  VAR_5 = FUNC_9(VAR_1, VAR_2, VAR_3,
        VAR_4);
  if (VAR_5)
   FUNC_3(VAR_5);
  goto out;
 }





try_rotate:
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_6, VAR_3,
           VAR_4, &VAR_8);
 if (VAR_5 && VAR_5 != -VAR_0) {
  FUNC_3(VAR_5);
  goto out;
 }

 while (VAR_5 == -VAR_0) {
  VAR_7 = VAR_8;
  VAR_8 = ((void*)0);

  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_6,
            VAR_7, VAR_4,
            &VAR_8);
  if (VAR_5 && VAR_5 != -VAR_0) {
   FUNC_3(VAR_5);
   goto out;
  }

  FUNC_5(VAR_7);
  VAR_7 = ((void*)0);

  if (VAR_5 == 0)
   goto try_rotate;
 }

out:
 FUNC_5(VAR_7);
 FUNC_5(VAR_8);
 return VAR_5;
}
