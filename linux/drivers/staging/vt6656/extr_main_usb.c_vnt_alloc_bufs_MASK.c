
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnt_usb_send_context {int pkt_no; int in_use; void* urb; struct vnt_private* priv; } ;
struct vnt_rcb {int in_use; int skb; void* urb; struct vnt_private* priv; } ;
struct TYPE_2__ {void* data_buf; } ;
struct vnt_private {int num_tx_context; int num_rcb; void* interrupt_urb; TYPE_1__ int_buf; int rx_buf_sz; struct vnt_rcb** rcb; struct vnt_usb_send_context** tx_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ) ;
 struct vnt_rcb* FUNC_2 (int,int ) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct vnt_private*) ;
 int FUNC_6 (struct vnt_private*) ;
 int FUNC_7 (struct vnt_private*,struct vnt_rcb*) ;

__attribute__((used)) static int FUNC_8(struct vnt_private *VAR_3)
{
 int VAR_4 = 0;
 struct vnt_usb_send_context *VAR_5;
 struct vnt_rcb *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->num_tx_context; VAR_7++) {
  VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
  if (!VAR_5) {
   VAR_4 = -VAR_0;
   goto free_tx;
  }

  VAR_3->tx_context[VAR_7] = VAR_5;
  VAR_5->priv = VAR_3;
  VAR_5->pkt_no = VAR_7;


  VAR_5->urb = FUNC_3(0, VAR_1);
  if (!VAR_5->urb) {
   VAR_4 = -VAR_0;
   goto free_tx;
  }

  VAR_5->in_use = 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->num_rcb; VAR_7++) {
  VAR_3->rcb[VAR_7] = FUNC_2(sizeof(*VAR_3->rcb[VAR_7]), VAR_1);
  if (!VAR_3->rcb[VAR_7]) {
   VAR_4 = -VAR_0;
   goto free_rx_tx;
  }

  VAR_6 = VAR_3->rcb[VAR_7];

  VAR_6->priv = VAR_3;


  VAR_6->urb = FUNC_3(0, VAR_1);
  if (!VAR_6->urb) {
   VAR_4 = -VAR_0;
   goto free_rx_tx;
  }

  VAR_6->skb = FUNC_0(VAR_3->rx_buf_sz);
  if (!VAR_6->skb) {
   VAR_4 = -VAR_0;
   goto free_rx_tx;
  }

  VAR_6->in_use = 0;


  VAR_4 = FUNC_7(VAR_3, VAR_6);
  if (VAR_4)
   goto free_rx_tx;
 }

 VAR_3->interrupt_urb = FUNC_3(0, VAR_1);
 if (!VAR_3->interrupt_urb) {
  VAR_4 = -VAR_0;
  goto free_rx_tx;
 }

 VAR_3->int_buf.data_buf = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3->int_buf.data_buf) {
  VAR_4 = -VAR_0;
  goto free_rx_tx_urb;
 }

 return 0;

free_rx_tx_urb:
 FUNC_4(VAR_3->interrupt_urb);
free_rx_tx:
 FUNC_5(VAR_3);
free_tx:
 FUNC_6(VAR_3);
 return VAR_4;
}
