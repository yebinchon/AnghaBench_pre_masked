
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int journal_t ;
struct TYPE_2__ {int * s_journal; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct super_block*) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_0)
{
 int VAR_1 = 0;
 journal_t *VAR_2;

 if (FUNC_6(VAR_0))
  return 0;

 VAR_2 = FUNC_0(VAR_0)->s_journal;

 if (VAR_2) {

  FUNC_4(VAR_2);





  VAR_1 = FUNC_3(VAR_2);
  if (VAR_1 < 0)
   goto out;


  FUNC_1(VAR_0);
 }

 VAR_1 = FUNC_2(VAR_0, 1);
out:
 if (VAR_2)

  FUNC_5(VAR_2);
 return VAR_1;
}
