
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dir_block_trailer {unsigned long long db_signature; int db_blkno; int db_parent_dinode; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct ocfs2_dir_block_trailer*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long,unsigned long long,...) ;
 struct ocfs2_dir_block_trailer* FUNC_4 (struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct buffer_head *VAR_1)
{
 int VAR_2 = 0;
 struct ocfs2_dir_block_trailer *VAR_3;

 VAR_3 = FUNC_4(VAR_1, VAR_0->i_sb);
 if (!FUNC_1(VAR_3)) {
  VAR_2 = FUNC_3(VAR_0->i_sb,
     "Invalid dirblock #%llu: signature = %.*s\n",
     (unsigned long long)VAR_1->b_blocknr, 7,
     VAR_3->db_signature);
  goto out;
 }
 if (FUNC_2(VAR_3->db_blkno) != VAR_1->b_blocknr) {
  VAR_2 = FUNC_3(VAR_0->i_sb,
     "Directory block #%llu has an invalid db_blkno of %llu\n",
     (unsigned long long)VAR_1->b_blocknr,
     (unsigned long long)FUNC_2(VAR_3->db_blkno));
  goto out;
 }
 if (FUNC_2(VAR_3->db_parent_dinode) !=
     FUNC_0(VAR_0)->ip_blkno) {
  VAR_2 = FUNC_3(VAR_0->i_sb,
     "Directory block #%llu on dinode #%llu has an invalid parent_dinode of %llu\n",
     (unsigned long long)VAR_1->b_blocknr,
     (unsigned long long)FUNC_0(VAR_0)->ip_blkno,
     (unsigned long long)FUNC_2(VAR_3->db_blkno));
  goto out;
 }
out:
 return VAR_2;
}
