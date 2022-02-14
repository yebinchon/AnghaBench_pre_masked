
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_tx_swbd {int * skb; scalar_t__ dma; } ;
struct enetc_bdr {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct enetc_bdr*,struct enetc_tx_swbd*) ;

__attribute__((used)) static void FUNC_2(struct enetc_bdr *VAR_0,
         struct enetc_tx_swbd *VAR_1)
{
 if (VAR_1->dma)
  FUNC_1(VAR_0, VAR_1);

 if (VAR_1->skb) {
  FUNC_0(VAR_1->skb);
  VAR_1->skb = ((void*)0);
 }
}
