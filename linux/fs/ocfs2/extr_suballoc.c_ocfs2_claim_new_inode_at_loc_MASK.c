
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u16 ;
struct ocfs2_suballoc_result {scalar_t__ sr_blkno; int sr_bits; scalar_t__ sr_bg_blkno; int sr_bit_offset; int sr_bg_stable_blkno; } ;
struct ocfs2_group_desc {int bg_chain; } ;
struct ocfs2_dinode {int dummy; } ;
struct ocfs2_alloc_context {int ac_bits_given; TYPE_2__* ac_inode; TYPE_3__* ac_bh; struct ocfs2_suballoc_result* ac_find_loc_priv; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_9__ {int bg_allocs; } ;
struct TYPE_12__ {TYPE_1__ alloc_stats; } ;
struct TYPE_11__ {scalar_t__ b_data; } ;
struct TYPE_10__ {int i_sb; } ;


 int FUNC_0 (int) ;
 TYPE_8__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int *,TYPE_3__*,int,int ) ;
 int FUNC_7 (int *,TYPE_2__*,struct ocfs2_group_desc*,struct buffer_head*,int ,int) ;
 int FUNC_8 (TYPE_2__*,struct ocfs2_dinode*,int ,struct buffer_head**) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*,int,int ) ;
 int FUNC_10 (struct inode*,struct ocfs2_alloc_context*) ;
 int FUNC_11 (unsigned long long,int) ;

int FUNC_12(handle_t *VAR_0,
     struct inode *VAR_1,
     struct ocfs2_alloc_context *VAR_2,
     u64 *VAR_3,
     u16 *VAR_4,
     u64 VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 struct ocfs2_suballoc_result *VAR_8 = VAR_2->ac_find_loc_priv;
 struct buffer_head *VAR_9 = ((void*)0);
 struct ocfs2_group_desc *VAR_10;
 struct ocfs2_dinode *VAR_11 = (struct ocfs2_dinode *) VAR_2->ac_bh->b_data;







 FUNC_0(VAR_8->sr_blkno != VAR_5);

 VAR_6 = FUNC_8(VAR_2->ac_inode, VAR_11,
       VAR_8->sr_bg_stable_blkno, &VAR_9);
 if (VAR_6) {
  FUNC_5(VAR_6);
  goto out;
 }

 VAR_10 = (struct ocfs2_group_desc *) VAR_9->b_data;
 VAR_7 = FUNC_4(VAR_10->bg_chain);

 VAR_6 = FUNC_6(VAR_2->ac_inode, VAR_0,
            VAR_2->ac_bh, VAR_8->sr_bits,
            VAR_7);
 if (VAR_6) {
  FUNC_5(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_7(VAR_0,
      VAR_2->ac_inode,
      VAR_10,
      VAR_9,
      VAR_8->sr_bit_offset,
      VAR_8->sr_bits);
 if (VAR_6 < 0) {
  FUNC_9(VAR_2->ac_inode,
            VAR_2->ac_bh, VAR_8->sr_bits, VAR_7);
  FUNC_5(VAR_6);
  goto out;
 }

 FUNC_11((unsigned long long)VAR_5,
        VAR_8->sr_bits);

 FUNC_2(&FUNC_1(VAR_2->ac_inode->i_sb)->alloc_stats.bg_allocs);

 FUNC_0(VAR_8->sr_bits != 1);

 *VAR_3 = VAR_8->sr_bg_blkno;
 *VAR_4 = VAR_8->sr_bit_offset;
 VAR_2->ac_bits_given++;
 FUNC_10(VAR_1, VAR_2);

out:
 FUNC_3(VAR_9);

 return VAR_6;
}
