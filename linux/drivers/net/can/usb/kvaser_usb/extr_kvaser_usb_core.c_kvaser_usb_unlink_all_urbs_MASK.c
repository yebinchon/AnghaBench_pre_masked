
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvaser_usb_net_priv {int dummy; } ;
struct kvaser_usb {int nchannels; struct kvaser_usb_net_priv** nets; int * rxbuf_dma; int * rxbuf; int udev; int rx_submitted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvaser_usb_net_priv*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kvaser_usb *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_2->rx_submitted);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(VAR_2->udev, VAR_1,
      VAR_2->rxbuf[VAR_3], VAR_2->rxbuf_dma[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_2->nchannels; VAR_3++) {
  struct kvaser_usb_net_priv *VAR_4 = VAR_2->nets[VAR_3];

  if (VAR_4)
   FUNC_0(VAR_4);
 }
}
