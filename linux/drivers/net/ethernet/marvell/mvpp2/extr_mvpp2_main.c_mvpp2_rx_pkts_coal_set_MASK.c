
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_rx_queue {scalar_t__ pkts_coal; scalar_t__ id; } ;
struct mvpp2_port {int priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned int,int ,scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mvpp2_port *VAR_3,
       struct mvpp2_rx_queue *VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_3->priv, FUNC_0());

 if (VAR_4->pkts_coal > VAR_0)
  VAR_4->pkts_coal = VAR_0;

 FUNC_2(VAR_3->priv, VAR_5, VAR_1, VAR_4->id);
 FUNC_2(VAR_3->priv, VAR_5, VAR_2,
      VAR_4->pkts_coal);

 FUNC_3();
}
