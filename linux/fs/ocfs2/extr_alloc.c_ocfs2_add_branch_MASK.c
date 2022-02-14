
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_extent_tree {struct buffer_head* et_root_bh; int et_ci; struct ocfs2_extent_list* et_root_el; } ;
struct ocfs2_extent_list {void* l_next_free_rec; TYPE_1__* l_recs; void* l_tree_depth; } ;
struct ocfs2_extent_block {void* h_next_leaf_blk; int h_blkno; struct ocfs2_extent_list h_list; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {void* e_int_clusters; void* e_cpos; void* e_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ocfs2_extent_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct buffer_head*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct buffer_head*) ;
 struct buffer_head** FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct buffer_head**) ;
 int FUNC_9 (void**,int) ;
 int FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *,struct ocfs2_extent_tree*) ;
 int FUNC_14 (int *,struct ocfs2_extent_tree*,int,struct ocfs2_alloc_context*,struct buffer_head**) ;
 int FUNC_15 (int *,struct ocfs2_extent_tree*,int ) ;
 int FUNC_16 (struct ocfs2_extent_tree*,scalar_t__) ;
 int FUNC_17 (struct ocfs2_extent_tree*) ;
 int FUNC_18 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_19 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int *,struct ocfs2_extent_tree*,struct buffer_head**,int,int*) ;
 scalar_t__ FUNC_22 (struct ocfs2_extent_list*) ;
 int FUNC_23 (unsigned long long,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_24(handle_t *VAR_4,
       struct ocfs2_extent_tree *VAR_5,
       struct buffer_head *VAR_6,
       struct buffer_head **VAR_7,
       struct ocfs2_alloc_context *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 u64 VAR_13, VAR_14;
 struct buffer_head *VAR_15;
 struct buffer_head **VAR_16 = ((void*)0);
 struct ocfs2_extent_block *VAR_17;
 struct ocfs2_extent_list *VAR_18;
 struct ocfs2_extent_list *VAR_19;
 u32 VAR_20, VAR_21;

 FUNC_0(!VAR_7 || !*VAR_7);

 if (VAR_6) {
  VAR_17 = (struct ocfs2_extent_block *) VAR_6->b_data;
  VAR_19 = &VAR_17->h_list;
 } else
  VAR_19 = VAR_5->et_root_el;


 FUNC_0(!VAR_19->l_tree_depth);

 VAR_10 = FUNC_10(VAR_19->l_tree_depth);

 VAR_17 = (struct ocfs2_extent_block *)(*VAR_7)->b_data;
 VAR_20 = FUNC_22(&VAR_17->h_list);
 VAR_21 = FUNC_22(VAR_5->et_root_el);
 if (VAR_21 > VAR_20) {
  FUNC_23(
   (unsigned long long)
   FUNC_20(VAR_5->et_ci),
   VAR_21, VAR_20);

  VAR_9 = FUNC_13(VAR_4, VAR_5);
  if (VAR_9) {
   FUNC_12(VAR_9);
   goto bail;
  }
 }


 VAR_16 = FUNC_7(VAR_10, sizeof(struct buffer_head *),
        VAR_1);
 if (!VAR_16) {
  VAR_9 = -VAR_0;
  FUNC_12(VAR_9);
  goto bail;
 }




 if (!FUNC_17(VAR_5)) {
  VAR_9 = FUNC_21(VAR_4, VAR_5,
            VAR_16, VAR_10,
            &VAR_12);
  if (VAR_9 < 0) {
   FUNC_12(VAR_9);
   goto bail;
  }
 }

 FUNC_0(VAR_12 > VAR_10);

 if (VAR_12 < VAR_10) {
  FUNC_0(!VAR_8);
  VAR_9 = FUNC_14(VAR_4, VAR_5,
         VAR_10 - VAR_12,
         VAR_8,
         &VAR_16[VAR_12]);
  if (VAR_9 < 0) {
   FUNC_12(VAR_9);
   goto bail;
  }
 }
 VAR_13 = VAR_14 = 0;
 for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_15 = VAR_16[VAR_11];
  VAR_17 = (struct ocfs2_extent_block *) VAR_15->b_data;

  FUNC_0(!FUNC_1(VAR_17));
  VAR_18 = &VAR_17->h_list;

  VAR_9 = FUNC_18(VAR_4, VAR_5->et_ci, VAR_15,
       VAR_2);
  if (VAR_9 < 0) {
   FUNC_12(VAR_9);
   goto bail;
  }

  VAR_17->h_next_leaf_blk = 0;
  VAR_18->l_tree_depth = FUNC_3(VAR_11);
  VAR_18->l_next_free_rec = FUNC_3(1);




  VAR_18->l_recs[0].e_cpos = FUNC_4(VAR_20);
  VAR_18->l_recs[0].e_blkno = FUNC_5(VAR_13);





  VAR_18->l_recs[0].e_int_clusters = FUNC_4(0);
  if (!VAR_18->l_tree_depth)
   VAR_14 = FUNC_11(VAR_17->h_blkno);

  FUNC_19(VAR_4, VAR_15);
  VAR_13 = FUNC_11(VAR_17->h_blkno);
 }







 VAR_9 = FUNC_18(VAR_4, VAR_5->et_ci, *VAR_7,
      VAR_3);
 if (VAR_9 < 0) {
  FUNC_12(VAR_9);
  goto bail;
 }
 VAR_9 = FUNC_15(VAR_4, VAR_5,
           VAR_3);
 if (VAR_9 < 0) {
  FUNC_12(VAR_9);
  goto bail;
 }
 if (VAR_6) {
  VAR_9 = FUNC_18(VAR_4, VAR_5->et_ci, VAR_6,
       VAR_3);
  if (VAR_9 < 0) {
   FUNC_12(VAR_9);
   goto bail;
  }
 }



 VAR_11 = FUNC_10(VAR_19->l_next_free_rec);
 VAR_19->l_recs[VAR_11].e_blkno = FUNC_5(VAR_13);
 VAR_19->l_recs[VAR_11].e_cpos = FUNC_4(VAR_20);
 VAR_19->l_recs[VAR_11].e_int_clusters = 0;
 FUNC_9(&VAR_19->l_next_free_rec, 1);



 FUNC_16(VAR_5, VAR_14);

 VAR_17 = (struct ocfs2_extent_block *) (*VAR_7)->b_data;
 VAR_17->h_next_leaf_blk = FUNC_5(VAR_14);

 FUNC_19(VAR_4, *VAR_7);
 FUNC_19(VAR_4, VAR_5->et_root_bh);
 if (VAR_6)
  FUNC_19(VAR_4, VAR_6);





 FUNC_2(*VAR_7);
 FUNC_6(VAR_16[0]);
 *VAR_7 = VAR_16[0];

 VAR_9 = 0;
bail:
 if (VAR_16) {
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
   FUNC_2(VAR_16[VAR_11]);
  FUNC_8(VAR_16);
 }

 return VAR_9;
}
