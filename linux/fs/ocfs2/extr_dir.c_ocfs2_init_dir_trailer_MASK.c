
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ocfs2_dir_block_trailer {void* db_free_rec_len; void* db_blkno; void* db_parent_dinode; void* db_compat_rec_len; int db_signature; } ;
struct inode {int i_sb; } ;
struct buffer_head {int b_blocknr; } ;
struct TYPE_2__ {int ip_blkno; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 struct ocfs2_dir_block_trailer* FUNC_3 (struct buffer_head*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_1,
       struct buffer_head *VAR_2, u16 VAR_3)
{
 struct ocfs2_dir_block_trailer *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_1->i_sb);
 FUNC_4(VAR_4->db_signature, VAR_0);
 VAR_4->db_compat_rec_len =
   FUNC_1(sizeof(struct ocfs2_dir_block_trailer));
 VAR_4->db_parent_dinode = FUNC_2(FUNC_0(VAR_1)->ip_blkno);
 VAR_4->db_blkno = FUNC_2(VAR_2->b_blocknr);
 VAR_4->db_free_rec_len = FUNC_1(VAR_3);
}
