
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {unsigned long i_ino; scalar_t__ i_nlink; int i_data; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
struct bfs_sb_info {scalar_t__ si_lf_eblk; int bfs_lock; int si_imap; int si_freei; int si_freeb; } ;
struct bfs_inode_info {scalar_t__ i_sblock; scalar_t__ i_eblock; scalar_t__ i_dsk_ino; } ;
struct bfs_inode {int dummy; } ;


 struct bfs_inode_info* FUNC_0 (struct inode*) ;
 struct bfs_sb_info* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct bfs_inode*) ;
 int FUNC_3 (char*,struct super_block*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (char*,unsigned long) ;
 struct bfs_inode* FUNC_8 (struct super_block*,unsigned long,struct buffer_head**) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct bfs_inode*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct inode *VAR_0)
{
 unsigned long VAR_1 = VAR_0->i_ino;
 struct bfs_inode *VAR_2;
 struct buffer_head *VAR_3;
 struct super_block *VAR_4 = VAR_0->i_sb;
 struct bfs_sb_info *VAR_5 = FUNC_1(VAR_4);
 struct bfs_inode_info *VAR_6 = FUNC_0(VAR_0);

 FUNC_7("ino=%08lx\n", VAR_1);

 FUNC_14(&VAR_0->i_data);
 FUNC_9(VAR_0);
 FUNC_6(VAR_0);

 if (VAR_0->i_nlink)
  return;

 VAR_2 = FUNC_8(VAR_4, VAR_0->i_ino, &VAR_3);
 if (FUNC_2(VAR_2))
  return;

 FUNC_12(&VAR_5->bfs_lock);

 FUNC_11(VAR_2, 0, sizeof(struct bfs_inode));
 FUNC_10(VAR_3);
 FUNC_4(VAR_3);

 if (VAR_6->i_dsk_ino) {
  if (VAR_6->i_sblock)
   VAR_5->si_freeb += VAR_6->i_eblock + 1 - VAR_6->i_sblock;
  VAR_5->si_freei++;
  FUNC_5(VAR_1, VAR_5->si_imap);
  FUNC_3("evict_inode", VAR_4);
 }






 if (VAR_5->si_lf_eblk == VAR_6->i_eblock)
  VAR_5->si_lf_eblk = VAR_6->i_sblock - 1;
 FUNC_13(&VAR_5->bfs_lock);
}
