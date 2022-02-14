
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct mvpp2_txq_pcpu {scalar_t__ thread; scalar_t__ count; scalar_t__ wake_threshold; } ;
struct mvpp2_tx_queue {int log_id; } ;
struct mvpp2_port {int dev; int priv; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mvpp2_port*,struct mvpp2_tx_queue*,struct mvpp2_txq_pcpu*,int) ;
 int FUNC_2 (struct mvpp2_port*,struct mvpp2_tx_queue*) ;
 int FUNC_3 (int ,char*) ;
 struct netdev_queue* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct netdev_queue*) ;
 int FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct mvpp2_port *VAR_0, struct mvpp2_tx_queue *VAR_1,
      struct mvpp2_txq_pcpu *VAR_2)
{
 struct netdev_queue *VAR_3 = FUNC_4(VAR_0->dev, VAR_1->log_id);
 int VAR_4;

 if (VAR_2->thread != FUNC_0(VAR_0->priv, FUNC_7()))
  FUNC_3(VAR_0->dev, "wrong cpu on the end of Tx processing\n");

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_4)
  return;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);

 VAR_2->count -= VAR_4;

 if (FUNC_5(VAR_3))
  if (VAR_2->count <= VAR_2->wake_threshold)
   FUNC_6(VAR_3);
}
