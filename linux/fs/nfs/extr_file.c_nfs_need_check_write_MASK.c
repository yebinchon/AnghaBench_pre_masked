
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct nfs_open_context*,struct inode*) ;
 struct nfs_open_context* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, struct inode *VAR_1)
{
 struct nfs_open_context *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_2, VAR_1))
  return 1;
 return 0;
}
