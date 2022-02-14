
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct usb_device {int dummy; } ;
struct sk_buff {int len; int data; } ;
struct mt7601u_tx_queue {int entries; int used; size_t end; struct mt7601u_dma_buf_tx* e; } ;
struct mt7601u_dma_buf_tx {int urb; struct sk_buff* skb; } ;
struct mt7601u_dev {int tx_lock; int hw; int dev; int state; struct mt7601u_tx_queue* tx_q; int * out_eps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 struct usb_device* FUNC_3 (struct mt7601u_dev*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,struct usb_device*,unsigned int,int ,int ,int ,struct mt7601u_tx_queue*) ;
 unsigned int FUNC_9 (struct usb_device*,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct mt7601u_dev *VAR_5,
     struct sk_buff *VAR_6, u8 VAR_7)
{
 struct usb_device *VAR_8 = FUNC_3(VAR_5);
 unsigned VAR_9 = FUNC_9(VAR_8, VAR_5->out_eps[VAR_7]);
 struct mt7601u_dma_buf_tx *VAR_10;
 struct mt7601u_tx_queue *VAR_11 = &VAR_5->tx_q[VAR_7];
 unsigned long VAR_12;
 int VAR_13;

 FUNC_6(&VAR_5->tx_lock, VAR_12);

 if (FUNC_0(VAR_11->entries <= VAR_11->used)) {
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_10 = &VAR_11->e[VAR_11->end];
 VAR_10->skb = VAR_6;
 FUNC_8(VAR_10->urb, VAR_8, VAR_9, VAR_6->data, VAR_6->len,
     VAR_4, VAR_11);
 VAR_13 = FUNC_10(VAR_10->urb, VAR_2);
 if (VAR_13) {



  if (VAR_13 == -VAR_0)
   FUNC_4(VAR_3, &VAR_5->state);
  else
   FUNC_1(VAR_5->dev, "Error: TX urb submit failed:%d\n",
    VAR_13);
  goto out;
 }

 VAR_11->end = (VAR_11->end + 1) % VAR_11->entries;
 VAR_11->used++;

 if (VAR_11->used >= VAR_11->entries)
  FUNC_2(VAR_5->hw, FUNC_5(VAR_6));
out:
 FUNC_7(&VAR_5->tx_lock, VAR_12);

 return VAR_13;
}
