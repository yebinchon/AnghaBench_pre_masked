
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ecryptfs_inode_info {int crypt_stat; int lower_file; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct ecryptfs_inode_info* FUNC_2 (struct inode*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0)
{
 struct ecryptfs_inode_info *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1->lower_file);
 FUNC_1(&VAR_1->crypt_stat);
}
