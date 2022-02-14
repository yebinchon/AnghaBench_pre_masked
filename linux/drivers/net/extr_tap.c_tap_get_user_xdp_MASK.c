
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_buff {struct tun_xdp_hdr* data; struct tun_xdp_hdr* data_end; struct tun_xdp_hdr* data_hard_start; } ;
struct virtio_net_hdr {int dummy; } ;
struct tun_xdp_hdr {int buflen; struct virtio_net_hdr gso; } ;
struct tap_queue {int flags; int tap; int vnet_hdr_sz; } ;
struct tap_dev {int (* count_tx_dropped ) (struct tap_dev*) ;int dev; } ;
struct sk_buff {scalar_t__ protocol; int dev; } ;
struct TYPE_2__ {scalar_t__ h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,scalar_t__,int*) ;
 struct sk_buff* FUNC_2 (struct tun_xdp_hdr*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct tap_dev* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,struct tun_xdp_hdr*) ;
 int FUNC_12 (struct sk_buff*,struct tun_xdp_hdr*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct tap_dev*) ;
 int FUNC_16 (struct tap_queue*) ;
 int FUNC_17 (struct sk_buff*,struct virtio_net_hdr*,int ) ;

__attribute__((used)) static int FUNC_18(struct tap_queue *VAR_5, struct xdp_buff *VAR_6)
{
 struct tun_xdp_hdr *VAR_7 = VAR_6->data_hard_start;
 struct virtio_net_hdr *VAR_8 = &VAR_7->gso;
 int VAR_9 = VAR_7->buflen;
 int VAR_10 = 0;
 struct tap_dev *VAR_11;
 struct sk_buff *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_5->flags & VAR_4)
  VAR_10 = FUNC_0(VAR_5->vnet_hdr_sz);

 VAR_12 = FUNC_2(VAR_6->data_hard_start, VAR_9);
 if (!VAR_12) {
  VAR_13 = -VAR_0;
  goto err;
 }

 FUNC_12(VAR_12, VAR_6->data - VAR_6->data_hard_start);
 FUNC_11(VAR_12, VAR_6->data_end - VAR_6->data);

 FUNC_14(VAR_12, VAR_1);
 FUNC_13(VAR_12);
 VAR_12->protocol = FUNC_4(VAR_12)->h_proto;

 if (VAR_10) {
  VAR_13 = FUNC_17(VAR_12, VAR_8, FUNC_16(VAR_5));
  if (VAR_13)
   goto err_kfree;
 }


 if ((VAR_12->protocol == FUNC_5(VAR_3) ||
      VAR_12->protocol == FUNC_5(VAR_2)) &&
     FUNC_1(VAR_12, VAR_12->protocol, &VAR_14) != 0)
  FUNC_14(VAR_12, VAR_14);

 FUNC_8();
 VAR_11 = FUNC_7(VAR_5->tap);
 if (VAR_11) {
  VAR_12->dev = VAR_11->dev;
  FUNC_10(VAR_12);
  FUNC_3(VAR_12);
 } else {
  FUNC_6(VAR_12);
 }
 FUNC_9();

 return 0;

err_kfree:
 FUNC_6(VAR_12);
err:
 FUNC_8();
 VAR_11 = FUNC_7(VAR_5->tap);
 if (VAR_11 && VAR_11->count_tx_dropped)
  VAR_11->count_tx_dropped(VAR_11);
 FUNC_9();
 return VAR_13;
}
