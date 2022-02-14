
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct usb_device {int dummy; } ;
struct rt2x00_dev {int flags; TYPE_2__* ops; int dev; } ;
struct queue_entry_priv_usb {int urb; } ;
struct queue_entry {int flags; TYPE_4__* skb; TYPE_3__* queue; struct queue_entry_priv_usb* priv_data; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_7__ {int usb_endpoint; struct rt2x00_dev* rt2x00dev; } ;
struct TYPE_6__ {TYPE_1__* lib; } ;
struct TYPE_5__ {int (* get_tx_data_len ) (struct queue_entry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*,char*) ;
 int FUNC_2 (struct queue_entry*) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*,int) ;
 int VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (struct queue_entry*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 struct usb_device* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,struct usb_device*,int ,int ,int ,int ,struct queue_entry*) ;
 int FUNC_12 (struct usb_device*,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static bool FUNC_14(struct queue_entry *VAR_6, void *VAR_7)
{
 struct rt2x00_dev *VAR_8 = VAR_6->queue->rt2x00dev;
 struct usb_device *VAR_9 = FUNC_9(VAR_8->dev);
 struct queue_entry_priv_usb *VAR_10 = VAR_6->priv_data;
 u32 VAR_11;
 int VAR_12;

 if (!FUNC_7(VAR_2, &VAR_6->flags) ||
     FUNC_8(VAR_3, &VAR_6->flags))
  return 0;






 VAR_11 = VAR_8->ops->lib->get_tx_data_len(VAR_6);

 VAR_12 = FUNC_5(VAR_6->skb, VAR_11);
 if (FUNC_10(VAR_12)) {

  FUNC_1(VAR_8, "TX SKB padding error, out of memory\n");
  FUNC_4(VAR_1, &VAR_6->flags);
  FUNC_2(VAR_6);

  return 0;
 }

 FUNC_11(VAR_10->urb, VAR_9,
     FUNC_12(VAR_9, VAR_6->queue->usb_endpoint),
     VAR_6->skb->data, VAR_11,
     VAR_5, VAR_6);

 VAR_12 = FUNC_13(VAR_10->urb, VAR_4);
 if (VAR_12) {
  if (FUNC_3(VAR_8, VAR_12))
   FUNC_0(VAR_0, &VAR_8->flags);
  FUNC_4(VAR_1, &VAR_6->flags);
  FUNC_2(VAR_6);
 }

 return 0;
}
