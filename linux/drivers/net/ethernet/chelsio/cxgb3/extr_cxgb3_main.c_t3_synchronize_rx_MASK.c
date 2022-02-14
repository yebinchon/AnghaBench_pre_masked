
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_rspq {int lock; } ;
struct port_info {int first_qset; int nqsets; } ;
struct TYPE_4__ {TYPE_1__* qs; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_3__ {struct sge_rspq rspq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_0, const struct port_info *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1->first_qset; VAR_2 < VAR_1->first_qset + VAR_1->nqsets; VAR_2++) {
  struct sge_rspq *VAR_3 = &VAR_0->sge.qs[VAR_2].rspq;

  FUNC_0(&VAR_3->lock);
  FUNC_1(&VAR_3->lock);
 }
}
