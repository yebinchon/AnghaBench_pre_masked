
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct lan78xx_net {scalar_t__ rx_qlen; scalar_t__ tx_qlen; int net; int txq; int bh; int rxq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lan78xx_net*,struct urb*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct urb* FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct lan78xx_net *VAR_2)
{
 struct urb *VAR_3;
 int VAR_4;

 if (FUNC_2(&VAR_2->rxq) < VAR_2->rx_qlen) {
  for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
   if (FUNC_2(&VAR_2->rxq) >= VAR_2->rx_qlen)
    break;
   VAR_3 = FUNC_4(0, VAR_1);
   if (VAR_3)
    if (FUNC_1(VAR_2, VAR_3, VAR_1) == -VAR_0)
     return;
  }

  if (FUNC_2(&VAR_2->rxq) < VAR_2->rx_qlen)
   FUNC_3(&VAR_2->bh);
 }
 if (FUNC_2(&VAR_2->txq) < VAR_2->tx_qlen)
  FUNC_0(VAR_2->net);
}
