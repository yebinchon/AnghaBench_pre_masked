
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_txq_pcpu {scalar_t__ count; } ;
struct mvpp2_tx_queue {int log_id; int pcpu; } ;
struct mvpp2_port {int dummy; } ;


 struct mvpp2_tx_queue* FUNC_0 (struct mvpp2_port*,int) ;
 int FUNC_1 (struct mvpp2_port*,struct mvpp2_tx_queue*,struct mvpp2_txq_pcpu*) ;
 struct mvpp2_txq_pcpu* FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct mvpp2_port *VAR_0, u32 VAR_1,
      unsigned int VAR_2)
{
 struct mvpp2_tx_queue *VAR_3;
 struct mvpp2_txq_pcpu *VAR_4;
 unsigned int VAR_5 = 0;

 while (VAR_1) {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  if (!VAR_3)
   break;

  VAR_4 = FUNC_2(VAR_3->pcpu, VAR_2);

  if (VAR_4->count) {
   FUNC_1(VAR_0, VAR_3, VAR_4);
   VAR_5 += VAR_4->count;
  }

  VAR_1 &= ~(1 << VAR_3->log_id);
 }
 return VAR_5;
}
