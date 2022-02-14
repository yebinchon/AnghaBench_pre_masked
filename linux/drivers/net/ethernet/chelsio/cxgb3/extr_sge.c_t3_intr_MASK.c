
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sge_rspq {size_t cidx; int lock; int * desc; } ;
struct TYPE_6__ {int nports; } ;
struct TYPE_5__ {TYPE_1__* qs; } ;
struct adapter {TYPE_3__ params; TYPE_2__ sge; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {struct sge_rspq rspq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct sge_rspq*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct adapter*,struct sge_rspq*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct adapter *VAR_6 = VAR_2;
 struct sge_rspq *VAR_7 = &VAR_6->sge.qs[0].rspq;
 struct sge_rspq *VAR_8 = &VAR_6->sge.qs[1].rspq;

 FUNC_4(&VAR_7->lock);

 VAR_4 = FUNC_1(&VAR_7->desc[VAR_7->cidx], VAR_7);
 VAR_5 = VAR_6->params.nports == 2 &&
     FUNC_1(&VAR_8->desc[VAR_8->cidx], VAR_8);

 if (FUNC_2(VAR_4 | VAR_5)) {
  FUNC_8(VAR_6, VAR_0, 0);
  FUNC_6(VAR_6, VAR_0);

  if (FUNC_2(VAR_4))
   FUNC_3(VAR_6, VAR_7);

  if (VAR_5)
   FUNC_3(VAR_6, VAR_8);

  VAR_3 = VAR_4 | VAR_5;
 } else
  VAR_3 = FUNC_7(VAR_6);

 FUNC_5(&VAR_7->lock);
 return FUNC_0(VAR_3 != 0);
}
