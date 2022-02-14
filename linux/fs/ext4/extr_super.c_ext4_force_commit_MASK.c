
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int journal_t ;
struct TYPE_2__ {int * s_journal; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct super_block*) ;

int FUNC_3(struct super_block *VAR_0)
{
 journal_t *VAR_1;

 if (FUNC_2(VAR_0))
  return 0;

 VAR_1 = FUNC_0(VAR_0)->s_journal;
 return FUNC_1(VAR_1);
}
