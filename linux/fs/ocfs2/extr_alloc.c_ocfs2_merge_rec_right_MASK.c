
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ocfs2_path {TYPE_1__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_leaf_clusters; int e_blkno; int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; int l_count; } ;
struct buffer_head {int dummy; } ;
struct TYPE_9__ {int h_buffer_credits; } ;
typedef TYPE_2__ handle_t ;
struct TYPE_8__ {struct buffer_head* bh; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_extent_list*,int) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (TYPE_2__*,struct ocfs2_path*,struct ocfs2_path*,int) ;
 int FUNC_10 (TYPE_2__*,int,int ,struct ocfs2_path*) ;
 int FUNC_11 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*) ;
 int FUNC_12 (struct ocfs2_path*) ;
 int FUNC_13 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path**) ;
 scalar_t__ FUNC_14 (struct ocfs2_extent_rec*) ;
 int FUNC_15 (TYPE_2__*,struct buffer_head*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_2__*,int ,struct ocfs2_path*,int) ;
 struct buffer_head* FUNC_18 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_19 (struct ocfs2_path*) ;
 int FUNC_20 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_21(struct ocfs2_path *VAR_0,
     handle_t *VAR_1,
     struct ocfs2_extent_tree *VAR_2,
     struct ocfs2_extent_rec *VAR_3,
     int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8 = FUNC_2(VAR_3->e_leaf_clusters);
 struct ocfs2_extent_rec *VAR_9;
 struct ocfs2_extent_rec *VAR_10;
 struct ocfs2_extent_list *VAR_11;
 struct ocfs2_path *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 struct ocfs2_extent_list *VAR_14 = FUNC_19(VAR_0);
 struct buffer_head *VAR_15 = FUNC_18(VAR_0);
 struct buffer_head *VAR_16 = ((void*)0);

 FUNC_0(VAR_4 >= FUNC_2(VAR_14->l_next_free_rec));
 VAR_9 = &VAR_14->l_recs[VAR_4];

 if (VAR_4 == FUNC_2(VAR_14->l_next_free_rec) - 1 &&
     FUNC_2(VAR_14->l_next_free_rec) == FUNC_2(VAR_14->l_count)) {

  VAR_5 = FUNC_13(VAR_2, VAR_0, &VAR_12);
  if (VAR_5) {
   FUNC_6(VAR_5);
   return VAR_5;
  }

  VAR_11 = FUNC_19(VAR_12);
  VAR_6 = FUNC_2(VAR_11->l_next_free_rec);
  FUNC_0(VAR_6 <= 0);
  VAR_10 = &VAR_11->l_recs[0];
  if (FUNC_14(VAR_10)) {
   FUNC_0(VAR_6 <= 1);
   VAR_10 = &VAR_11->l_recs[1];
  }

  FUNC_0(FUNC_4(VAR_9->e_cpos) +
         FUNC_2(VAR_9->e_leaf_clusters) !=
         FUNC_4(VAR_10->e_cpos));

  VAR_13 = FUNC_11(VAR_2, VAR_0,
       VAR_12);

  VAR_5 = FUNC_10(VAR_1, VAR_13,
            VAR_1->h_buffer_credits,
            VAR_12);
  if (VAR_5) {
   FUNC_6(VAR_5);
   goto out;
  }

  VAR_16 = VAR_0->p_node[VAR_13].bh;
  FUNC_0(VAR_16 != VAR_12->p_node[VAR_13].bh);

  VAR_5 = FUNC_17(VAR_1, VAR_2->et_ci, VAR_12,
         VAR_13);
  if (VAR_5) {
   FUNC_6(VAR_5);
   goto out;
  }

  for (VAR_7 = VAR_13 + 1;
       VAR_7 < FUNC_20(VAR_12); VAR_7++) {
   VAR_5 = FUNC_17(VAR_1, VAR_2->et_ci,
          VAR_12, VAR_7);
   if (VAR_5) {
    FUNC_6(VAR_5);
    goto out;
   }

   VAR_5 = FUNC_17(VAR_1, VAR_2->et_ci,
          VAR_0, VAR_7);
   if (VAR_5) {
    FUNC_6(VAR_5);
    goto out;
   }
  }

 } else {
  FUNC_0(VAR_4 == FUNC_2(VAR_14->l_next_free_rec) - 1);
  VAR_10 = &VAR_14->l_recs[VAR_4 + 1];
 }

 VAR_5 = FUNC_17(VAR_1, VAR_2->et_ci, VAR_0,
        FUNC_20(VAR_0) - 1);
 if (VAR_5) {
  FUNC_6(VAR_5);
  goto out;
 }

 FUNC_1(&VAR_9->e_leaf_clusters, -VAR_8);

 FUNC_3(&VAR_10->e_cpos, -VAR_8);
 FUNC_5(&VAR_10->e_blkno,
       -FUNC_8(FUNC_16(VAR_2->et_ci),
            VAR_8));
 FUNC_1(&VAR_10->e_leaf_clusters, VAR_8);

 FUNC_7(VAR_14, VAR_4);

 FUNC_15(VAR_1, VAR_15);
 if (VAR_12) {
  FUNC_15(VAR_1, FUNC_18(VAR_12));
  FUNC_9(VAR_1, VAR_0, VAR_12,
        VAR_13);
 }
out:
 FUNC_12(VAR_12);
 return VAR_5;
}
