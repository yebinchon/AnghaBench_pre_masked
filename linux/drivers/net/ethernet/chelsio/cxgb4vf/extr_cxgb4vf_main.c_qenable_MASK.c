
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {int cntxt_id; int intr_params; int adapter; int napi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct sge_rspq *VAR_2)
{
 FUNC_3(&VAR_2->napi);





 FUNC_4(VAR_2->adapter, VAR_1 + VAR_0,
       FUNC_0(0) |
       FUNC_2(VAR_2->intr_params) |
       FUNC_1(VAR_2->cntxt_id));
}
