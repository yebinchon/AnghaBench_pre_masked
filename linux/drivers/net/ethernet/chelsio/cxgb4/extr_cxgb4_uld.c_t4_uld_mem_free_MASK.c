
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge {int uld_rxq_info; int uld_txq_info; } ;
struct adapter {int uld; struct sge sge; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct adapter *VAR_0)
{
 struct sge *VAR_1 = &VAR_0->sge;

 FUNC_0(VAR_1->uld_txq_info);
 FUNC_0(VAR_1->uld_rxq_info);
 FUNC_0(VAR_0->uld);
}
