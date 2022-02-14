
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct usbnet {int maxpacket; TYPE_2__* driver_info; TYPE_4__* net; scalar_t__* data; } ;
struct usb_cdc_ncm_nth16 {void* wBlockLength; void* wNdpIndex; void* wSequence; void* wHeaderLength; int dwSignature; } ;
struct usb_cdc_ncm_ndp16 {void* wLength; TYPE_1__* dpe16; } ;
struct usb_cdc_ncm_dpe16 {int dummy; } ;
struct sk_buff {size_t len; scalar_t__ data; } ;
struct cdc_ncm_ctx {int drvflags; size_t max_ndp_size; scalar_t__ tx_low_mem_val; size_t tx_curr_size; size_t tx_max; scalar_t__ tx_low_mem_max_cnt; scalar_t__ tx_curr_frame_num; size_t tx_curr_frame_payload; scalar_t__ tx_max_datagrams; scalar_t__ timer_interval; scalar_t__ min_tx_pkt; struct sk_buff* tx_curr_skb; int tx_ntbs; int tx_overhead; scalar_t__ delayed_ndp16; scalar_t__ tx_ndp_modulus; int tx_reason_max_datagram; int tx_timer_pending; int tx_reason_ndp_full; int tx_reason_ntb_full; struct sk_buff* tx_rem_sign; struct sk_buff* tx_rem_skb; scalar_t__ tx_remainder; scalar_t__ tx_modulus; int tx_seq; } ;
typedef struct sk_buff* __le32 ;
struct TYPE_7__ {int tx_dropped; } ;
struct TYPE_8__ {TYPE_3__ stats; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {void* wDatagramIndex; void* wDatagramLength; } ;


 size_t FUNC_0 (size_t,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct sk_buff*,scalar_t__,scalar_t__,size_t) ;
 struct usb_cdc_ncm_ndp16* FUNC_3 (struct cdc_ncm_ctx*,struct sk_buff*,struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct cdc_ncm_ctx*) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (void*) ;
 size_t FUNC_9 (size_t,size_t) ;
 struct usb_cdc_ncm_ndp16* FUNC_10 (scalar_t__,int ,size_t) ;
 scalar_t__ FUNC_11 (scalar_t__,unsigned int) ;
 int FUNC_12 (struct sk_buff*,scalar_t__,size_t) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 struct usb_cdc_ncm_nth16* FUNC_14 (struct sk_buff*,size_t) ;
 int FUNC_15 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,scalar_t__,long) ;

