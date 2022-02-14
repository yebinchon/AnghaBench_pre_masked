
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int priority; } ;
struct TYPE_2__ {int qlen; int lock; } ;
struct sge_uld_txq {TYPE_1__ sendq; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sge_uld_txq*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct sge_uld_txq *VAR_1, struct sk_buff *VAR_2)
{
 VAR_2->priority = FUNC_1(VAR_2);
 FUNC_3(&VAR_1->sendq.lock);
 FUNC_0(&VAR_1->sendq, VAR_2);
 if (VAR_1->sendq.qlen == 1)
  FUNC_2(VAR_1);

 FUNC_4(&VAR_1->sendq.lock);
 return VAR_0;
}
