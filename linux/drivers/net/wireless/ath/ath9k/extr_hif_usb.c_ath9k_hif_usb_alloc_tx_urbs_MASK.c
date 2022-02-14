
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_buf {struct tx_buf* buf; int list; int skb_queue; struct hif_device_usb* hif_dev; int urb; } ;
struct TYPE_2__ {int tx_buf_cnt; int tx_buf; int tx_skb_queue; int tx_lock; int tx_pending; } ;
struct hif_device_usb {TYPE_1__ tx; int mgmt_submitted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hif_device_usb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tx_buf*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct hif_device_usb *VAR_4)
{
 struct tx_buf *VAR_5;
 int VAR_6;

 FUNC_0(&VAR_4->tx.tx_buf);
 FUNC_0(&VAR_4->tx.tx_pending);
 FUNC_7(&VAR_4->tx.tx_lock);
 FUNC_1(&VAR_4->tx.tx_skb_queue);
 FUNC_3(&VAR_4->mgmt_submitted);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = FUNC_5(sizeof(struct tx_buf), VAR_1);
  if (!VAR_5)
   goto err;

  VAR_5->buf = FUNC_5(VAR_2, VAR_1);
  if (!VAR_5->buf)
   goto err;

  VAR_5->urb = FUNC_8(0, VAR_1);
  if (!VAR_5->urb)
   goto err;

  VAR_5->hif_dev = VAR_4;
  FUNC_1(&VAR_5->skb_queue);

  FUNC_6(&VAR_5->list, &VAR_4->tx.tx_buf);
 }

 VAR_4->tx.tx_buf_cnt = VAR_3;

 return 0;
err:
 if (VAR_5) {
  FUNC_4(VAR_5->buf);
  FUNC_4(VAR_5);
 }
 FUNC_2(VAR_4);
 return -VAR_0;
}