struct sk_buff *
FUNC_17(struct usbnet *VAR_9, struct sk_buff *VAR_10, __le32 VAR_11)
{
 struct cdc_ncm_ctx *VAR_12 = (struct cdc_ncm_ctx *)VAR_9->data[0];
 struct usb_cdc_ncm_nth16 *VAR_13;
 struct usb_cdc_ncm_ndp16 *VAR_14;
 struct sk_buff *VAR_15;
 u16 VAR_16 = 0, VAR_17, VAR_18;
 u8 VAR_19 = 0;
 u32 VAR_20;
 size_t VAR_21;




 if (VAR_12->drvflags & VAR_1)
  VAR_20 = FUNC_0(VAR_12->max_ndp_size, VAR_12->tx_ndp_modulus);
 else
  VAR_20 = 0;


 if (VAR_10 != ((void*)0)) {
  FUNC_15(VAR_10, VAR_12->tx_rem_skb);
  FUNC_15(VAR_11, VAR_12->tx_rem_sign);
 } else {
  VAR_19 = 1;
 }


 VAR_15 = VAR_12->tx_curr_skb;


 if (!VAR_15) {
  if (VAR_12->tx_low_mem_val == 0) {
   VAR_12->tx_curr_size = VAR_12->tx_max;
   VAR_15 = FUNC_1(VAR_12->tx_curr_size, VAR_6);





   if (VAR_15 == ((void*)0)) {
    VAR_12->tx_low_mem_max_cnt = FUNC_11(VAR_12->tx_low_mem_max_cnt + 1,
             (unsigned)VAR_2);
    VAR_12->tx_low_mem_val = VAR_12->tx_low_mem_max_cnt;
   }
  }
  if (VAR_15 == ((void*)0)) {




   if (VAR_10)
    VAR_12->tx_curr_size = FUNC_9(VAR_10->len,
     (u32)VAR_7);
   else
    VAR_12->tx_curr_size = VAR_7;
   VAR_15 = FUNC_1(VAR_12->tx_curr_size, VAR_6);


   if (VAR_15 == ((void*)0)) {
    if (VAR_10 != ((void*)0)) {
     FUNC_7(VAR_10);
     VAR_9->net->stats.tx_dropped++;
    }
    goto exit_no_skb;
   }
   VAR_12->tx_low_mem_val--;
  }

  VAR_13 = FUNC_14(VAR_15, sizeof(struct usb_cdc_ncm_nth16));
  VAR_13->dwSignature = FUNC_6(VAR_8);
  VAR_13->wHeaderLength = FUNC_5(sizeof(struct usb_cdc_ncm_nth16));
  VAR_13->wSequence = FUNC_5(VAR_12->tx_seq++);


  VAR_12->tx_curr_frame_num = 0;


  VAR_12->tx_curr_frame_payload = 0;
 }

 for (VAR_16 = VAR_12->tx_curr_frame_num; VAR_16 < VAR_12->tx_max_datagrams; VAR_16++) {

  if (VAR_10 == ((void*)0)) {
   VAR_10 = VAR_12->tx_rem_skb;
   VAR_11 = VAR_12->tx_rem_sign;
   VAR_12->tx_rem_skb = ((void*)0);


   if (VAR_10 == ((void*)0))
    break;
  }


  VAR_14 = FUNC_3(VAR_12, VAR_15, VAR_11, VAR_10->len + VAR_12->tx_modulus + VAR_12->tx_remainder);


  FUNC_2(VAR_15, VAR_12->tx_modulus, VAR_12->tx_remainder, VAR_12->tx_curr_size);


  if (!VAR_14 || VAR_15->len + VAR_10->len + VAR_20 > VAR_12->tx_curr_size) {
   if (VAR_16 == 0) {

    FUNC_7(VAR_10);
    VAR_10 = ((void*)0);
    VAR_9->net->stats.tx_dropped++;
   } else {

    if (VAR_12->tx_rem_skb != ((void*)0)) {
     FUNC_7(VAR_12->tx_rem_skb);
     VAR_9->net->stats.tx_dropped++;
    }
    VAR_12->tx_rem_skb = VAR_10;
    VAR_12->tx_rem_sign = VAR_11;
    VAR_10 = ((void*)0);
    VAR_19 = 1;
    VAR_12->tx_reason_ntb_full++;
   }
   break;
  }


  VAR_18 = FUNC_8(VAR_14->wLength);
  VAR_17 = (VAR_18 - sizeof(struct usb_cdc_ncm_ndp16)) / sizeof(struct usb_cdc_ncm_dpe16) - 1;


  VAR_14->dpe16[VAR_17].wDatagramLength = FUNC_5(VAR_10->len);
  VAR_14->dpe16[VAR_17].wDatagramIndex = FUNC_5(VAR_15->len);
  VAR_14->wLength = FUNC_5(VAR_18 + sizeof(struct usb_cdc_ncm_dpe16));
  FUNC_12(VAR_15, VAR_10->data, VAR_10->len);
  VAR_12->tx_curr_frame_payload += VAR_10->len;
  FUNC_7(VAR_10);
  VAR_10 = ((void*)0);


  if (VAR_17 >= VAR_0) {
   VAR_19 = 1;
   VAR_12->tx_reason_ndp_full++;
   break;
  }
 }


 if (VAR_10 != ((void*)0)) {
  FUNC_7(VAR_10);
  VAR_10 = ((void*)0);
  VAR_9->net->stats.tx_dropped++;
 }

 VAR_12->tx_curr_frame_num = VAR_16;

 if (VAR_16 == 0) {


  VAR_12->tx_curr_skb = VAR_15;
  goto exit_no_skb;

 } else if ((VAR_16 < VAR_12->tx_max_datagrams) && (VAR_19 == 0) && (VAR_12->timer_interval > 0)) {


  VAR_12->tx_curr_skb = VAR_15;

  if (VAR_16 < VAR_3)
   VAR_12->tx_timer_pending = VAR_4;
  goto exit_no_skb;

 } else {
  if (VAR_16 == VAR_12->tx_max_datagrams)
   VAR_12->tx_reason_max_datagram++;


 }


 if (VAR_12->drvflags & VAR_1) {
  VAR_13 = (struct usb_cdc_ncm_nth16 *)VAR_15->data;
  FUNC_2(VAR_15, VAR_12->tx_ndp_modulus, 0, VAR_12->tx_curr_size - VAR_12->max_ndp_size);
  VAR_13->wNdpIndex = FUNC_5(VAR_15->len);
  FUNC_12(VAR_15, VAR_12->delayed_ndp16, VAR_12->max_ndp_size);


  VAR_14 = FUNC_10(VAR_12->delayed_ndp16, 0, VAR_12->max_ndp_size);
 }
 if (!(VAR_9->driver_info->flags & VAR_5) &&
     VAR_15->len > VAR_12->min_tx_pkt) {
  VAR_21 = VAR_12->tx_curr_size - VAR_15->len;
  FUNC_14(VAR_15, VAR_21);
 } else if (VAR_15->len < VAR_12->tx_curr_size &&
     (VAR_15->len % VAR_9->maxpacket) == 0) {
  FUNC_13(VAR_15, 0);
 }


 VAR_13 = (struct usb_cdc_ncm_nth16 *)VAR_15->data;
 VAR_13->wBlockLength = FUNC_5(VAR_15->len);


 VAR_12->tx_curr_skb = ((void*)0);


 VAR_12->tx_overhead += VAR_15->len - VAR_12->tx_curr_frame_payload;
 VAR_12->tx_ntbs++;





 FUNC_16(VAR_15, VAR_16,
    (long)VAR_12->tx_curr_frame_payload - VAR_15->len);

 return VAR_15;

exit_no_skb:

 if (VAR_12->tx_curr_skb != ((void*)0) && VAR_16 > 0)
  FUNC_4(VAR_12);
 return ((void*)0);
}
