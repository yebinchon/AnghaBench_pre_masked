
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x {int fp_array_size; TYPE_1__* ilt; TYPE_1__* msix_table; TYPE_1__* bnx2x_txq; TYPE_1__* fp_stats; TYPE_1__* sp_objs; TYPE_1__* fp; } ;
struct TYPE_2__ {struct TYPE_2__* tpa_info; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct bnx2x *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->fp_array_size; VAR_1++)
  FUNC_0(VAR_0->fp[VAR_1].tpa_info);
 FUNC_0(VAR_0->fp);
 FUNC_0(VAR_0->sp_objs);
 FUNC_0(VAR_0->fp_stats);
 FUNC_0(VAR_0->bnx2x_txq);
 FUNC_0(VAR_0->msix_table);
 FUNC_0(VAR_0->ilt);
}
