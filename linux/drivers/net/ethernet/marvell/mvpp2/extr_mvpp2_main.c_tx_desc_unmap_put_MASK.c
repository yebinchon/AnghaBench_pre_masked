
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvpp2_txq_pcpu {int dummy; } ;
struct mvpp2_tx_queue {int pcpu; } ;
struct mvpp2_tx_desc {int dummy; } ;
struct mvpp2_port {TYPE_2__* dev; int priv; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvpp2_txq_pcpu*,int ) ;
 int FUNC_1 (int ,int ,size_t,int ) ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mvpp2_port*,struct mvpp2_tx_desc*) ;
 size_t FUNC_4 (struct mvpp2_port*,struct mvpp2_tx_desc*) ;
 int FUNC_5 (struct mvpp2_tx_queue*) ;
 struct mvpp2_txq_pcpu* FUNC_6 (int ,unsigned int) ;
 int FUNC_7 () ;

__attribute__((used)) static inline void
FUNC_8(struct mvpp2_port *VAR_1, struct mvpp2_tx_queue *VAR_2,
    struct mvpp2_tx_desc *VAR_3)
{
 unsigned int VAR_4 = FUNC_2(VAR_1->priv, FUNC_7());
 struct mvpp2_txq_pcpu *VAR_5 = FUNC_6(VAR_2->pcpu, VAR_4);

 dma_addr_t VAR_6 =
  FUNC_3(VAR_1, VAR_3);
 size_t VAR_7 =
  FUNC_4(VAR_1, VAR_3);
 if (!FUNC_0(VAR_5, VAR_6))
  FUNC_1(VAR_1->dev->dev.parent, VAR_6,
     VAR_7, VAR_0);
 FUNC_5(VAR_2);
}
