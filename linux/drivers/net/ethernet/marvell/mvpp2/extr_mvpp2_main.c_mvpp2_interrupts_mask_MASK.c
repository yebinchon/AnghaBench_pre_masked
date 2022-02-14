
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mvpp2_port {int id; TYPE_1__* priv; } ;
struct TYPE_3__ {scalar_t__ nthreads; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct mvpp2_port *VAR_1 = VAR_0;


 if (FUNC_3() > VAR_1->priv->nthreads)
  return;

 FUNC_2(VAR_1->priv,
      FUNC_1(VAR_1->priv, FUNC_3()),
      FUNC_0(VAR_1->id), 0);
}
