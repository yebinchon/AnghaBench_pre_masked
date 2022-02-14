
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_qset {TYPE_2__* txq; } ;
struct TYPE_3__ {struct sge_qset* qs; } ;
struct adapter {TYPE_1__ sge; } ;
struct TYPE_4__ {int qresume_tsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct adapter*,int ,int ,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct adapter *VAR_5)
{
 FUNC_1(VAR_5, VAR_0, VAR_1, 0);
 if (!FUNC_0()) {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
   struct sge_qset *VAR_7 = &VAR_5->sge.qs[VAR_6];

   FUNC_2(&VAR_7->txq[VAR_4].qresume_tsk);
   FUNC_2(&VAR_7->txq[VAR_3].qresume_tsk);
  }
 }
}
