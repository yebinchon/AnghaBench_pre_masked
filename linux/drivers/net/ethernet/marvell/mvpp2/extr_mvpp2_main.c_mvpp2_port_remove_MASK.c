
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_port {int ntxqs; int dev; scalar_t__ link_irq; TYPE_1__** txqs; int stats; int pcpu; scalar_t__ phylink; } ;
struct TYPE_2__ {int pcpu; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mvpp2_port*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct mvpp2_port *VAR_0)
{
 int VAR_1;

 FUNC_5(VAR_0->dev);
 if (VAR_0->phylink)
  FUNC_4(VAR_0->phylink);
 FUNC_1(VAR_0->pcpu);
 FUNC_1(VAR_0->stats);
 for (VAR_1 = 0; VAR_1 < VAR_0->ntxqs; VAR_1++)
  FUNC_1(VAR_0->txqs[VAR_1]->pcpu);
 FUNC_3(VAR_0);
 if (VAR_0->link_irq)
  FUNC_2(VAR_0->link_irq);
 FUNC_0(VAR_0->dev);
}
