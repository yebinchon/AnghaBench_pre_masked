
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct au1000_private {scalar_t__ mac_enabled; TYPE_2__** tx_dma_ring; TYPE_1__** rx_dma_ring; scalar_t__ tx_full; int enable; } ;
struct TYPE_4__ {int buff_stat; } ;
struct TYPE_3__ {int buff_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int) ;
 struct au1000_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3)
{
 struct au1000_private *const VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 FUNC_0(VAR_3);

 FUNC_4(VAR_0, VAR_4->enable);
 FUNC_3();
 FUNC_1(2);
 FUNC_4(0, VAR_4->enable);
 FUNC_3();
 FUNC_1(2);

 VAR_4->tx_full = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {

  VAR_4->rx_dma_ring[VAR_5]->buff_stat &= ~0xf;
 }
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {

  VAR_4->tx_dma_ring[VAR_5]->buff_stat &= ~0xf;
 }

 VAR_4->mac_enabled = 0;

}
