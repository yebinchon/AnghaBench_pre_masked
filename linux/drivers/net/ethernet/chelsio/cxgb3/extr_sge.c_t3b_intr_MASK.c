
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sge_rspq {int lock; } ;
struct TYPE_3__ {TYPE_2__* qs; } ;
struct adapter {TYPE_1__ sge; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {struct sge_rspq rspq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct adapter*,struct sge_rspq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{
 u32 VAR_7;
 struct adapter *VAR_8 = VAR_6;
 struct sge_rspq *VAR_9 = &VAR_8->sge.qs[0].rspq;

 FUNC_6(VAR_8, VAR_0, 0);
 VAR_7 = FUNC_4(VAR_8, VAR_1);

 if (FUNC_7(!VAR_7))
  return VAR_4;

 FUNC_2(&VAR_9->lock);

 if (FUNC_7(VAR_7 & VAR_2))
  FUNC_5(VAR_8);

 if (FUNC_0(VAR_7 & 1))
  FUNC_1(VAR_8, VAR_9);

 if (VAR_7 & 2)
  FUNC_1(VAR_8, &VAR_8->sge.qs[1].rspq);

 FUNC_3(&VAR_9->lock);
 return VAR_3;
}
