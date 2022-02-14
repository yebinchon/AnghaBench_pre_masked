
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macb_tx_skb {int dummy; } ;
struct macb_queue {int bp; struct macb_tx_skb* tx_skb; } ;


 size_t FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static struct macb_tx_skb *FUNC_1(struct macb_queue *VAR_0,
           unsigned int VAR_1)
{
 return &VAR_0->tx_skb[FUNC_0(VAR_0->bp, VAR_1)];
}
