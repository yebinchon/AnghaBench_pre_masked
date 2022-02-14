
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nilfs_dir_entry {int inode; } ;
struct inode {scalar_t__ i_ino; int i_ctime; int i_nlink; int i_sb; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct nilfs_dir_entry*,struct page*) ;
 struct nilfs_dir_entry* FUNC_4 (struct inode*,int *,struct page**) ;
 int FUNC_5 (int ,int ,char*,scalar_t__,int ) ;
 int FUNC_6 (struct inode*,int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct dentry *VAR_4)
{
 struct inode *VAR_5;
 struct nilfs_dir_entry *VAR_6;
 struct page *VAR_7;
 int VAR_8;

 VAR_8 = -VAR_1;
 VAR_6 = FUNC_4(VAR_3, &VAR_4->d_name, &VAR_7);
 if (!VAR_6)
  goto out;

 VAR_5 = FUNC_0(VAR_4);
 VAR_8 = -VAR_0;
 if (FUNC_2(VAR_6->inode) != VAR_5->i_ino)
  goto out;

 if (!VAR_5->i_nlink) {
  FUNC_5(VAR_5->i_sb, VAR_2,
     "deleting nonexistent file (ino=%lu), %d",
     VAR_5->i_ino, VAR_5->i_nlink);
  FUNC_6(VAR_5, 1);
 }
 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8)
  goto out;

 VAR_5->i_ctime = VAR_3->i_ctime;
 FUNC_1(VAR_5);
 VAR_8 = 0;
out:
 return VAR_8;
}
