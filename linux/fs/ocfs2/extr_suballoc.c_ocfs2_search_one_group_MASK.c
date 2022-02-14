
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ocfs2_suballoc_result {int sr_bits; int sr_bit_offset; int sr_bg_stable_blkno; int sr_bg_blkno; } ;
struct ocfs2_group_desc {int bg_free_bits_count; int bg_chain; } ;
struct ocfs2_dinode {int dummy; } ;
struct ocfs2_alloc_context {int (* ac_group_search ) (struct inode*,struct buffer_head*,int ,int ,int ,struct ocfs2_suballoc_result*) ;TYPE_1__* ac_bh; scalar_t__ ac_find_loc_only; int ac_max_block; struct inode* ac_inode; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_3__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,int *,TYPE_1__*,int ,int ) ;
 int FUNC_4 (struct ocfs2_alloc_context*,struct ocfs2_group_desc*,struct ocfs2_suballoc_result*) ;
 int FUNC_5 (int *,struct inode*,struct ocfs2_group_desc*,struct buffer_head*,int ,int ) ;
 int FUNC_6 (struct inode*,struct ocfs2_dinode*,int ,struct buffer_head**) ;
 int FUNC_7 (struct inode*,TYPE_1__*,int ,int ) ;
 int FUNC_8 (struct inode*,struct buffer_head*,int ,int ,int ,struct ocfs2_suballoc_result*) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_alloc_context *VAR_1,
      handle_t *VAR_2,
      u32 VAR_3,
      u32 VAR_4,
      struct ocfs2_suballoc_result *VAR_5,
      u16 *VAR_6)
{
 int VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct ocfs2_group_desc *VAR_9;
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_1->ac_bh->b_data;
 struct inode *VAR_11 = VAR_1->ac_inode;

 VAR_7 = FUNC_6(VAR_11, VAR_10,
       VAR_5->sr_bg_blkno, &VAR_8);
 if (VAR_7 < 0) {
  FUNC_2(VAR_7);
  return VAR_7;
 }

 VAR_9 = (struct ocfs2_group_desc *) VAR_8->b_data;
 VAR_7 = VAR_1->ac_group_search(VAR_11, VAR_8, VAR_3, VAR_4,
      VAR_1->ac_max_block, VAR_5);
 if (VAR_7 < 0) {
  if (VAR_7 != -VAR_0)
   FUNC_2(VAR_7);
  goto out;
 }

 if (!VAR_7)
  FUNC_4(VAR_1, VAR_9, VAR_5);





 VAR_5->sr_bg_stable_blkno = VAR_8->b_blocknr;

 if (VAR_1->ac_find_loc_only)
  goto out_loc_only;

 VAR_7 = FUNC_3(VAR_11, VAR_2, VAR_1->ac_bh,
            VAR_5->sr_bits,
            FUNC_1(VAR_9->bg_chain));
 if (VAR_7 < 0) {
  FUNC_2(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_5(VAR_2, VAR_11, VAR_9, VAR_8,
      VAR_5->sr_bit_offset, VAR_5->sr_bits);
 if (VAR_7 < 0) {
  FUNC_7(VAR_11, VAR_1->ac_bh,
            VAR_5->sr_bits,
            FUNC_1(VAR_9->bg_chain));
  FUNC_2(VAR_7);
 }

out_loc_only:
 *VAR_6 = FUNC_1(VAR_9->bg_free_bits_count);

out:
 FUNC_0(VAR_8);

 return VAR_7;
}
