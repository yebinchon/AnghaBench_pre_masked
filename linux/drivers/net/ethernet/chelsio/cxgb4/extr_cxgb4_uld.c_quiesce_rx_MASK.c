
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {int napi; scalar_t__ handler; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0, struct sge_rspq *VAR_1)
{
 if (VAR_1 && VAR_1->handler)
  FUNC_0(&VAR_1->napi);
}
