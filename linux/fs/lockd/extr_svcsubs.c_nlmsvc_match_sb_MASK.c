
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nlm_file {int f_file; } ;
struct TYPE_2__ {struct super_block* i_sb; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, struct nlm_file *VAR_1)
{
 struct super_block *VAR_2 = VAR_0;

 return VAR_2 == FUNC_0(VAR_1->f_file)->i_sb;
}
