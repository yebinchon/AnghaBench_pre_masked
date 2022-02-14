
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct net_device {int dummy; } ;
struct hso_net {void* mux_bulk_tx_buf; void* mux_bulk_tx_urb; void** mux_bulk_rx_buf_pool; void** mux_bulk_rx_urb_pool; void* out_endp; void* in_endp; struct hso_device* parent; struct net_device* net; } ;
struct TYPE_2__ {struct hso_net* dev_net; } ;
struct hso_device {TYPE_1__ port_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct hso_device*) ;
 struct net_device* FUNC_3 (int,char*,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 struct hso_device* FUNC_5 (struct usb_interface*,int) ;
 int FUNC_6 (struct hso_device*,struct usb_interface*) ;
 int FUNC_7 (struct hso_device*) ;
 void* FUNC_8 (struct usb_interface*,int ,int ) ;
 int FUNC_9 (struct hso_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_10 (int ,int ) ;
 struct hso_net* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 void* FUNC_13 (int ,int ) ;

__attribute__((used)) static struct hso_device *FUNC_14(struct usb_interface *VAR_10,
      int VAR_11)
{
 int VAR_12, VAR_13;
 struct net_device *VAR_14;
 struct hso_net *VAR_15;
 struct hso_device *VAR_16;

 VAR_16 = FUNC_5(VAR_10, VAR_11);
 if (!VAR_16)
  return ((void*)0);



 VAR_14 = FUNC_3(sizeof(struct hso_net), "hso%d", VAR_4,
      VAR_8);
 if (!VAR_14) {
  FUNC_4(&VAR_10->dev, "Unable to create ethernet device\n");
  goto exit;
 }

 VAR_15 = FUNC_11(VAR_14);

 VAR_16->port_data.dev_net = VAR_15;
 VAR_15->net = VAR_14;
 VAR_15->parent = VAR_16;

 VAR_15->in_endp = FUNC_8(VAR_10, VAR_7,
          VAR_5);
 if (!VAR_15->in_endp) {
  FUNC_4(&VAR_10->dev, "Can't find BULK IN endpoint\n");
  goto exit;
 }
 VAR_15->out_endp = FUNC_8(VAR_10, VAR_7,
           VAR_6);
 if (!VAR_15->out_endp) {
  FUNC_4(&VAR_10->dev, "Can't find BULK OUT endpoint\n");
  goto exit;
 }
 FUNC_0(VAR_14, &VAR_10->dev);
 FUNC_1(VAR_14, &VAR_9);


 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_15->mux_bulk_rx_urb_pool[VAR_13] = FUNC_13(0, VAR_0);
  if (!VAR_15->mux_bulk_rx_urb_pool[VAR_13])
   goto exit;
  VAR_15->mux_bulk_rx_buf_pool[VAR_13] = FUNC_10(VAR_2,
          VAR_0);
  if (!VAR_15->mux_bulk_rx_buf_pool[VAR_13])
   goto exit;
 }
 VAR_15->mux_bulk_tx_urb = FUNC_13(0, VAR_0);
 if (!VAR_15->mux_bulk_tx_urb)
  goto exit;
 VAR_15->mux_bulk_tx_buf = FUNC_10(VAR_3, VAR_0);
 if (!VAR_15->mux_bulk_tx_buf)
  goto exit;

 FUNC_2(VAR_16);


 VAR_12 = FUNC_12(VAR_14);
 if (VAR_12) {
  FUNC_4(&VAR_10->dev, "Failed to register device\n");
  goto exit;
 }

 FUNC_9(VAR_16);

 FUNC_6(VAR_16, VAR_10);

 return VAR_16;
exit:
 FUNC_7(VAR_16);
 return ((void*)0);
}
