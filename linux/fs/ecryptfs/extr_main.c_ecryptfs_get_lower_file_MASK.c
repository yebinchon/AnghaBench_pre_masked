
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ecryptfs_inode_info {int lower_file_mutex; int lower_file_count; int lower_file; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct dentry*,int *) ;
 struct ecryptfs_inode_info* FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct dentry *VAR_1, struct inode *VAR_2)
{
 struct ecryptfs_inode_info *VAR_3;
 int VAR_4, VAR_5 = 0;

 VAR_3 = FUNC_4(VAR_2);
 FUNC_5(&VAR_3->lower_file_mutex);
 VAR_4 = FUNC_1(&VAR_3->lower_file_count);
 if (FUNC_0(VAR_4 < 1))
  VAR_5 = -VAR_0;
 else if (VAR_4 == 1) {
  VAR_5 = FUNC_3(VAR_1,
           &VAR_3->lower_file);
  if (VAR_5)
   FUNC_2(&VAR_3->lower_file_count, 0);
 }
 FUNC_6(&VAR_3->lower_file_mutex);
 return VAR_5;
}
