
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sge_uld_txq_info {int ntxq; struct sge_uld_txq* uldtxq; } ;
struct TYPE_3__ {int sdesc; int in_use; int cntxt_id; scalar_t__ desc; } ;
struct sge_uld_txq {TYPE_1__ q; int sendq; int qresume_tsk; } ;
struct adapter {int pf; int mbox; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct adapter*,TYPE_1__*,int ,int) ;
 int FUNC_2 (struct adapter*,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct adapter *VAR_0, struct sge_uld_txq_info *VAR_1)
{
 int VAR_2 = VAR_1->ntxq;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct sge_uld_txq *VAR_4 = &VAR_1->uldtxq[VAR_3];

  if (VAR_4 && VAR_4->q.desc) {
   FUNC_5(&VAR_4->qresume_tsk);
   FUNC_4(VAR_0, VAR_0->mbox, VAR_0->pf, 0,
     VAR_4->q.cntxt_id);
   FUNC_1(VAR_0, &VAR_4->q, VAR_4->q.in_use, 0);
   FUNC_3(VAR_4->q.sdesc);
   FUNC_0(&VAR_4->sendq);
   FUNC_2(VAR_0, &VAR_4->q);
  }
 }
}
