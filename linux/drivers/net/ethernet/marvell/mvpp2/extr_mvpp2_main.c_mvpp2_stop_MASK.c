
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mvpp2_port_pcpu {int timer_scheduled; int tx_done_timer; } ;
struct mvpp2_port {int stats_work; int pcpu; TYPE_1__* priv; int has_tx_irqs; scalar_t__ link_irq; scalar_t__ phylink; } ;
struct TYPE_2__ {unsigned int nthreads; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct mvpp2_port*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mvpp2_port*) ;
 int FUNC_4 (struct mvpp2_port*) ;
 int FUNC_5 (struct mvpp2_port*) ;
 int VAR_0 ;
 int FUNC_6 (struct mvpp2_port*) ;
 int FUNC_7 (struct mvpp2_port*) ;
 int FUNC_8 (struct mvpp2_port*,int) ;
 int FUNC_9 (struct mvpp2_port*) ;
 struct mvpp2_port* FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,struct mvpp2_port*,int) ;
 struct mvpp2_port_pcpu* FUNC_12 (int ,unsigned int) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_1)
{
 struct mvpp2_port *VAR_2 = FUNC_10(VAR_1);
 struct mvpp2_port_pcpu *VAR_3;
 unsigned int VAR_4;

 FUNC_9(VAR_2);


 FUNC_11(VAR_0, VAR_2, 1);
 FUNC_8(VAR_2, 1);

 if (VAR_2->phylink)
  FUNC_13(VAR_2->phylink);
 if (VAR_2->link_irq)
  FUNC_1(VAR_2->link_irq, VAR_2);

 FUNC_6(VAR_2);
 if (!VAR_2->has_tx_irqs) {
  for (VAR_4 = 0; VAR_4 < VAR_2->priv->nthreads; VAR_4++) {
   VAR_3 = FUNC_12(VAR_2->pcpu, VAR_4);

   FUNC_2(&VAR_3->tx_done_timer);
   VAR_3->timer_scheduled = 0;
  }
 }
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);

 FUNC_0(&VAR_2->stats_work);

 FUNC_7(VAR_2);
 FUNC_3(VAR_2);

 return 0;
}
