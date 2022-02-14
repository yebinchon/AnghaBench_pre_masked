
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int * proc_get_link; } ;
struct proc_inode {struct inode vfs_inode; int * ns_ops; int * sysctl_entry; int * sysctl; int * pde; TYPE_1__ op; scalar_t__ fd; int * pid; } ;


 int VAR_0 ;
 struct proc_inode* FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_2)
{
 struct proc_inode *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->pid = ((void*)0);
 VAR_3->fd = 0;
 VAR_3->op.proc_get_link = ((void*)0);
 VAR_3->pde = ((void*)0);
 VAR_3->sysctl = ((void*)0);
 VAR_3->sysctl_entry = ((void*)0);
 VAR_3->ns_ops = ((void*)0);
 return &VAR_3->vfs_inode;
}
