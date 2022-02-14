
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vnet_hdr ;
struct virtio_net_hdr {int flags; scalar_t__ hdr_len; scalar_t__ csum_offset; scalar_t__ csum_start; int member_0; } ;
struct ubuf_info {int (* callback ) (struct ubuf_info*,int) ;} ;
struct tap_queue {int flags; int tap; int sk; int vnet_hdr_sz; } ;
struct tap_dev {int (* count_tx_dropped ) (struct tap_dev*) ;int dev; } ;
struct sk_buff {scalar_t__ protocol; int dev; } ;
struct iov_iter {int dummy; } ;
typedef unsigned long ssize_t ;
struct TYPE_4__ {scalar_t__ h_proto; } ;
struct TYPE_3__ {int tx_flags; void* destructor_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (struct sk_buff*,scalar_t__,int*) ;
 int FUNC_3 (struct virtio_net_hdr*,int,struct iov_iter*) ;
 scalar_t__ FUNC_4 (struct tap_queue*,unsigned long) ;
 int FUNC_5 (struct sk_buff*) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct iov_iter*,int) ;
 unsigned long FUNC_9 (struct iov_iter*) ;
 scalar_t__ FUNC_10 (struct iov_iter*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 struct tap_dev* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct sk_buff*,int ,struct iov_iter*,unsigned long) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (int *,int ) ;
 int FUNC_21 (struct ubuf_info*,int) ;
 int FUNC_22 (struct tap_dev*) ;
 unsigned long FUNC_23 (struct tap_queue*,scalar_t__) ;
 struct sk_buff* FUNC_24 (int *,int ,int,size_t,int,int*) ;
 int FUNC_25 (struct tap_queue*) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (struct sk_buff*,struct virtio_net_hdr*,int ) ;
 int FUNC_28 (struct sk_buff*,struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_29(struct tap_queue *VAR_14, void *VAR_15,
       struct iov_iter *VAR_16, int VAR_17)
{
 int VAR_18 = FUNC_1(VAR_12);
 struct sk_buff *VAR_19;
 struct tap_dev *VAR_20;
 unsigned long VAR_21 = FUNC_9(VAR_16);
 unsigned long VAR_22 = VAR_21;
 int VAR_23;
 struct virtio_net_hdr VAR_24 = { 0 };
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27;
 bool VAR_28 = 0;
 size_t VAR_29;

 if (VAR_14->flags & VAR_6) {
  VAR_25 = FUNC_0(VAR_14->vnet_hdr_sz);

  VAR_23 = -VAR_1;
  if (VAR_22 < VAR_25)
   goto err;
  VAR_22 -= VAR_25;

  VAR_23 = -VAR_0;
  if (!FUNC_3(&VAR_24, sizeof(VAR_24), VAR_16))
   goto err;
  FUNC_8(VAR_16, VAR_25 - sizeof(VAR_24));
  if ((VAR_24.flags & VAR_13) &&
       FUNC_23(VAR_14, VAR_24.csum_start) +
       FUNC_23(VAR_14, VAR_24.csum_offset) + 2 >
        FUNC_23(VAR_14, VAR_24.hdr_len))
   VAR_24.hdr_len = FUNC_4(VAR_14,
     FUNC_23(VAR_14, VAR_24.csum_start) +
     FUNC_23(VAR_14, VAR_24.csum_offset) + 2);
  VAR_23 = -VAR_1;
  if (FUNC_23(VAR_14, VAR_24.hdr_len) > VAR_22)
   goto err;
 }

 VAR_23 = -VAR_1;
 if (FUNC_26(VAR_22 < VAR_2))
  goto err;

 if (VAR_15 && FUNC_20(&VAR_14->sk, VAR_11)) {
  struct iov_iter VAR_30;

  VAR_26 = VAR_24.hdr_len ?
   FUNC_23(VAR_14, VAR_24.hdr_len) : VAR_5;
  if (VAR_26 > VAR_18)
   VAR_26 = VAR_18;
  else if (VAR_26 < VAR_2)
   VAR_26 = VAR_2;
  VAR_29 = VAR_26;
  VAR_30 = *VAR_16;
  FUNC_8(&VAR_30, VAR_26);
  if (FUNC_10(&VAR_30, VAR_7) <= VAR_8)
   VAR_28 = 1;
 }

 if (!VAR_28) {
  VAR_26 = VAR_22;
  VAR_29 = FUNC_23(VAR_14, VAR_24.hdr_len);
  if (VAR_29 > VAR_18)
   VAR_29 = VAR_18;
  else if (VAR_29 < VAR_2)
   VAR_29 = VAR_2;
 }

 VAR_19 = FUNC_24(&VAR_14->sk, VAR_12, VAR_26,
       VAR_29, VAR_17, &VAR_23);
 if (!VAR_19)
  goto err;

 if (VAR_28)
  VAR_23 = FUNC_28(VAR_19, VAR_16);
 else
  VAR_23 = FUNC_15(VAR_19, 0, VAR_16, VAR_22);

 if (VAR_23)
  goto err_kfree;

 FUNC_18(VAR_19, VAR_2);
 FUNC_17(VAR_19);
 VAR_19->protocol = FUNC_6(VAR_19)->h_proto;

 if (VAR_25) {
  VAR_23 = FUNC_27(VAR_19, &VAR_24,
         FUNC_25(VAR_14));
  if (VAR_23)
   goto err_kfree;
 }

 FUNC_16(VAR_19);


 if ((VAR_19->protocol == FUNC_7(VAR_4) ||
      VAR_19->protocol == FUNC_7(VAR_3)) &&
     FUNC_2(VAR_19, VAR_19->protocol, &VAR_27) != 0)
  FUNC_18(VAR_19, VAR_27);

 FUNC_13();
 VAR_20 = FUNC_12(VAR_14->tap);

 if (VAR_28) {
  FUNC_19(VAR_19)->destructor_arg = VAR_15;
  FUNC_19(VAR_19)->tx_flags |= VAR_9;
  FUNC_19(VAR_19)->tx_flags |= VAR_10;
 } else if (VAR_15) {
  struct ubuf_info *VAR_31 = VAR_15;
  VAR_31->callback(VAR_31, 0);
 }

 if (VAR_20) {
  VAR_19->dev = VAR_20->dev;
  FUNC_5(VAR_19);
 } else {
  FUNC_11(VAR_19);
 }
 FUNC_14();

 return VAR_21;

err_kfree:
 FUNC_11(VAR_19);

err:
 FUNC_13();
 VAR_20 = FUNC_12(VAR_14->tap);
 if (VAR_20 && VAR_20->count_tx_dropped)
  VAR_20->count_tx_dropped(VAR_20);
 FUNC_14();

 return VAR_23;
}
