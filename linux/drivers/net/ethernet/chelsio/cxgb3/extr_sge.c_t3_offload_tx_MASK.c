
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t3cdev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sge_qset {int * txq; } ;
struct TYPE_2__ {struct sge_qset* qs; } ;
struct adapter {TYPE_1__ sge; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct adapter*,int *,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct adapter*,int *,struct sk_buff*) ;
 size_t FUNC_3 (struct sk_buff*) ;
 struct adapter* FUNC_4 (struct t3cdev*) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(struct t3cdev *VAR_2, struct sk_buff *VAR_3)
{
 struct adapter *VAR_4 = FUNC_4(VAR_2);
 struct sge_qset *VAR_5 = &VAR_4->sge.qs[FUNC_3(VAR_3)];

 if (FUNC_5(FUNC_1(VAR_3)))
  return FUNC_0(VAR_4, &VAR_5->txq[VAR_0], VAR_3);

 return FUNC_2(VAR_4, &VAR_5->txq[VAR_1], VAR_3);
}
