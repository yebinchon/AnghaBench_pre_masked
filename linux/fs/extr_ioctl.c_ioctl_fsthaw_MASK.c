
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_1__* s_op; int s_user_ns; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct super_block* i_sb; } ;
struct TYPE_3__ {int (* thaw_super ) (struct super_block*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct file*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2)
{
 struct super_block *VAR_3 = FUNC_0(VAR_2)->i_sb;

 if (!FUNC_1(VAR_3->s_user_ns, VAR_0))
  return -VAR_1;


 if (VAR_3->s_op->thaw_super)
  return VAR_3->s_op->thaw_super(VAR_3);
 return FUNC_3(VAR_3);
}
