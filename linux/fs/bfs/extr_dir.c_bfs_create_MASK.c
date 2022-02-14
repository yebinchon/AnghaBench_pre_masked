
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {unsigned long i_ino; TYPE_1__* i_mapping; int * i_fop; int * i_op; scalar_t__ i_blocks; int i_ctime; int i_atime; int i_mtime; struct super_block* i_sb; } ;
struct dentry {int d_name; } ;
struct bfs_sb_info {int si_lasti; int bfs_lock; int si_freei; int si_imap; } ;
struct TYPE_4__ {unsigned long i_dsk_ino; scalar_t__ i_eblock; scalar_t__ i_sblock; } ;
struct TYPE_3__ {int * a_ops; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 struct bfs_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct inode*,int *,unsigned long) ;
 int VAR_2 ;
 int FUNC_3 (char*,struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 unsigned long FUNC_6 (int ,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,struct inode*,int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct inode* FUNC_14 (struct super_block*) ;
 int FUNC_15 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_5, struct dentry *VAR_6, umode_t VAR_7,
      bool VAR_8)
{
 int VAR_9;
 struct inode *VAR_10;
 struct super_block *VAR_11 = VAR_5->i_sb;
 struct bfs_sb_info *VAR_12 = FUNC_1(VAR_11);
 unsigned long VAR_13;

 VAR_10 = FUNC_14(VAR_11);
 if (!VAR_10)
  return -VAR_0;
 FUNC_12(&VAR_12->bfs_lock);
 VAR_13 = FUNC_6(VAR_12->si_imap, VAR_12->si_lasti + 1);
 if (VAR_13 > VAR_12->si_lasti) {
  FUNC_13(&VAR_12->bfs_lock);
  FUNC_10(VAR_10);
  return -VAR_1;
 }
 FUNC_15(VAR_13, VAR_12->si_imap);
 VAR_12->si_freei--;
 FUNC_8(VAR_10, VAR_5, VAR_7);
 VAR_10->i_mtime = VAR_10->i_atime = VAR_10->i_ctime = FUNC_4(VAR_10);
 VAR_10->i_blocks = 0;
 VAR_10->i_op = &VAR_3;
 VAR_10->i_fop = &VAR_4;
 VAR_10->i_mapping->a_ops = &VAR_2;
 VAR_10->i_ino = VAR_13;
 FUNC_0(VAR_10)->i_dsk_ino = VAR_13;
 FUNC_0(VAR_10)->i_sblock = 0;
 FUNC_0(VAR_10)->i_eblock = 0;
 FUNC_9(VAR_10);
        FUNC_11(VAR_10);
 FUNC_3("create", VAR_11);

 VAR_9 = FUNC_2(VAR_5, &VAR_6->d_name, VAR_10->i_ino);
 if (VAR_9) {
  FUNC_7(VAR_10);
  FUNC_13(&VAR_12->bfs_lock);
  FUNC_10(VAR_10);
  return VAR_9;
 }
 FUNC_13(&VAR_12->bfs_lock);
 FUNC_5(VAR_6, VAR_10);
 return 0;
}
