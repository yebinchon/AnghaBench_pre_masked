
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_tx_queue {scalar_t__ descs; } ;
struct mvpp2_port {int ntxqs; int priv; struct mvpp2_tx_queue** txqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvpp2_port*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mvpp2_port *VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_2);


 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2->ntxqs; VAR_4++) {
  struct mvpp2_tx_queue *VAR_6 = VAR_2->txqs[VAR_4];

  if (VAR_6->descs)
   VAR_3 |= (1 << VAR_4);
 }

 FUNC_1(VAR_2->priv, VAR_0, VAR_5);
 FUNC_1(VAR_2->priv, VAR_1, VAR_3);
}
