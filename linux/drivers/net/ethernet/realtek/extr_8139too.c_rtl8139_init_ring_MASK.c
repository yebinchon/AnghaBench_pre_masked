
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8139_private {int * tx_bufs; int ** tx_buf; scalar_t__ dirty_tx; scalar_t__ cur_tx; scalar_t__ cur_rx; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtl8139_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1 (struct net_device *VAR_2)
{
 struct rtl8139_private *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_3->cur_rx = 0;
 VAR_3->cur_tx = 0;
 VAR_3->dirty_tx = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->tx_buf[VAR_4] = &VAR_3->tx_bufs[VAR_4 * VAR_1];
}
