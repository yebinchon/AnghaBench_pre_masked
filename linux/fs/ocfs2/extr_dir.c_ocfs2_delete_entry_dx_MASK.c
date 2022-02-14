
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dx_entry_list {int de_num_used; scalar_t__ de_entries; int de_count; } ;
struct ocfs2_dx_root_block {int dr_num_entries; int dr_free_blk; struct ocfs2_dx_entry_list dr_entries; } ;
struct ocfs2_dx_leaf {struct ocfs2_dx_entry_list dl_list; } ;
struct ocfs2_dx_entry {int dummy; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_dx_leaf_bh; int dl_entry; struct ocfs2_dx_entry* dl_dx_entry; struct buffer_head* dl_leaf_bh; struct buffer_head* dl_dx_root_bh; } ;
struct ocfs2_dir_block_trailer {scalar_t__ db_free_rec_len; int db_free_next; } ;
struct inode {int i_sb; } ;
struct buffer_head {int b_blocknr; int b_size; scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int FUNC_3 (int *,struct inode*,int ,struct buffer_head*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,char*,unsigned long long,int,struct ocfs2_dx_entry_list*,struct ocfs2_dx_entry*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct ocfs2_dx_entry_list*,int) ;
 scalar_t__ FUNC_11 (struct ocfs2_dx_root_block*) ;
 int FUNC_12 (int ,struct buffer_head*) ;
 int FUNC_13 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_14 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_15 (int *,struct buffer_head*) ;
 struct ocfs2_dir_block_trailer* FUNC_16 (struct buffer_head*,int ) ;
 int FUNC_17 (unsigned long long,int) ;

__attribute__((used)) static int FUNC_18(handle_t *VAR_3, struct inode *VAR_4,
     struct ocfs2_dir_lookup_result *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 struct buffer_head *VAR_10 = VAR_5->dl_dx_root_bh;
 struct buffer_head *VAR_11 = VAR_5->dl_leaf_bh;
 struct ocfs2_dx_leaf *VAR_12;
 struct ocfs2_dx_entry *VAR_13 = VAR_5->dl_dx_entry;
 struct ocfs2_dir_block_trailer *VAR_14;
 struct ocfs2_dx_root_block *VAR_15;
 struct ocfs2_dx_entry_list *VAR_16;
 VAR_15 = (struct ocfs2_dx_root_block *)VAR_10->b_data;
 if (FUNC_11(VAR_15)) {
  VAR_16 = &VAR_15->dr_entries;
 } else {
  VAR_12 = (struct ocfs2_dx_leaf *) VAR_5->dl_dx_leaf_bh->b_data;
  VAR_16 = &VAR_12->dl_list;
 }



 FUNC_0(FUNC_6(VAR_16->de_count) <= 0);
 FUNC_0(FUNC_6(VAR_16->de_num_used) <= 0);

 VAR_7 = (char *)VAR_13 - (char *)VAR_16->de_entries;
 VAR_7 /= sizeof(*VAR_13);

 if (VAR_7 >= FUNC_6(VAR_16->de_num_used)) {
  FUNC_8(VAR_1, "Dir %llu: Bad dx_entry ptr idx %d, (%p, %p)\n",
       (unsigned long long)FUNC_2(VAR_4)->ip_blkno, VAR_7,
       VAR_16, VAR_13);
  return -VAR_0;
 }






 VAR_14 = FUNC_16(VAR_11, VAR_4->i_sb);
 if (VAR_14->db_free_rec_len == 0)
  VAR_9 = 1;
 VAR_6 = FUNC_14(VAR_3, FUNC_1(VAR_4), VAR_10,
          VAR_2);
 if (VAR_6) {
  FUNC_9(VAR_6);
  goto out;
 }

 if (!FUNC_11(VAR_15)) {
  VAR_6 = FUNC_13(VAR_3, FUNC_1(VAR_4),
           VAR_5->dl_dx_leaf_bh,
           VAR_2);
  if (VAR_6) {
   FUNC_9(VAR_6);
   goto out;
  }
 }

 FUNC_17((unsigned long long)FUNC_2(VAR_4)->ip_blkno,
        VAR_7);

 VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5->dl_entry,
       VAR_11, VAR_11->b_data, VAR_11->b_size);
 if (VAR_6) {
  FUNC_9(VAR_6);
  goto out;
 }

 VAR_8 = FUNC_12(VAR_4->i_sb, VAR_11);
 VAR_14->db_free_rec_len = FUNC_4(VAR_8);
 if (VAR_9) {
  VAR_14->db_free_next = VAR_15->dr_free_blk;
  VAR_15->dr_free_blk = FUNC_5(VAR_11->b_blocknr);
  FUNC_15(VAR_3, VAR_10);
 }


 FUNC_15(VAR_3, VAR_11);

 FUNC_7(&VAR_15->dr_num_entries, -1);
 FUNC_15(VAR_3, VAR_10);

 FUNC_10(VAR_16, VAR_7);

 if (!FUNC_11(VAR_15))
  FUNC_15(VAR_3, VAR_5->dl_dx_leaf_bh);

out:
 return VAR_6;
}
