
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcba_priv {TYPE_1__* tx_context; int free_ctx_cnt; } ;
struct TYPE_2__ {struct mcba_priv* priv; int ndx; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mcba_priv *VAR_2)
{
 int VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2->tx_context[VAR_3].ndx = VAR_0;
  VAR_2->tx_context[VAR_3].priv = VAR_2;
 }

 FUNC_1(&VAR_2->free_ctx_cnt, FUNC_0(VAR_2->tx_context));
}
