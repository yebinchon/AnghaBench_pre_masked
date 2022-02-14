
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alx_priv {int num_txq; TYPE_1__** qnapi; } ;
struct TYPE_2__ {scalar_t__ rxq; scalar_t__ txq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct alx_priv *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_txq; VAR_1++)
  if (VAR_0->qnapi[VAR_1] && VAR_0->qnapi[VAR_1]->txq)
   FUNC_1(VAR_0->qnapi[VAR_1]->txq);

 if (VAR_0->qnapi[0] && VAR_0->qnapi[0]->rxq)
  FUNC_0(VAR_0->qnapi[0]->rxq);
}
