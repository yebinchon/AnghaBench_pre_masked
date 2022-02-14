
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_uld_rxq_info {struct sge_uld_rxq_info* uldrxq; struct sge_uld_rxq_info* rspq_id; } ;
struct TYPE_2__ {struct sge_uld_rxq_info** uld_rxq_info; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (struct sge_uld_rxq_info*) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0, unsigned int VAR_1)
{
 struct sge_uld_rxq_info *VAR_2 = VAR_0->sge.uld_rxq_info[VAR_1];

 VAR_0->sge.uld_rxq_info[VAR_1] = ((void*)0);
 FUNC_0(VAR_2->rspq_id);
 FUNC_0(VAR_2->uldrxq);
 FUNC_0(VAR_2);
}
