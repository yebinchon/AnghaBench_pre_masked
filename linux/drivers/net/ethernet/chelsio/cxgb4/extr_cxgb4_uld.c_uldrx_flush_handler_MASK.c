
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_rspq {size_t uld; int lro_mgr; struct adapter* adap; } ;
struct adapter {TYPE_1__* uld; } ;
struct TYPE_2__ {int (* lro_flush ) (int *) ;} ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sge_rspq *VAR_0)
{
 struct adapter *VAR_1 = VAR_0->adap;

 if (VAR_1->uld[VAR_0->uld].lro_flush)
  VAR_1->uld[VAR_0->uld].lro_flush(&VAR_0->lro_mgr);
}
