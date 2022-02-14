
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_tx_queue {int done_pkts_coal; int id; } ;
struct mvpp2_port {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned int,int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mvpp2_port *VAR_4,
       struct mvpp2_tx_queue *VAR_5)
{
 unsigned int VAR_6 = FUNC_1(VAR_4->priv, FUNC_0());
 u32 VAR_7;

 if (VAR_5->done_pkts_coal > VAR_1)
  VAR_5->done_pkts_coal = VAR_1;

 VAR_7 = (VAR_5->done_pkts_coal << VAR_2);
 FUNC_2(VAR_4->priv, VAR_6, VAR_0, VAR_5->id);
 FUNC_2(VAR_4->priv, VAR_6, VAR_3, VAR_7);

 FUNC_3();
}
