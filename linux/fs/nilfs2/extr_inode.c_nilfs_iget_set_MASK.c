
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_iget_args {scalar_t__ ino; int * root; int cno; scalar_t__ for_gc; } ;
struct inode {scalar_t__ i_ino; } ;
struct TYPE_2__ {int * i_root; int i_cno; int i_state; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, void *VAR_3)
{
 struct nilfs_iget_args *VAR_4 = VAR_3;

 VAR_2->i_ino = VAR_4->ino;
 if (VAR_4->for_gc) {
  FUNC_1(VAR_2)->i_state = FUNC_0(VAR_0);
  FUNC_1(VAR_2)->i_cno = VAR_4->cno;
  FUNC_1(VAR_2)->i_root = ((void*)0);
 } else {
  if (VAR_4->root && VAR_4->ino == VAR_1)
   FUNC_2(VAR_4->root);
  FUNC_1(VAR_2)->i_root = VAR_4->root;
 }
 return 0;
}
