
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_dma {int buff_stat; scalar_t__ len; int status; } ;
struct net_device {int dummy; } ;
struct au1000_private {size_t tx_tail; scalar_t__ tx_full; struct tx_dma** tx_dma_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct au1000_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct au1000_private *VAR_3 = FUNC_1(VAR_2);
 struct tx_dma *VAR_4;

 VAR_4 = VAR_3->tx_dma_ring[VAR_3->tx_tail];

 while (VAR_4->buff_stat & VAR_1) {
  FUNC_0(VAR_2, VAR_4->status);
  VAR_4->buff_stat &= ~VAR_1;
  VAR_4->len = 0;
  FUNC_3();

  VAR_3->tx_tail = (VAR_3->tx_tail + 1) & (VAR_0 - 1);
  VAR_4 = VAR_3->tx_dma_ring[VAR_3->tx_tail];

  if (VAR_3->tx_full) {
   VAR_3->tx_full = 0;
   FUNC_2(VAR_2);
  }
 }
}
