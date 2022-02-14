
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ecryptfs_inode_info {struct inode vfs_inode; int * lower_file; int lower_file_count; int lower_file_mutex; int crypt_stat; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 struct ecryptfs_inode_info* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct ecryptfs_inode_info*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct inode *FUNC_6(struct super_block *VAR_2)
{
 struct ecryptfs_inode_info *VAR_3;
 struct inode *VAR_4 = ((void*)0);

 VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (FUNC_5(!VAR_3))
  goto out;
 if (FUNC_1(&VAR_3->crypt_stat)) {
  FUNC_3(VAR_1, VAR_3);
  goto out;
 }
 FUNC_4(&VAR_3->lower_file_mutex);
 FUNC_0(&VAR_3->lower_file_count, 0);
 VAR_3->lower_file = ((void*)0);
 VAR_4 = &VAR_3->vfs_inode;
out:
 return VAR_4;
}
