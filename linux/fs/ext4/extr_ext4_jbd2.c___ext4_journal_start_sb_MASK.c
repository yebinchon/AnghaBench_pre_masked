
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int journal_t ;
typedef int handle_t ;
struct TYPE_2__ {int * s_journal; } ;


 int * FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 () ;
 int FUNC_3 (struct super_block*) ;
 int * FUNC_4 (int *,int,int,int ,int,unsigned int) ;
 int FUNC_5 (struct super_block*,int,int,int ) ;

handle_t *FUNC_6(struct super_block *VAR_2, unsigned int VAR_3,
      int VAR_4, int VAR_5, int VAR_6)
{
 journal_t *VAR_7;
 int VAR_8;

 FUNC_5(VAR_2, VAR_5, VAR_6, VAR_1);
 VAR_8 = FUNC_3(VAR_2);
 if (VAR_8 < 0)
  return FUNC_0(VAR_8);

 VAR_7 = FUNC_1(VAR_2)->s_journal;
 if (!VAR_7)
  return FUNC_2();
 return FUNC_4(VAR_7, VAR_5, VAR_6, VAR_0,
       VAR_4, VAR_3);
}
