
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct ocfs2_suballoc_result {int sr_bits; int sr_bit_offset; int sr_bg_stable_blkno; scalar_t__ sr_bg_blkno; } ;
struct ocfs2_group_desc {int bg_free_bits_count; int bg_blkno; int bg_next_group; } ;
struct TYPE_7__ {int i_chain; } ;
struct ocfs2_dinode {int i_blkno; TYPE_1__ id2; } ;
struct ocfs2_chain_list {TYPE_2__* cl_recs; } ;
struct ocfs2_alloc_context {size_t ac_chain; int (* ac_group_search ) (struct inode*,struct buffer_head*,int ,int ,int ,struct ocfs2_suballoc_result*) ;TYPE_3__* ac_bh; scalar_t__ ac_find_loc_only; int ac_disable_chain_relink; int ac_max_block; struct inode* ac_inode; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_10__ {scalar_t__ ip_blkno; } ;
struct TYPE_9__ {scalar_t__ b_data; } ;
struct TYPE_8__ {int c_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_6__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct buffer_head*) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct inode*,int *,TYPE_3__*,int ,size_t) ;
 int FUNC_7 (struct ocfs2_alloc_context*,struct ocfs2_group_desc*,struct ocfs2_suballoc_result*) ;
 scalar_t__ FUNC_8 (struct ocfs2_group_desc*,int ) ;
 int FUNC_9 (int *,struct inode*,struct ocfs2_group_desc*,struct buffer_head*,int ,int ) ;
 int FUNC_10 (struct inode*,struct ocfs2_dinode*,scalar_t__,struct buffer_head**) ;
 int FUNC_11 (int *,struct inode*,TYPE_3__*,struct buffer_head*,struct buffer_head*,size_t) ;
 int FUNC_12 (struct inode*,TYPE_3__*,int ,size_t) ;
 int FUNC_13 (struct inode*,struct buffer_head*,int ,int ,int ,struct ocfs2_suballoc_result*) ;
 int FUNC_14 (unsigned long long,int ,size_t) ;
 int FUNC_15 (unsigned long long,int ) ;
 int FUNC_16 (unsigned long long,int ) ;

__attribute__((used)) static int FUNC_17(struct ocfs2_alloc_context *VAR_1,
         handle_t *VAR_2,
         u32 VAR_3,
         u32 VAR_4,
         struct ocfs2_suballoc_result *VAR_5,
         u16 *VAR_6)
{
 int VAR_7;
 u16 VAR_8;
 u64 VAR_9;
 struct inode *VAR_10 = VAR_1->ac_inode;
 struct buffer_head *VAR_11 = ((void*)0);
 struct buffer_head *VAR_12 = ((void*)0);
 struct ocfs2_dinode *VAR_13 = (struct ocfs2_dinode *) VAR_1->ac_bh->b_data;
 struct ocfs2_chain_list *VAR_14 = (struct ocfs2_chain_list *) &VAR_13->id2.i_chain;
 struct ocfs2_group_desc *VAR_15;

 VAR_8 = VAR_1->ac_chain;
 FUNC_14(
  (unsigned long long)FUNC_1(VAR_10)->ip_blkno,
  VAR_3, VAR_8);

 VAR_7 = FUNC_10(VAR_10, VAR_13,
          FUNC_4(VAR_14->cl_recs[VAR_8].c_blkno),
          &VAR_11);
 if (VAR_7 < 0) {
  FUNC_5(VAR_7);
  goto bail;
 }
 VAR_15 = (struct ocfs2_group_desc *) VAR_11->b_data;

 VAR_7 = -VAR_0;


 while ((VAR_7 = VAR_1->ac_group_search(VAR_10, VAR_11,
          VAR_3, VAR_4,
          VAR_1->ac_max_block,
          VAR_5)) == -VAR_0) {
  if (!VAR_15->bg_next_group)
   break;

  FUNC_2(VAR_12);
  VAR_12 = ((void*)0);

  VAR_9 = FUNC_4(VAR_15->bg_next_group);
  VAR_12 = VAR_11;
  VAR_11 = ((void*)0);
  VAR_7 = FUNC_10(VAR_10, VAR_13,
           VAR_9, &VAR_11);
  if (VAR_7 < 0) {
   FUNC_5(VAR_7);
   goto bail;
  }
  VAR_15 = (struct ocfs2_group_desc *) VAR_11->b_data;
 }
 if (VAR_7 < 0) {
  if (VAR_7 != -VAR_0)
   FUNC_5(VAR_7);
  goto bail;
 }

 FUNC_16(
  (unsigned long long)FUNC_4(VAR_15->bg_blkno), VAR_5->sr_bits);

 VAR_5->sr_bg_blkno = FUNC_4(VAR_15->bg_blkno);

 FUNC_0(VAR_5->sr_bits == 0);
 if (!VAR_7)
  FUNC_7(VAR_1, VAR_15, VAR_5);





 VAR_5->sr_bg_stable_blkno = VAR_11->b_blocknr;
 if (!VAR_1->ac_disable_chain_relink &&
     (VAR_12) &&
     (FUNC_8(VAR_15, VAR_5->sr_bits))) {
  VAR_7 = FUNC_11(VAR_2, VAR_10,
        VAR_1->ac_bh, VAR_11,
        VAR_12, VAR_8);
  if (VAR_7 < 0) {
   FUNC_5(VAR_7);
   goto bail;
  }
 }

 if (VAR_1->ac_find_loc_only)
  goto out_loc_only;

 VAR_7 = FUNC_6(VAR_10, VAR_2,
        VAR_1->ac_bh, VAR_5->sr_bits,
        VAR_8);
 if (VAR_7) {
  FUNC_5(VAR_7);
  goto bail;
 }

 VAR_7 = FUNC_9(VAR_2,
         VAR_10,
         VAR_15,
         VAR_11,
         VAR_5->sr_bit_offset,
         VAR_5->sr_bits);
 if (VAR_7 < 0) {
  FUNC_12(VAR_10,
     VAR_1->ac_bh, VAR_5->sr_bits, VAR_8);
  FUNC_5(VAR_7);
  goto bail;
 }

 FUNC_15(
   (unsigned long long)FUNC_4(VAR_13->i_blkno),
   VAR_5->sr_bits);

out_loc_only:
 *VAR_6 = FUNC_3(VAR_15->bg_free_bits_count);
bail:
 FUNC_2(VAR_11);
 FUNC_2(VAR_12);

 if (VAR_7)
  FUNC_5(VAR_7);
 return VAR_7;
}
