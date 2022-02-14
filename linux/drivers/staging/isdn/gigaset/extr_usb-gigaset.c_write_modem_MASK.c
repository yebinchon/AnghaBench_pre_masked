
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_cardstate {int busy; int bulk_out_urb; int bulk_out_buffer; int bulk_out_epnum; int udev; scalar_t__ bulk_out_size; } ;
struct TYPE_6__ {struct usb_cardstate* usb; } ;
struct cardstate {int dev; int lock; scalar_t__ connected; TYPE_1__ hw; struct bc_state* bcs; } ;
struct bc_state {TYPE_2__* tx_skb; } ;
struct TYPE_7__ {unsigned long len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,unsigned long) ;
 int FUNC_3 (struct bc_state*,TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_4 (unsigned long,unsigned int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int ,int ,int ,int,int ,struct cardstate*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct cardstate *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 struct bc_state *VAR_9 = &VAR_6->bcs[0];
 struct usb_cardstate *VAR_10 = VAR_6->hw.usb;
 unsigned long VAR_11;

 FUNC_2(VAR_1, "len: %d...", VAR_9->tx_skb->len);

 if (!VAR_9->tx_skb->len) {
  FUNC_1(VAR_9->tx_skb);
  VAR_9->tx_skb = ((void*)0);
  return -VAR_2;
 }


 VAR_8 = FUNC_4(VAR_9->tx_skb->len, (unsigned) VAR_10->bulk_out_size);
 FUNC_5(VAR_9->tx_skb, VAR_10->bulk_out_buffer, VAR_8);
 FUNC_6(VAR_9->tx_skb, VAR_8);
 VAR_10->busy = 1;
 FUNC_2(VAR_1, "write_modem: send %d bytes", VAR_8);

 FUNC_7(&VAR_6->lock, VAR_11);
 if (VAR_6->connected) {
  FUNC_9(VAR_10->bulk_out_urb, VAR_10->udev,
      FUNC_10(VAR_10->udev,
        VAR_10->bulk_out_epnum),
      VAR_10->bulk_out_buffer, VAR_8,
      VAR_5, VAR_6);
  VAR_7 = FUNC_11(VAR_10->bulk_out_urb, VAR_4);
 } else {
  VAR_7 = -VAR_3;
 }
 FUNC_8(&VAR_6->lock, VAR_11);

 if (VAR_7) {
  FUNC_0(VAR_6->dev, "could not submit urb (error %d)\n", -VAR_7);
  VAR_10->busy = 0;
 }

 if (!VAR_9->tx_skb->len) {

  FUNC_3(VAR_9, VAR_9->tx_skb);

  FUNC_2(VAR_0, "kfree skb (Adr: %lx)!",
   (unsigned long) VAR_9->tx_skb);
  FUNC_1(VAR_9->tx_skb);
  VAR_9->tx_skb = ((void*)0);
 }

 return VAR_7;
}
