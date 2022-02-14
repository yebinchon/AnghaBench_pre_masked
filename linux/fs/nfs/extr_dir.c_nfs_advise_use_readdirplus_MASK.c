
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int flags; int open_files; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct inode *VAR_2)
{
 struct nfs_inode *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_2(VAR_2, VAR_0) &&
     !FUNC_1(&VAR_3->open_files))
  FUNC_3(VAR_1, &VAR_3->flags);
}
