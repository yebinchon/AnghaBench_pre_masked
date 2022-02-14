
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_mode; } ;


 scalar_t__ FUNC_0 (struct nfs_open_context*) ;
 int FUNC_1 (struct nfs_open_context*) ;
 struct nfs_open_context* FUNC_2 (int ,int ,struct file*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,struct nfs_open_context*) ;
 int FUNC_5 (struct inode*,struct file*) ;
 int FUNC_6 (struct nfs_open_context*) ;

int FUNC_7(struct inode *VAR_0, struct file *VAR_1)
{
 struct nfs_open_context *VAR_2;

 VAR_2 = FUNC_2(FUNC_3(VAR_1), VAR_1->f_mode, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 FUNC_4(VAR_1, VAR_2);
 FUNC_6(VAR_2);
 FUNC_5(VAR_0, VAR_1);
 return 0;
}
