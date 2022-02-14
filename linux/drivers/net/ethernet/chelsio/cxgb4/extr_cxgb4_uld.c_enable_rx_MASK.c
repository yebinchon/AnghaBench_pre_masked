
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {int cntxt_id; int intr_params; int napi; scalar_t__ handler; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_1, struct sge_rspq *VAR_2)
{
 if (!VAR_2)
  return;

 if (VAR_2->handler)
  FUNC_3(&VAR_2->napi);


 FUNC_4(VAR_1, FUNC_1(VAR_0),
       FUNC_2(VAR_2->intr_params) |
       FUNC_0(VAR_2->cntxt_id));
}
