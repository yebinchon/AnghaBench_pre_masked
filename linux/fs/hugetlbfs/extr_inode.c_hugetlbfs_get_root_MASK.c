
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; int * i_fop; int * i_op; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int i_ino; } ;
struct hugetlbfs_fs_context {int mode; int gid; int uid; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*) ;
 int VAR_2 ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_3,
     struct hugetlbfs_fs_context *VAR_4)
{
 struct inode *VAR_5;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5) {
  VAR_5->i_ino = FUNC_1();
  VAR_5->i_mode = VAR_0 | VAR_4->mode;
  VAR_5->i_uid = VAR_4->uid;
  VAR_5->i_gid = VAR_4->gid;
  VAR_5->i_atime = VAR_5->i_mtime = VAR_5->i_ctime = FUNC_0(VAR_5);
  VAR_5->i_op = &VAR_1;
  VAR_5->i_fop = &VAR_2;

  FUNC_2(VAR_5);
  FUNC_3(VAR_5);
 }
 return VAR_5;
}
