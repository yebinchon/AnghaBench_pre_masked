
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mvpp2_port {int ntxqs; TYPE_2__* priv; TYPE_1__** txqs; } ;
struct TYPE_5__ {scalar_t__ nthreads; } ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct mvpp2_port *VAR_1 = VAR_0;
 int VAR_2;


 if (FUNC_3() > VAR_1->priv->nthreads)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->ntxqs; VAR_2++) {
  int VAR_3 = VAR_1->txqs[VAR_2]->id;

  FUNC_2(VAR_1->priv,
      FUNC_1(VAR_1->priv, FUNC_3()),
      FUNC_0(VAR_3));
 }
}
