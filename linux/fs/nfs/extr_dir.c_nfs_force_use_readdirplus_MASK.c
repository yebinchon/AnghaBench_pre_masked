
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int flags; int open_files; } ;
struct inode {int i_mapping; } ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct inode *VAR_2)
{
 struct nfs_inode *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_3(VAR_2, VAR_0) &&
     !FUNC_2(&VAR_3->open_files)) {
  FUNC_4(VAR_1, &VAR_3->flags);
  FUNC_1(VAR_2->i_mapping, 0, -1);
 }
}
