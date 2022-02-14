
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct virtio_net_hdr {int flags; void* proto; scalar_t__ hdr_len; scalar_t__ csum_offset; scalar_t__ csum_start; int member_0; int member_1; } ;
struct ubuf_info {int (* callback ) (struct ubuf_info*,int) ;} ;
struct tun_struct {size_t align; int flags; int numqueues; TYPE_6__* pcpu_stats; TYPE_7__* dev; int steering_prog; int xdp_prog; int vnet_hdr_sz; } ;
struct tun_pi {int flags; void* proto; scalar_t__ hdr_len; scalar_t__ csum_offset; scalar_t__ csum_start; int member_0; int member_1; } ;
struct tun_pcpu_stats {size_t rx_bytes; int syncp; int rx_packets; } ;
struct TYPE_11__ {int * skb; } ;
struct sk_buff_head {int lock; } ;
struct TYPE_9__ {struct sk_buff_head sk_write_queue; } ;
struct tun_file {TYPE_3__ napi; TYPE_1__ sk; scalar_t__ napi_enabled; int napi_mutex; int detached; } ;
struct sk_buff {int* data; void* protocol; TYPE_7__* dev; int len; } ;
struct iov_iter {int dummy; } ;
struct bpf_prog {int dummy; } ;
typedef size_t ssize_t ;
typedef int pi ;
typedef int gso ;
struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {int rx_dropped; int rx_frame_errors; } ;
struct TYPE_10__ {int tx_flags; void* destructor_arg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 size_t FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (size_t) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (int) ;
 int VAR_21 ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_8 (struct virtio_net_hdr*,int,struct iov_iter*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct tun_struct*,int) ;
 int FUNC_11 (struct bpf_prog*,struct sk_buff*) ;
 scalar_t__ FUNC_12 (TYPE_7__*,int*,scalar_t__) ;
 void* FUNC_13 (struct sk_buff*,TYPE_7__*) ;
 struct tun_pcpu_stats* FUNC_14 (TYPE_6__*) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (struct iov_iter*,int) ;
 size_t FUNC_17 (struct iov_iter*) ;
 scalar_t__ FUNC_18 (struct iov_iter*,int ) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (TYPE_3__*) ;
 int FUNC_25 (TYPE_3__*) ;
 int FUNC_26 (TYPE_3__*) ;
 int FUNC_27 (struct sk_buff*) ;
 int FUNC_28 (struct tun_pcpu_stats*) ;
 int FUNC_29 (int ) ;
 struct bpf_prog* FUNC_30 (int ) ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 (struct sk_buff*,int ,struct iov_iter*,size_t) ;
 scalar_t__ FUNC_34 (struct sk_buff*) ;
 int FUNC_35 (struct sk_buff*) ;
 int FUNC_36 (struct sk_buff_head*) ;
 int FUNC_37 (struct sk_buff*) ;
 int FUNC_38 (struct sk_buff*) ;
 TYPE_2__* FUNC_39 (struct sk_buff*) ;
 int FUNC_40 (int *) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (struct ubuf_info*,int) ;
 int FUNC_43 (int ) ;
 int FUNC_44 (struct tun_struct*,scalar_t__) ;
 struct sk_buff* FUNC_45 (struct tun_file*,size_t,int,size_t,int) ;
 struct sk_buff* FUNC_46 (struct tun_struct*,struct tun_file*,struct iov_iter*,struct virtio_net_hdr*,size_t,int*) ;
 scalar_t__ FUNC_47 (struct tun_struct*,struct tun_file*,size_t,int,int) ;
 int FUNC_48 (struct tun_struct*,scalar_t__,struct tun_file*) ;
 int FUNC_49 (struct tun_struct*) ;
 struct sk_buff* FUNC_50 (struct tun_file*,int,struct iov_iter*) ;
 int FUNC_51 (struct tun_file*) ;
 int FUNC_52 (struct tun_struct*,struct tun_file*,struct sk_buff*,int) ;
 int FUNC_53 (int *) ;
 int FUNC_54 (int *) ;
 scalar_t__ FUNC_55 (int) ;
 scalar_t__ FUNC_56 (struct sk_buff*,struct virtio_net_hdr*,int ) ;
 int FUNC_57 (struct sk_buff*,struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_58(struct tun_struct *VAR_22, struct tun_file *VAR_23,
       void *VAR_24, struct iov_iter *VAR_25,
       int VAR_26, bool VAR_27)
{
 struct tun_pi VAR_28 = { 0, FUNC_9(VAR_7) };
 struct sk_buff *VAR_29;
 size_t VAR_30 = FUNC_17(VAR_25);
 size_t VAR_31 = VAR_30, VAR_32 = VAR_22->align, VAR_33;
 struct virtio_net_hdr VAR_34 = { 0 };
 struct tun_pcpu_stats *VAR_35;
 int VAR_36;
 int VAR_37;
 bool VAR_38 = 0;
 int VAR_39;
 u32 VAR_40 = 0;
 int VAR_41 = 1;
 bool VAR_42 = FUNC_51(VAR_23);

 if (!(VAR_22->flags & VAR_10)) {
  if (VAR_31 < sizeof(VAR_28))
   return -VAR_3;
  VAR_31 -= sizeof(VAR_28);

  if (!FUNC_8(&VAR_28, sizeof(VAR_28), VAR_25))
   return -VAR_2;
 }

 if (VAR_22->flags & VAR_12) {
  int VAR_43 = FUNC_3(VAR_22->vnet_hdr_sz);

  if (VAR_31 < VAR_43)
   return -VAR_3;
  VAR_31 -= VAR_43;

  if (!FUNC_8(&VAR_34, sizeof(VAR_34), VAR_25))
   return -VAR_2;

  if ((VAR_34.flags & VAR_20) &&
      FUNC_44(VAR_22, VAR_34.csum_start) + FUNC_44(VAR_22, VAR_34.csum_offset) + 2 > FUNC_44(VAR_22, VAR_34.hdr_len))
   VAR_34.hdr_len = FUNC_10(VAR_22, FUNC_44(VAR_22, VAR_34.csum_start) + FUNC_44(VAR_22, VAR_34.csum_offset) + 2);

  if (FUNC_44(VAR_22, VAR_34.hdr_len) > VAR_31)
   return -VAR_3;
  FUNC_16(VAR_25, VAR_43 - sizeof(VAR_34));
 }

 if ((VAR_22->flags & VAR_19) == 129) {
  VAR_32 += VAR_16;
  if (FUNC_55(VAR_31 < VAR_6 ||
        (VAR_34.hdr_len && FUNC_44(VAR_22, VAR_34.hdr_len) < VAR_6)))
   return -VAR_3;
 }

 VAR_36 = FUNC_4(VAR_32);

 if (VAR_24) {
  struct iov_iter VAR_44 = *VAR_25;





  VAR_37 = VAR_34.hdr_len ? FUNC_44(VAR_22, VAR_34.hdr_len) : VAR_9;
  if (VAR_37 > VAR_36)
   VAR_37 = VAR_36;
  VAR_33 = VAR_37;
  FUNC_16(&VAR_44, VAR_37);
  if (FUNC_18(&VAR_44, VAR_13) <= VAR_14)
   VAR_38 = 1;
 }

 if (!VAR_42 && FUNC_47(VAR_22, VAR_23, VAR_31, VAR_26, VAR_38)) {




  VAR_29 = FUNC_46(VAR_22, VAR_23, VAR_25, &VAR_34, VAR_31, &VAR_41);
  if (FUNC_1(VAR_29)) {
   FUNC_43(VAR_22->pcpu_stats->rx_dropped);
   return FUNC_2(VAR_29);
  }
  if (!VAR_29)
   return VAR_30;
 } else {
  if (!VAR_38) {
   VAR_37 = VAR_31;
   if (FUNC_44(VAR_22, VAR_34.hdr_len) > VAR_36)
    VAR_33 = VAR_36;
   else
    VAR_33 = FUNC_44(VAR_22, VAR_34.hdr_len);
  }

  if (VAR_42) {
   FUNC_22(&VAR_23->napi_mutex);
   VAR_29 = FUNC_50(VAR_23, VAR_37, VAR_25);




   VAR_38 = 0;
  } else {
   VAR_29 = FUNC_45(VAR_23, VAR_32, VAR_37, VAR_33,
         VAR_26);
  }

  if (FUNC_1(VAR_29)) {
   if (FUNC_2(VAR_29) != -VAR_1)
    FUNC_43(VAR_22->pcpu_stats->rx_dropped);
   if (VAR_42)
    FUNC_23(&VAR_23->napi_mutex);
   return FUNC_2(VAR_29);
  }

  if (VAR_38)
   VAR_39 = FUNC_57(VAR_29, VAR_25);
  else
   VAR_39 = FUNC_33(VAR_29, 0, VAR_25, VAR_31);

  if (VAR_39) {
   VAR_39 = -VAR_2;
drop:
   FUNC_43(VAR_22->pcpu_stats->rx_dropped);
   FUNC_19(VAR_29);
   if (VAR_42) {
    VAR_23->napi.skb = ((void*)0);
    FUNC_23(&VAR_23->napi_mutex);
   }

   return VAR_39;
  }
 }

 if (FUNC_56(VAR_29, &VAR_34, FUNC_49(VAR_22))) {
  FUNC_43(VAR_22->pcpu_stats->rx_frame_errors);
  FUNC_19(VAR_29);
  if (VAR_42) {
   VAR_23->napi.skb = ((void*)0);
   FUNC_23(&VAR_23->napi_mutex);
  }

  return -VAR_3;
 }

 switch (VAR_22->flags & VAR_19) {
 case 128:
  if (VAR_22->flags & VAR_10) {
   u8 VAR_45 = VAR_29->len ? (VAR_29->data[0] >> 4) : 0;

   switch (VAR_45) {
   case 4:
    VAR_28.proto = FUNC_15(VAR_7);
    break;
   case 6:
    VAR_28.proto = FUNC_15(VAR_8);
    break;
   default:
    FUNC_43(VAR_22->pcpu_stats->rx_dropped);
    FUNC_19(VAR_29);
    return -VAR_3;
   }
  }

  FUNC_37(VAR_29);
  VAR_29->protocol = VAR_28.proto;
  VAR_29->dev = VAR_22->dev;
  break;
 case 129:
  if (!VAR_42)
   VAR_29->protocol = FUNC_13(VAR_29, VAR_22->dev);
  break;
 }


 if (VAR_38) {
  FUNC_39(VAR_29)->destructor_arg = VAR_24;
  FUNC_39(VAR_29)->tx_flags |= VAR_17;
  FUNC_39(VAR_29)->tx_flags |= VAR_18;
 } else if (VAR_24) {
  struct ubuf_info *VAR_46 = VAR_24;
  VAR_46->callback(VAR_46, 0);
 }

 FUNC_38(VAR_29);
 FUNC_35(VAR_29);

 if (VAR_41) {
  struct bpf_prog *VAR_47;
  int VAR_48;

  FUNC_20();
  FUNC_31();
  VAR_47 = FUNC_30(VAR_22->xdp_prog);
  if (VAR_47) {
   VAR_48 = FUNC_11(VAR_47, VAR_29);
   if (VAR_48 != VAR_21) {
    FUNC_32();
    FUNC_21();
    return VAR_30;
   }
  }
  FUNC_32();
  FUNC_21();
 }





 if (!FUNC_29(VAR_22->steering_prog) && VAR_22->numqueues > 1 &&
     !VAR_23->detached)
  VAR_40 = FUNC_6(VAR_29);

 FUNC_31();
 if (FUNC_55(!(VAR_22->dev->flags & VAR_11))) {
  VAR_39 = -VAR_4;
  FUNC_32();
  goto drop;
 }

 if (VAR_42) {

  u32 VAR_49 = FUNC_12(VAR_22->dev, VAR_29->data,
           FUNC_34(VAR_29));

  if (FUNC_55(VAR_49 > FUNC_34(VAR_29))) {
   FUNC_43(VAR_22->pcpu_stats->rx_dropped);
   FUNC_24(&VAR_23->napi);
   FUNC_32();
   FUNC_23(&VAR_23->napi_mutex);
   FUNC_5(1);
   return -VAR_5;
  }

  FUNC_20();
  FUNC_25(&VAR_23->napi);
  FUNC_21();
  FUNC_23(&VAR_23->napi_mutex);
 } else if (VAR_23->napi_enabled) {
  struct sk_buff_head *VAR_50 = &VAR_23->sk.sk_write_queue;
  int VAR_51;

  FUNC_40(&VAR_50->lock);
  FUNC_7(VAR_50, VAR_29);
  VAR_51 = FUNC_36(VAR_50);
  FUNC_41(&VAR_50->lock);

  if (!VAR_27 || VAR_51 > VAR_15)
   FUNC_26(&VAR_23->napi);

  FUNC_21();
 } else if (!FUNC_0(VAR_0)) {
  FUNC_52(VAR_22, VAR_23, VAR_29, VAR_27);
 } else {
  FUNC_27(VAR_29);
 }
 FUNC_32();

 VAR_35 = FUNC_14(VAR_22->pcpu_stats);
 FUNC_53(&VAR_35->syncp);
 VAR_35->rx_packets++;
 VAR_35->rx_bytes += VAR_31;
 FUNC_54(&VAR_35->syncp);
 FUNC_28(VAR_35);

 if (VAR_40)
  FUNC_48(VAR_22, VAR_40, VAR_23);

 return VAR_30;
}
