
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_uld_txq_info {int ntxq; } ;
struct sge_uld_rxq_info {int nciq; scalar_t__ nrxq; scalar_t__ rspq_id; } ;
struct cxgb4_lld_info {int ntxq; int nciq; scalar_t__ ciq_ids; scalar_t__ nrxq; scalar_t__ rxq_ids; } ;
struct TYPE_2__ {struct sge_uld_txq_info** uld_txq_info; struct sge_uld_rxq_info** uld_rxq_info; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0, unsigned int VAR_1,
      struct cxgb4_lld_info *VAR_2)
{
 struct sge_uld_rxq_info *VAR_3 = VAR_0->sge.uld_rxq_info[VAR_1];
 int VAR_4 = FUNC_0(VAR_1);
 struct sge_uld_txq_info *VAR_5 = VAR_0->sge.uld_txq_info[VAR_4];

 VAR_2->rxq_ids = VAR_3->rspq_id;
 VAR_2->nrxq = VAR_3->nrxq;
 VAR_2->ciq_ids = VAR_3->rspq_id + VAR_3->nrxq;
 VAR_2->nciq = VAR_3->nciq;
 VAR_2->ntxq = VAR_5->ntxq;
}
