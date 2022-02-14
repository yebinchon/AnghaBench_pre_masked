
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_pkt {int * handler; } ;
struct usbhs_fifo {struct dma_chan* rx_chan; struct dma_chan* tx_chan; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct dma_chan *FUNC_0(struct usbhs_fifo *VAR_2,
         struct usbhs_pkt *VAR_3)
{
 if (&VAR_1 == VAR_3->handler)
  return VAR_2->tx_chan;

 if (&VAR_0 == VAR_3->handler)
  return VAR_2->rx_chan;

 return ((void*)0);
}
