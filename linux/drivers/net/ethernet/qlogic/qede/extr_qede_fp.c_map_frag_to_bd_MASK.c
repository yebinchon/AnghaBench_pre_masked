
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_tx_queue {int dev; } ;
struct eth_tx_bd {int dummy; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;


 int FUNC_0 (struct eth_tx_bd*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct qede_tx_queue *VAR_2,
     skb_frag_t *VAR_3, struct eth_tx_bd *VAR_4)
{
 dma_addr_t VAR_5;


 VAR_5 = FUNC_2(VAR_2->dev, VAR_3, 0,
       FUNC_3(VAR_3), VAR_0);
 if (FUNC_4(FUNC_1(VAR_2->dev, VAR_5)))
  return -VAR_1;


 FUNC_0(VAR_4, VAR_5, FUNC_3(VAR_3));

 return 0;
}
