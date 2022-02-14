
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_fifo {int * rx_chan; int * tx_chan; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct usbhs_priv *VAR_0, struct usbhs_fifo *VAR_1)
{
 if (VAR_1->tx_chan)
  FUNC_0(VAR_1->tx_chan);
 if (VAR_1->rx_chan)
  FUNC_0(VAR_1->rx_chan);

 VAR_1->tx_chan = ((void*)0);
 VAR_1->rx_chan = ((void*)0);
}
