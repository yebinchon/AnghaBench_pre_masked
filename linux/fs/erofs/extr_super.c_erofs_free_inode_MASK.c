
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_link; int * i_op; } ;
struct erofs_inode {int xattr_shared_xattrs; } ;


 struct erofs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct erofs_inode*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_2)
{
 struct erofs_inode *VAR_3 = FUNC_0(VAR_2);


 if (VAR_2->i_op == &VAR_0)
  FUNC_1(VAR_2->i_link);
 FUNC_1(VAR_3->xattr_shared_xattrs);

 FUNC_2(VAR_1, VAR_3);
}
