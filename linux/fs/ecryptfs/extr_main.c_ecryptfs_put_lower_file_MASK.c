
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;
struct ecryptfs_inode_info {int lower_file_mutex; int * lower_file; int lower_file_count; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 struct ecryptfs_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct inode *VAR_0)
{
 struct ecryptfs_inode_info *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (FUNC_0(&VAR_1->lower_file_count,
          &VAR_1->lower_file_mutex)) {
  FUNC_2(VAR_0->i_mapping);
  FUNC_3(VAR_1->lower_file);
  VAR_1->lower_file = ((void*)0);
  FUNC_4(&VAR_1->lower_file_mutex);
 }
}
