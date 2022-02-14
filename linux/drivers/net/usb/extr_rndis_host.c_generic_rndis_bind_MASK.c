
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct usbnet {int hard_mtu; int maxpacket; int rx_urb_size; struct net_device* net; TYPE_1__* driver_info; int out; int udev; int data; } ;
struct usb_interface {int dev; } ;
struct rndis_set_c {int dummy; } ;
struct rndis_set {void* msg_len; void* msg_type; void* offset; void* len; void* oid; } ;
struct rndis_query_c {int dummy; } ;
struct rndis_query {int dummy; } ;
typedef void rndis_msg_hdr ;
struct rndis_init_c {int packet_alignment; int max_transfer_size; } ;
struct rndis_init {void* max_transfer_size; void* minor_version; void* major_version; void* msg_len; void* msg_type; } ;
struct rndis_halt {void* msg_len; void* msg_type; void* offset; void* len; void* oid; } ;
struct rndis_data_hdr {int dummy; } ;
struct net_device {int hard_header_len; int mtu; int dev_addr; int * netdev_ops; } ;
struct cdc_state {int * data; } ;
typedef void* __le32 ;
struct TYPE_2__ {scalar_t__ (* early_init ) (struct usbnet*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,unsigned char*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (void**) ;
 int FUNC_11 (struct rndis_set*,int ,int) ;
 int FUNC_12 (struct usbnet*,int ,struct net_device*,char*) ;
 int VAR_17 ;
 int FUNC_13 (struct usbnet*,void*,int ) ;
 int VAR_18 ;
 int FUNC_14 (struct usbnet*,struct usb_interface*,void*,int ,int,void**,int*) ;
 scalar_t__ FUNC_15 (struct usbnet*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (struct usbnet*,struct usb_interface*) ;

int
FUNC_21(struct usbnet *VAR_19, struct usb_interface *VAR_20, int VAR_21)
{
 int VAR_22;
 struct net_device *VAR_23 = VAR_19->net;
 struct cdc_state *VAR_24 = (void *) &VAR_19->data;
 union {
  void *buf;
  struct rndis_msg_hdr *header;
  struct rndis_init *init;
  struct rndis_init_c *init_c;
  struct rndis_query *get;
  struct rndis_query_c *get_c;
  struct rndis_set *set;
  struct rndis_set_c *set_c;
  struct rndis_halt *halt;
 } VAR_25;
 u32 VAR_26;
 __le32 VAR_27, *VAR_28;
 int VAR_29;
 unsigned char *VAR_30;


 VAR_25.buf = FUNC_8(VAR_0, VAR_7);
 if (!VAR_25.buf)
  return -VAR_3;
 VAR_22 = FUNC_20(VAR_19, VAR_20);
 if (VAR_22 < 0)
  goto fail;

 VAR_25.init->msg_type = FUNC_0(VAR_10);
 VAR_25.init->msg_len = FUNC_0(sizeof *VAR_25.init);
 VAR_25.init->major_version = FUNC_0(1);
 VAR_25.init->minor_version = FUNC_0(0);
 VAR_23->hard_header_len += sizeof (struct rndis_data_hdr);
 VAR_19->hard_mtu = VAR_23->mtu + VAR_23->hard_header_len;

 VAR_19->maxpacket = FUNC_18(VAR_19->udev, VAR_19->out, 1);
 if (VAR_19->maxpacket == 0) {
  FUNC_12(VAR_19, VAR_17, VAR_19->net,
     "dev->maxpacket can't be 0\n");
  VAR_22 = -VAR_1;
  goto fail_and_release;
 }

 VAR_19->rx_urb_size = VAR_19->hard_mtu + (VAR_19->maxpacket + 1);
 VAR_19->rx_urb_size &= ~(VAR_19->maxpacket - 1);
 VAR_25.init->max_transfer_size = FUNC_0(VAR_19->rx_urb_size);

 VAR_23->netdev_ops = &VAR_18;

 VAR_22 = FUNC_13(VAR_19, VAR_25.header, VAR_0);
 if (FUNC_16(VAR_22 < 0)) {

  FUNC_2(&VAR_20->dev, "RNDIS init failed, %d\n", VAR_22);
  goto fail_and_release;
 }
 VAR_26 = FUNC_9(VAR_25.init_c->max_transfer_size);
 if (VAR_26 < VAR_19->hard_mtu) {
  if (VAR_26 <= VAR_23->hard_header_len) {
   FUNC_2(&VAR_20->dev,
    "dev can't take %u byte packets (max %u)\n",
    VAR_19->hard_mtu, VAR_26);
   VAR_22 = -VAR_1;
   goto halt_fail_and_release;
  }
  FUNC_3(&VAR_20->dev,
    "dev can't take %u byte packets (max %u), "
    "adjusting MTU to %u\n",
    VAR_19->hard_mtu, VAR_26, VAR_26 - VAR_23->hard_header_len);
  VAR_19->hard_mtu = VAR_26;
  VAR_23->mtu = VAR_19->hard_mtu - VAR_23->hard_header_len;
 }


 FUNC_1(&VAR_20->dev,
  "hard mtu %u (%u from dev), rx buflen %zu, align %d\n",
  VAR_19->hard_mtu, VAR_26, VAR_19->rx_urb_size,
  1 << FUNC_9(VAR_25.init_c->packet_alignment));



 if (VAR_19->driver_info->early_init &&
   VAR_19->driver_info->early_init(VAR_19) != 0)
  goto halt_fail_and_release;


 VAR_28 = ((void*)0);
 VAR_29 = sizeof *VAR_28;
 VAR_22 = FUNC_14(VAR_19, VAR_20, VAR_25.buf,
        VAR_14,
        0, (void **) &VAR_28, &VAR_29);
 if (VAR_22 != 0 || !VAR_28) {

  VAR_27 = FUNC_0(VAR_15);
  VAR_28 = &VAR_27;
 }
 if ((VAR_21 & VAR_6) &&
     FUNC_10(VAR_28) != VAR_16) {
  FUNC_12(VAR_19, VAR_17, VAR_19->net,
     "driver requires wireless physical medium, but device is not\n");
  VAR_22 = -VAR_2;
  goto halt_fail_and_release;
 }
 if ((VAR_21 & VAR_5) &&
     FUNC_10(VAR_28) == VAR_16) {
  FUNC_12(VAR_19, VAR_17, VAR_19->net,
     "driver requires non-wireless physical medium, but device is wireless.\n");
  VAR_22 = -VAR_2;
  goto halt_fail_and_release;
 }


 VAR_29 = VAR_4;
 VAR_22 = FUNC_14(VAR_19, VAR_20, VAR_25.buf,
        VAR_12,
        48, (void **) &VAR_30, &VAR_29);
 if (FUNC_16(VAR_22< 0)) {
  FUNC_2(&VAR_20->dev, "rndis get ethaddr, %d\n", VAR_22);
  goto halt_fail_and_release;
 }

 if (VAR_30[0] & 0x02)
  FUNC_5(VAR_23);
 else
  FUNC_6(VAR_23->dev_addr, VAR_30);


 FUNC_11(VAR_25.set, 0, sizeof *VAR_25.set);
 VAR_25.set->msg_type = FUNC_0(VAR_11);
 VAR_25.set->msg_len = FUNC_0(4 + sizeof *VAR_25.set);
 VAR_25.set->oid = FUNC_0(VAR_13);
 VAR_25.set->len = FUNC_0(4);
 VAR_25.set->offset = FUNC_0((sizeof *VAR_25.set) - 8);
 *(__le32 *)(VAR_25.buf + sizeof *VAR_25.set) = FUNC_0(VAR_8);

 VAR_22 = FUNC_13(VAR_19, VAR_25.header, VAR_0);
 if (FUNC_16(VAR_22 < 0)) {
  FUNC_2(&VAR_20->dev, "rndis set packet filter, %d\n", VAR_22);
  goto halt_fail_and_release;
 }

 VAR_22 = 0;

 FUNC_7(VAR_25.buf);
 return VAR_22;

halt_fail_and_release:
 FUNC_11(VAR_25.halt, 0, sizeof *VAR_25.halt);
 VAR_25.halt->msg_type = FUNC_0(VAR_9);
 VAR_25.halt->msg_len = FUNC_0(sizeof *VAR_25.halt);
 (void) FUNC_13(VAR_19, (void *)VAR_25.halt, VAR_0);
fail_and_release:
 FUNC_19(VAR_24->data, ((void*)0));
 FUNC_17(FUNC_4(VAR_20), VAR_24->data);
 VAR_24->data = ((void*)0);
fail:
 FUNC_7(VAR_25.buf);
 return VAR_22;
}
