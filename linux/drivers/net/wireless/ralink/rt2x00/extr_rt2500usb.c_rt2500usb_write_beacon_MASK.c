
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct usb_device {int dummy; } ;
struct txentry_desc {int dummy; } ;
struct rt2x00_dev {TYPE_3__* ops; int dev; } ;
struct queue_entry_priv_usb_bcn {int guardian_urb; scalar_t__ guardian_data; int urb; } ;
struct queue_entry {TYPE_4__* skb; TYPE_1__* queue; struct queue_entry_priv_usb_bcn* priv_data; } ;
struct TYPE_8__ {scalar_t__* data; } ;
struct TYPE_7__ {TYPE_2__* lib; } ;
struct TYPE_6__ {int (* get_tx_data_len ) (struct queue_entry*) ;} ;
struct TYPE_5__ {int usb_endpoint; struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__*,int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (struct queue_entry*,struct txentry_desc*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct rt2x00_dev*,int ,struct queue_entry*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (struct queue_entry*) ;
 struct usb_device* FUNC_8 (int ) ;
 int FUNC_9 (int ,struct usb_device*,int,scalar_t__*,int,int ,struct queue_entry*) ;
 int FUNC_10 (struct usb_device*,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(struct queue_entry *VAR_8,
       struct txentry_desc *VAR_9)
{
 struct rt2x00_dev *VAR_10 = VAR_8->queue->rt2x00dev;
 struct usb_device *VAR_11 = FUNC_8(VAR_10->dev);
 struct queue_entry_priv_usb_bcn *VAR_12 = VAR_8->priv_data;
 int VAR_13 = FUNC_10(VAR_11, VAR_8->queue->usb_endpoint);
 int VAR_14;
 u16 VAR_15, VAR_16;





 VAR_15 = FUNC_1(VAR_10, VAR_3);
 FUNC_4(&VAR_15, VAR_4, 0);
 FUNC_2(VAR_10, VAR_3, VAR_15);




 FUNC_6(VAR_8->skb, VAR_2);
 FUNC_0(VAR_8->skb->data, 0, VAR_2);




 FUNC_3(VAR_8, VAR_9);




 FUNC_5(VAR_10, VAR_0, VAR_8);






 VAR_14 = VAR_10->ops->lib->get_tx_data_len(VAR_8);

 FUNC_9(VAR_12->urb, VAR_11, VAR_13,
     VAR_8->skb->data, VAR_14, VAR_7,
     VAR_8);






 VAR_12->guardian_data = 0;
 FUNC_9(VAR_12->guardian_urb, VAR_11, VAR_13,
     &VAR_12->guardian_data, 1, VAR_7,
     VAR_8);




 FUNC_11(VAR_12->guardian_urb, VAR_1);




 FUNC_4(&VAR_15, VAR_6, 1);
 FUNC_4(&VAR_15, VAR_5, 1);
 VAR_16 = VAR_15;
 FUNC_4(&VAR_15, VAR_4, 1);







 FUNC_2(VAR_10, VAR_3, VAR_15);
 FUNC_2(VAR_10, VAR_3, VAR_16);
 FUNC_2(VAR_10, VAR_3, VAR_15);
 FUNC_2(VAR_10, VAR_3, VAR_16);
 FUNC_2(VAR_10, VAR_3, VAR_15);
}
