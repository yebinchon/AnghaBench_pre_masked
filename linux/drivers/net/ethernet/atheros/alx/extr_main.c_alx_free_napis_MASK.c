
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alx_priv {int num_napi; struct alx_napi** qnapi; } ;
struct alx_napi {struct alx_napi* rxq; struct alx_napi* txq; int napi; } ;


 int FUNC_0 (struct alx_napi*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct alx_priv *VAR_0)
{
 struct alx_napi *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_napi; VAR_2++) {
  VAR_1 = VAR_0->qnapi[VAR_2];
  if (!VAR_1)
   continue;

  FUNC_1(&VAR_1->napi);
  FUNC_0(VAR_1->txq);
  FUNC_0(VAR_1->rxq);
  FUNC_0(VAR_1);
  VAR_0->qnapi[VAR_2] = ((void*)0);
 }
}
