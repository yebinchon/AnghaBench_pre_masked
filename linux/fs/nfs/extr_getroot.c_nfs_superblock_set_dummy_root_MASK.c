
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {TYPE_2__* s_root; } ;
struct inode {int dummy; } ;
struct TYPE_7__ {int i_lock; } ;
struct TYPE_5__ {int d_alias; } ;
struct TYPE_6__ {int d_lock; TYPE_1__ d_u; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_1, struct inode *VAR_2)
{

 if (VAR_1->s_root == ((void*)0)) {
  VAR_1->s_root = FUNC_1(VAR_2);
  if (VAR_1->s_root == ((void*)0))
   return -VAR_0;
  FUNC_3(VAR_2);
  FUNC_4(&FUNC_0(VAR_1->s_root)->i_lock);
  FUNC_4(&VAR_1->s_root->d_lock);
  FUNC_2(&VAR_1->s_root->d_u.d_alias);
  FUNC_5(&VAR_1->s_root->d_lock);
  FUNC_5(&FUNC_0(VAR_1->s_root)->i_lock);
 }
 return 0;
}
