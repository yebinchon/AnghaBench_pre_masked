
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct nfs_inode {int open_files; struct inode vfs_inode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct nfs_inode *VAR_0)
{
 struct inode *VAR_1 = &VAR_0->vfs_inode;

 if (!FUNC_0(VAR_1->i_mode))
  return 0;
 if (FUNC_2(&VAR_0->open_files))
  return 0;
 return FUNC_1(VAR_1);
}
