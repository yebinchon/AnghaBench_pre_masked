
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sge_uld_txq_info {int ntxq; struct sge_uld_txq* uldtxq; } ;
struct TYPE_5__ {int size; } ;
struct sge_uld_txq {TYPE_2__ q; } ;
struct TYPE_6__ {int cntxt_id; } ;
struct sge {TYPE_3__ fw_evtq; } ;
struct TYPE_4__ {int nports; } ;
struct adapter {int * port; TYPE_1__ params; struct sge sge; } ;


 int FUNC_0 (struct adapter*,struct sge_uld_txq_info*) ;
 int FUNC_1 (struct adapter*,struct sge_uld_txq*,int ,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct adapter *VAR_0, struct sge_uld_txq_info *VAR_1,
    unsigned int VAR_2)
{
 struct sge *VAR_3 = &VAR_0->sge;
 int VAR_4 = VAR_1->ntxq;
 int VAR_5, VAR_6, VAR_7;

 VAR_6 = VAR_4 / VAR_0->params.nports;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct sge_uld_txq *VAR_8 = &VAR_1->uldtxq[VAR_5];

  VAR_8->q.size = 1024;
  VAR_7 = FUNC_1(VAR_0, VAR_8, VAR_0->port[VAR_5 / VAR_6],
        VAR_3->fw_evtq.cntxt_id, VAR_2);
  if (VAR_7)
   goto freeout;
 }
 return 0;
freeout:
 FUNC_0(VAR_0, VAR_1);
 return VAR_7;
}
