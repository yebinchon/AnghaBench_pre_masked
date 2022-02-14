
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nelems; } ;
struct bnxt_tc_info {int iter; int stats_batch; TYPE_1__ flow_table; } ;
struct bnxt {struct bnxt_tc_info* tc_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bnxt*,int ,int*) ;
 int FUNC_2 (struct bnxt*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct bnxt *VAR_1)
{
 struct bnxt_tc_info *VAR_2 = VAR_1->tc_info;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(&VAR_2->flow_table.nelems);
 if (!VAR_3)
  return;

 FUNC_3(&VAR_2->flow_table, &VAR_2->iter);

 for (;;) {
  VAR_4 = FUNC_1(VAR_1, VAR_2->stats_batch,
         &VAR_3);
  if (VAR_4) {
   if (VAR_4 == -VAR_0)
    continue;
   break;
  }

  if (!VAR_3)
   break;

  FUNC_2(VAR_1, VAR_3,
      VAR_2->stats_batch);
 }

 FUNC_4(&VAR_2->iter);
}
