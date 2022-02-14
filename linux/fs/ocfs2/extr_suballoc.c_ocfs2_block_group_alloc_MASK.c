
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u16 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_group_desc {int bg_bits; int bg_free_bits_count; int bg_blkno; int bg_chain; } ;
struct TYPE_8__ {int i_total; int i_used; } ;
struct TYPE_9__ {TYPE_3__ bitmap1; } ;
struct ocfs2_chain_list {int cl_cpg; int cl_next_free_rec; int cl_count; TYPE_2__* cl_recs; } ;
struct TYPE_6__ {struct ocfs2_chain_list i_chain; } ;
struct ocfs2_dinode {int i_size; int i_clusters; TYPE_4__ id1; TYPE_1__ id2; } ;
struct ocfs2_alloc_context {scalar_t__ ac_last_group; } ;
struct inode {int i_blocks; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef struct buffer_head handle_t ;
struct TYPE_10__ {int ip_lock; int ip_clusters; } ;
struct TYPE_7__ {int c_blkno; int c_total; int c_free; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 TYPE_5__* FUNC_3 (struct inode*) ;
 int VAR_1 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 struct buffer_head* FUNC_14 (struct ocfs2_super*,struct buffer_head*,struct inode*,struct ocfs2_alloc_context*,struct ocfs2_chain_list*) ;
 struct buffer_head* FUNC_15 (struct buffer_head*,struct inode*,struct ocfs2_alloc_context*,struct ocfs2_chain_list*) ;
 int FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (struct ocfs2_super*,struct buffer_head*) ;
 int FUNC_19 (struct ocfs2_alloc_context*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct buffer_head*,int ,struct buffer_head*,int ) ;
 int FUNC_23 (struct buffer_head*,struct buffer_head*) ;
 int FUNC_24 (struct ocfs2_super*,scalar_t__,scalar_t__,int,struct ocfs2_alloc_context**) ;
 struct buffer_head* FUNC_25 (struct ocfs2_super*,int) ;
 int FUNC_26 (struct buffer_head*,struct inode*,int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (unsigned long long) ;

__attribute__((used)) static int FUNC_30(struct ocfs2_super *VAR_2,
       struct inode *VAR_3,
       struct buffer_head *VAR_4,
       u64 VAR_5,
       u64 *VAR_6,
       int VAR_7)
{
 int VAR_8, VAR_9;
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *) VAR_4->b_data;
 struct ocfs2_chain_list *VAR_11;
 struct ocfs2_alloc_context *VAR_12 = ((void*)0);
 handle_t *VAR_13 = ((void*)0);
 u16 VAR_14;
 struct buffer_head *VAR_15 = ((void*)0);
 struct ocfs2_group_desc *VAR_16;

 FUNC_0(FUNC_21(VAR_3));

 VAR_11 = &VAR_10->id2.i_chain;
 VAR_8 = FUNC_24(VAR_2,
         FUNC_9(VAR_11->cl_cpg),
         VAR_5, VAR_7, &VAR_12);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_0)
   FUNC_13(VAR_8);
  goto bail;
 }

 VAR_9 = FUNC_16(VAR_2->sb,
       FUNC_9(VAR_11->cl_cpg));
 VAR_13 = FUNC_25(VAR_2, VAR_9);
 if (FUNC_2(VAR_13)) {
  VAR_8 = FUNC_4(VAR_13);
  VAR_13 = ((void*)0);
  FUNC_13(VAR_8);
  goto bail;
 }

 if (VAR_6 && *VAR_6 != 0) {
  FUNC_29(
    (unsigned long long)*VAR_6);
  VAR_12->ac_last_group = *VAR_6;
 }

 VAR_15 = FUNC_14(VAR_2, VAR_13, VAR_3,
            VAR_12, VAR_11);
 if (FUNC_2(VAR_15) && (FUNC_4(VAR_15) == -VAR_0))
  VAR_15 = FUNC_15(VAR_13,
         VAR_3,
         VAR_12, VAR_11);
 if (FUNC_2(VAR_15)) {
  VAR_8 = FUNC_4(VAR_15);
  VAR_15 = ((void*)0);
  if (VAR_8 != -VAR_0)
   FUNC_13(VAR_8);
  goto bail;
 }
 VAR_16 = (struct ocfs2_group_desc *) VAR_15->b_data;

 VAR_8 = FUNC_22(VAR_13, FUNC_1(VAR_3),
      VAR_4, VAR_1);
 if (VAR_8 < 0) {
  FUNC_13(VAR_8);
  goto bail;
 }

 VAR_14 = FUNC_9(VAR_16->bg_chain);
 FUNC_10(&VAR_11->cl_recs[VAR_14].c_free,
       FUNC_9(VAR_16->bg_free_bits_count));
 FUNC_10(&VAR_11->cl_recs[VAR_14].c_total,
       FUNC_9(VAR_16->bg_bits));
 VAR_11->cl_recs[VAR_14].c_blkno = VAR_16->bg_blkno;
 if (FUNC_9(VAR_11->cl_next_free_rec) < FUNC_9(VAR_11->cl_count))
  FUNC_8(&VAR_11->cl_next_free_rec, 1);

 FUNC_10(&VAR_10->id1.bitmap1.i_used, FUNC_9(VAR_16->bg_bits) -
     FUNC_9(VAR_16->bg_free_bits_count));
 FUNC_10(&VAR_10->id1.bitmap1.i_total, FUNC_9(VAR_16->bg_bits));
 FUNC_10(&VAR_10->i_clusters, FUNC_9(VAR_11->cl_cpg));

 FUNC_23(VAR_13, VAR_4);

 FUNC_27(&FUNC_3(VAR_3)->ip_lock);
 FUNC_3(VAR_3)->ip_clusters = FUNC_11(VAR_10->i_clusters);
 VAR_10->i_size = FUNC_6(FUNC_17(VAR_3->i_sb,
          FUNC_11(VAR_10->i_clusters)));
 FUNC_28(&FUNC_3(VAR_3)->ip_lock);
 FUNC_7(VAR_3, FUNC_12(VAR_10->i_size));
 VAR_3->i_blocks = FUNC_20(VAR_3);
 FUNC_26(VAR_13, VAR_3, 0);

 VAR_8 = 0;


 if (VAR_6)
  *VAR_6 = VAR_12->ac_last_group;

bail:
 if (VAR_13)
  FUNC_18(VAR_2, VAR_13);

 if (VAR_12)
  FUNC_19(VAR_12);

 FUNC_5(VAR_15);

 if (VAR_8)
  FUNC_13(VAR_8);
 return VAR_8;
}
