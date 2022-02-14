
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_1__* s_op; int s_user_ns; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct super_block* i_sb; } ;
struct TYPE_3__ {int (* freeze_super ) (struct super_block*) ;int * freeze_fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct file*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct super_block*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3)
{
 struct super_block *VAR_4 = FUNC_0(VAR_3)->i_sb;

 if (!FUNC_2(VAR_4->s_user_ns, VAR_0))
  return -VAR_2;


 if (VAR_4->s_op->freeze_fs == ((void*)0) && VAR_4->s_op->freeze_super == ((void*)0))
  return -VAR_1;


 if (VAR_4->s_op->freeze_super)
  return VAR_4->s_op->freeze_super(VAR_4);
 return FUNC_1(VAR_4);
}
