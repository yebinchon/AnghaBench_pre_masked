
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_rspq {int cntxt_id; int intr_params; int napi; scalar_t__ handler; } ;
struct TYPE_2__ {int ingr_sz; struct sge_rspq** ingr_map; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->sge.ingr_sz; VAR_2++) {
  struct sge_rspq *VAR_3 = VAR_1->sge.ingr_map[VAR_2];

  if (!VAR_3)
   continue;
  if (VAR_3->handler)
   FUNC_3(&VAR_3->napi);


  FUNC_4(VAR_1, FUNC_1(VAR_0),
        FUNC_2(VAR_3->intr_params) |
        FUNC_0(VAR_3->cntxt_id));
 }
}
