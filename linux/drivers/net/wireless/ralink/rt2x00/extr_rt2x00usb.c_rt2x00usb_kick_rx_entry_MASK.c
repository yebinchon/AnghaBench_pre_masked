
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct rt2x00_dev {int flags; int dev; } ;
struct queue_entry_priv_usb {int urb; } ;
struct queue_entry {int flags; TYPE_2__* skb; TYPE_1__* queue; struct queue_entry_priv_usb* priv_data; } ;
struct TYPE_4__ {int len; int data; } ;
struct TYPE_3__ {int usb_endpoint; struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct queue_entry*) ;
 int FUNC_2 (struct queue_entry*) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*,int) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 struct usb_device* FUNC_6 (int ) ;
 int FUNC_7 (int ,struct usb_device*,int ,int ,int ,int ,struct queue_entry*) ;
 int FUNC_8 (struct usb_device*,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static bool FUNC_10(struct queue_entry *VAR_5, void *VAR_6)
{
 struct rt2x00_dev *VAR_7 = VAR_5->queue->rt2x00dev;
 struct usb_device *VAR_8 = FUNC_6(VAR_7->dev);
 struct queue_entry_priv_usb *VAR_9 = VAR_5->priv_data;
 int VAR_10;

 if (FUNC_5(VAR_2, &VAR_5->flags))
  return 0;

 FUNC_2(VAR_5);

 FUNC_7(VAR_9->urb, VAR_8,
     FUNC_8(VAR_8, VAR_5->queue->usb_endpoint),
     VAR_5->skb->data, VAR_5->skb->len,
     VAR_4, VAR_5);

 VAR_10 = FUNC_9(VAR_9->urb, VAR_3);
 if (VAR_10) {
  if (FUNC_3(VAR_7, VAR_10))
   FUNC_0(VAR_0, &VAR_7->flags);
  FUNC_4(VAR_1, &VAR_5->flags);
  FUNC_1(VAR_5);
 }

 return 0;
}
