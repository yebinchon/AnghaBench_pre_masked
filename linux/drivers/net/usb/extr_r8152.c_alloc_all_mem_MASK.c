
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {struct usb_host_endpoint* endpoint; } ;
struct TYPE_6__ {scalar_t__ bInterval; } ;
struct usb_host_endpoint {TYPE_3__ desc; } ;
struct urb {int dummy; } ;
struct r8152 {int intr_interval; int intr_buff; int udev; void* intr_urb; int tx_free; TYPE_2__* tx_info; int rx_count; int rx_queue; int tx_queue; int rx_done; int rx_info; int tx_lock; int rx_lock; struct usb_interface* intf; struct net_device* netdev; } ;
struct TYPE_4__ {scalar_t__ parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct TYPE_5__ {int list; int * head; int * buffer; struct urb* urb; struct r8152* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct r8152*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct r8152*) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 void* FUNC_12 (int ,int ) ;
 int FUNC_13 (void*,int ,int ,int ,int ,int ,struct r8152*,int) ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static int FUNC_15(struct r8152 *VAR_8)
{
 struct net_device *VAR_9 = VAR_8->netdev;
 struct usb_interface *VAR_10 = VAR_8->intf;
 struct usb_host_interface *VAR_11 = VAR_10->cur_altsetting;
 struct usb_host_endpoint *VAR_12 = VAR_11->endpoint + 2;
 int VAR_13, VAR_14;

 VAR_13 = VAR_9->dev.parent ? FUNC_3(VAR_9->dev.parent) : -1;

 FUNC_10(&VAR_8->rx_lock);
 FUNC_10(&VAR_8->tx_lock);
 FUNC_0(&VAR_8->rx_info);
 FUNC_0(&VAR_8->tx_free);
 FUNC_0(&VAR_8->rx_done);
 FUNC_9(&VAR_8->tx_queue);
 FUNC_9(&VAR_8->rx_queue);
 FUNC_2(&VAR_8->rx_count, 0);

 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  if (!FUNC_1(VAR_8, VAR_1))
   goto err1;
 }

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  struct urb *VAR_15;
  u8 *VAR_16;

  VAR_16 = FUNC_7(VAR_6, VAR_1, VAR_13);
  if (!VAR_16)
   goto err1;

  if (VAR_16 != FUNC_11(VAR_16)) {
   FUNC_5(VAR_16);
   VAR_16 = FUNC_7(VAR_6 + VAR_5, VAR_1,
        VAR_13);
   if (!VAR_16)
    goto err1;
  }

  VAR_15 = FUNC_12(0, VAR_1);
  if (!VAR_15) {
   FUNC_5(VAR_16);
   goto err1;
  }

  FUNC_0(&VAR_8->tx_info[VAR_14].list);
  VAR_8->tx_info[VAR_14].context = VAR_8;
  VAR_8->tx_info[VAR_14].urb = VAR_15;
  VAR_8->tx_info[VAR_14].buffer = VAR_16;
  VAR_8->tx_info[VAR_14].head = FUNC_11(VAR_16);

  FUNC_8(&VAR_8->tx_info[VAR_14].list, &VAR_8->tx_free);
 }

 VAR_8->intr_urb = FUNC_12(0, VAR_1);
 if (!VAR_8->intr_urb)
  goto err1;

 VAR_8->intr_buff = FUNC_6(VAR_2, VAR_1);
 if (!VAR_8->intr_buff)
  goto err1;

 VAR_8->intr_interval = (int)VAR_12->desc.bInterval;
 FUNC_13(VAR_8->intr_urb, VAR_8->udev, FUNC_14(VAR_8->udev, 3),
    VAR_8->intr_buff, VAR_2, VAR_7,
    VAR_8, VAR_8->intr_interval);

 return 0;

err1:
 FUNC_4(VAR_8);
 return -VAR_0;
}
