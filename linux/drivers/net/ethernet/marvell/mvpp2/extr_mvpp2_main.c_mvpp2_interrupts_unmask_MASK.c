
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mvpp2_port {int id; TYPE_1__* priv; scalar_t__ has_tx_irqs; } ;
struct TYPE_3__ {scalar_t__ nthreads; int hw_version; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_2)
{
 struct mvpp2_port *VAR_3 = VAR_2;
 u32 VAR_4;


 if (FUNC_4() > VAR_3->priv->nthreads)
  return;

 VAR_4 = VAR_0 |
  FUNC_0(VAR_3->priv->hw_version);
 if (VAR_3->has_tx_irqs)
  VAR_4 |= VAR_1;

 FUNC_3(VAR_3->priv,
      FUNC_2(VAR_3->priv, FUNC_4()),
      FUNC_1(VAR_3->id), VAR_4);
}
