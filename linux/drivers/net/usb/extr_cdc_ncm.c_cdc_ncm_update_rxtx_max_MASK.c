
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct usbnet {scalar_t__ rx_urb_size; int hard_mtu; int out; int udev; int net; TYPE_4__* intf; scalar_t__* data; } ;
struct TYPE_10__ {int dwNtbOutMaxSize; } ;
struct cdc_ncm_ctx {int rx_max; int tx_max; int min_tx_pkt; int * tx_curr_skb; TYPE_5__ ncm_parm; TYPE_3__* control; } ;
typedef int __le32 ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_6__ {int bInterfaceNumber; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usbnet*,int) ;
 int FUNC_1 (struct usbnet*,int) ;
 int FUNC_2 (int ,int,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct usbnet*) ;
 int FUNC_14 (struct usbnet*) ;
 scalar_t__ FUNC_15 (struct usbnet*,int ,int,int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_16(struct usbnet *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct cdc_ncm_ctx *VAR_9 = (struct cdc_ncm_ctx *)VAR_6->data[0];
 u8 VAR_10 = VAR_9->control->cur_altsetting->desc.bInterfaceNumber;
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_6, VAR_7);


 if (VAR_11 != VAR_9->rx_max) {
  __le32 VAR_12 = FUNC_3(VAR_11);

  FUNC_5(&VAR_6->intf->dev, "setting rx_max = %u\n", VAR_11);


  if (FUNC_15(VAR_6, VAR_1,
         VAR_4 | VAR_2
         | VAR_3,
         0, VAR_10, &VAR_12, 4) < 0)
   FUNC_4(&VAR_6->intf->dev, "Setting NTB Input Size failed\n");
  else
   VAR_9->rx_max = VAR_11;
 }


 if (VAR_6->rx_urb_size != VAR_9->rx_max) {
  VAR_6->rx_urb_size = VAR_9->rx_max;
  if (FUNC_8(VAR_6->net))
   FUNC_13(VAR_6);
 }

 VAR_11 = FUNC_1(VAR_6, VAR_8);
 if (VAR_11 != VAR_9->tx_max)
  FUNC_5(&VAR_6->intf->dev, "setting tx_max = %u\n", VAR_11);
 if (VAR_11 != FUNC_7(VAR_9->ncm_parm.dwNtbOutMaxSize) &&
     VAR_11 % FUNC_11(VAR_6->udev, VAR_6->out, 1) == 0)
  VAR_11++;


 if (FUNC_8(VAR_6->net) && VAR_11 > VAR_9->tx_max) {
  FUNC_9(VAR_6->net);
  FUNC_12(((void*)0), VAR_6->net);

  if (VAR_9->tx_curr_skb) {
   FUNC_6(VAR_9->tx_curr_skb);
   VAR_9->tx_curr_skb = ((void*)0);
  }
  VAR_9->tx_max = VAR_11;
  FUNC_10(VAR_6->net);
 } else {
  VAR_9->tx_max = VAR_11;
 }

 VAR_6->hard_mtu = VAR_9->tx_max;


 FUNC_14(VAR_6);


 VAR_9->min_tx_pkt = FUNC_2(VAR_5, VAR_9->tx_max - 3 * FUNC_11(VAR_6->udev, VAR_6->out, 1),
      VAR_0, VAR_9->tx_max);
}
