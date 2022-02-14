
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; int dma_addr; } ;
struct il_tx_queue {TYPE_1__ q; } ;
struct il_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct il_priv*,int ,int) ;

int
FUNC_2(struct il_priv *VAR_0, struct il_tx_queue *VAR_1)
{
 int VAR_2 = VAR_1->q.id;


 FUNC_1(VAR_0, FUNC_0(VAR_2), VAR_1->q.dma_addr >> 8);

 return 0;
}
