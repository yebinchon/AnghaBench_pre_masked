
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_super_block {int dummy; } ;
typedef int journal_t ;
struct TYPE_2__ {int * s_journal; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (struct super_block*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct super_block*) ;

__attribute__((used)) static void FUNC_10(struct super_block *VAR_0,
     struct ext4_super_block *VAR_1)
{
 journal_t *VAR_2 = FUNC_1(VAR_0)->s_journal;

 if (!FUNC_4(VAR_0)) {
  FUNC_0(VAR_2 != ((void*)0));
  return;
 }
 FUNC_7(VAR_2);
 if (FUNC_6(VAR_2) < 0)
  goto out;

 if (FUNC_5(VAR_0) && FUNC_9(VAR_0)) {
  FUNC_2(VAR_0);
  FUNC_3(VAR_0, 1);
 }

out:
 FUNC_8(VAR_2);
}
