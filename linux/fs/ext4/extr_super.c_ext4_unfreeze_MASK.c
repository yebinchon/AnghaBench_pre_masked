
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {scalar_t__ s_journal; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (struct super_block*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0)
{
 if (FUNC_4(VAR_0) || FUNC_2(FUNC_0(VAR_0)))
  return 0;

 if (FUNC_0(VAR_0)->s_journal) {

  FUNC_3(VAR_0);
 }

 FUNC_1(VAR_0, 1);
 return 0;
}
