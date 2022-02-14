
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_inode {int lock; int redirect; } ;
struct inode {int dummy; } ;


 struct ovl_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ovl_inode*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_1)
{
 struct ovl_inode *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->redirect);
 FUNC_3(&VAR_2->lock);
 FUNC_2(VAR_0, VAR_2);
}
