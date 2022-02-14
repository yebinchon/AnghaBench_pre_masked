
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {scalar_t__ error; int dentry; } ;
struct inode {int i_mapping; } ;
struct file {int * private_data; } ;


 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nfs_open_context* FUNC_2 (struct file*) ;
 int FUNC_3 (struct nfs_open_context*) ;

void FUNC_4(struct file *VAR_0)
{
 struct nfs_open_context *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1) {
  struct inode *VAR_2 = FUNC_0(VAR_1->dentry);





  if (VAR_1->error < 0)
   FUNC_1(VAR_2->i_mapping);
  VAR_0->private_data = ((void*)0);
  FUNC_3(VAR_1);
 }
}
