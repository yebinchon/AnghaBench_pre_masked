
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ frozen; } ;
struct super_block {TYPE_1__ s_writers; } ;
typedef int journal_t ;
struct TYPE_5__ {int * s_journal; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct super_block*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_3)
{
 journal_t *VAR_4;

 FUNC_5();

 if (FUNC_7(FUNC_3(FUNC_0(VAR_3))))
  return -VAR_0;

 if (FUNC_6(VAR_3))
  return -VAR_1;
 FUNC_1(VAR_3->s_writers.frozen == VAR_2);
 VAR_4 = FUNC_0(VAR_3)->s_journal;





 if (VAR_4 && FUNC_4(VAR_4)) {
  FUNC_2(VAR_3, "Detected aborted journal");
  return -VAR_1;
 }
 return 0;
}
