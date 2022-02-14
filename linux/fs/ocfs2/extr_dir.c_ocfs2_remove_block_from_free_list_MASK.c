
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dx_root_block {int dr_free_blk; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_leaf_bh; struct buffer_head* dl_prev_leaf_bh; struct buffer_head* dl_dx_root_bh; } ;
struct ocfs2_dir_block_trailer {int db_free_next; int db_free_rec_len; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ocfs2_dir_lookup_result*) ;
 int FUNC_3 (int *,struct buffer_head*) ;
 struct ocfs2_dir_block_trailer* FUNC_4 (struct buffer_head*,int ) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0,
           handle_t *VAR_1,
           struct ocfs2_dir_lookup_result *VAR_2)
{
 struct ocfs2_dir_block_trailer *VAR_3, *VAR_4;
 struct ocfs2_dx_root_block *VAR_5;
 struct buffer_head *VAR_6;

 VAR_3 = FUNC_4(VAR_2->dl_leaf_bh, VAR_0->i_sb);

 if (FUNC_2(VAR_2)) {
  VAR_6 = VAR_2->dl_dx_root_bh;
  VAR_5 = (struct ocfs2_dx_root_block *)VAR_6->b_data;
  VAR_5->dr_free_blk = VAR_3->db_free_next;
 } else {
  VAR_6 = VAR_2->dl_prev_leaf_bh;
  VAR_4 = FUNC_4(VAR_6, VAR_0->i_sb);
  VAR_4->db_free_next = VAR_3->db_free_next;
 }

 VAR_3->db_free_rec_len = FUNC_0(0);
 VAR_3->db_free_next = FUNC_1(0);

 FUNC_3(VAR_1, VAR_6);
 FUNC_3(VAR_1, VAR_2->dl_leaf_bh);
}
