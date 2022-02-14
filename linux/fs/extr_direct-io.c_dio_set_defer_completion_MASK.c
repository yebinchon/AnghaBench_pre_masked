
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_dio_done_wq; } ;
struct dio {int defer_completion; TYPE_1__* inode; } ;
struct TYPE_2__ {struct super_block* i_sb; } ;


 int FUNC_0 (struct super_block*) ;

__attribute__((used)) static int FUNC_1(struct dio *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->inode->i_sb;

 if (VAR_0->defer_completion)
  return 0;
 VAR_0->defer_completion = 1;
 if (!VAR_1->s_dio_done_wq)
  return FUNC_0(VAR_1);
 return 0;
}
