
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct buffer_head {int dummy; } ;
struct blk_plug {int dummy; } ;
struct TYPE_3__ {struct buffer_head** j_chkpt_bhs; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct blk_plug*) ;
 int FUNC_3 (struct blk_plug*) ;
 int FUNC_4 (struct buffer_head*,int ) ;

__attribute__((used)) static void
FUNC_5(journal_t *VAR_1, int *VAR_2)
{
 int VAR_3;
 struct blk_plug VAR_4;

 FUNC_3(&VAR_4);
 for (VAR_3 = 0; VAR_3 < *VAR_2; VAR_3++)
  FUNC_4(VAR_1->j_chkpt_bhs[VAR_3], VAR_0);
 FUNC_2(&VAR_4);

 for (VAR_3 = 0; VAR_3 < *VAR_2; VAR_3++) {
  struct buffer_head *VAR_5 = VAR_1->j_chkpt_bhs[VAR_3];
  FUNC_0(VAR_5, "brelse");
  FUNC_1(VAR_5);
 }
 *VAR_2 = 0;
}
