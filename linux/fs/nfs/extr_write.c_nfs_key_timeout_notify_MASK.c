
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int ll_cred; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs_open_context*,struct inode*) ;
 struct nfs_open_context* FUNC_1 (struct file*) ;

int
FUNC_2(struct file *VAR_1, struct inode *VAR_2)
{
 struct nfs_open_context *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_3, VAR_2) &&
     !VAR_3->ll_cred)

  return -VAR_0;
 return 0;
}
