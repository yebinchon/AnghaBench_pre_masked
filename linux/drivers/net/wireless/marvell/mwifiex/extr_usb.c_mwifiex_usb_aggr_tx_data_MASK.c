
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_5__ {int is_hold_timer_set; scalar_t__ hold_tmo_msecs; int hold_timer; } ;
struct TYPE_6__ {scalar_t__ aggr_len; scalar_t__ aggr_num; TYPE_2__ timer_cnxt; int aggr_list; } ;
struct usb_tx_data_port {scalar_t__ tx_data_ix; int block_status; TYPE_3__ tx_aggr; struct urb_context* tx_data_list; int tx_data_urb_pending; } ;
struct urb_context {int dummy; } ;
struct txpd {int flags; } ;
struct sk_buff {int* data; int len; } ;
struct mwifiex_tx_param {scalar_t__ next_pkt_len; } ;
struct TYPE_4__ {int tx_aggr_align; scalar_t__ tx_aggr_max_size; scalar_t__ tx_aggr_max_num; } ;
struct mwifiex_adapter {int intf_hdr_len; int data_sent; TYPE_1__ bus_aggr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct mwifiex_adapter*,struct usb_tx_data_port*,int,struct urb_context*,struct sk_buff*) ;
 int FUNC_5 (struct mwifiex_adapter*) ;
 int FUNC_6 (struct mwifiex_adapter*,struct usb_tx_data_port*,struct sk_buff**) ;
 int FUNC_7 (struct mwifiex_adapter*,struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct mwifiex_adapter *VAR_7, u8 VAR_8,
        struct sk_buff *VAR_9,
        struct mwifiex_tx_param *VAR_10,
        struct usb_tx_data_port *VAR_11)
{
 u8 *VAR_12, VAR_13;
 u16 VAR_14 = VAR_7->bus_aggr.tx_aggr_align;
 struct sk_buff *VAR_15 = ((void*)0);
 struct urb_context *VAR_16 = ((void*)0);
 struct txpd *VAR_17 =
  (struct txpd *)((u8 *)VAR_9->data + VAR_7->intf_hdr_len);
 u8 VAR_18 = 0;
 u8 VAR_19 = 0;
 u8 VAR_20 = 0;
 u8 VAR_21 = 0;
 u32 VAR_22;
 int VAR_23;


 VAR_13 = (VAR_14 - (VAR_9->len & (VAR_14 - 1))) % VAR_14;

 if (VAR_10 && VAR_10->next_pkt_len) {

  if (VAR_11->tx_aggr.aggr_len + VAR_9->len + VAR_13 >
      VAR_7->bus_aggr.tx_aggr_max_size) {
   VAR_18 = 1;
   VAR_21 = 1;
  } else {

   VAR_20 = 1;

   if (VAR_11->tx_aggr.aggr_len + VAR_9->len + VAR_13 +
       VAR_10->next_pkt_len >
       VAR_7->bus_aggr.tx_aggr_max_size ||
       VAR_11->tx_aggr.aggr_num + 2 >
       VAR_7->bus_aggr.tx_aggr_max_num) {



    VAR_18 = 1;
   }
  }
 } else {

  if (VAR_11->tx_aggr.aggr_num > 0) {

   if (VAR_11->tx_aggr.aggr_len + VAR_9->len + VAR_13 >
       VAR_7->bus_aggr.tx_aggr_max_size) {



    VAR_19 = 1;
   } else {

    VAR_20 = 1;
   }

   VAR_18 = 1;
  } else {



    VAR_19 = 1;
  }
 }

 if (VAR_17->flags & VAR_3) {

  if (VAR_20) {
   if (FUNC_8(&VAR_11->tx_aggr.aggr_list)) {
    VAR_20 = 0;
    VAR_18 = 0;
    VAR_19 = 1;
   } else {
    VAR_18 = 1;
   }
  } else if (VAR_21) {
   VAR_19 = 1;
   VAR_21 = 0;
  }
 }

 if (VAR_20) {
  FUNC_9(&VAR_11->tx_aggr.aggr_list, VAR_9);
  VAR_11->tx_aggr.aggr_len += (VAR_9->len + VAR_13);
  VAR_11->tx_aggr.aggr_num++;
  if (VAR_18)
   goto send_aggr_buf;






  if (!VAR_11->tx_aggr.timer_cnxt.is_hold_timer_set) {
   VAR_11->tx_aggr.timer_cnxt.hold_tmo_msecs =
     VAR_5;
   VAR_22 =
    VAR_11->tx_aggr.timer_cnxt.hold_tmo_msecs;
   FUNC_2(&VAR_11->tx_aggr.timer_cnxt.hold_timer,
      VAR_6 + FUNC_3(VAR_22));
   VAR_11->tx_aggr.timer_cnxt.is_hold_timer_set = 1;
  } else {
   if (VAR_11->tx_aggr.timer_cnxt.hold_tmo_msecs <
       VAR_4) {

    VAR_22 =
    ++VAR_11->tx_aggr.timer_cnxt.hold_tmo_msecs;
    FUNC_2(&VAR_11->tx_aggr.timer_cnxt.hold_timer,
       VAR_6 + FUNC_3(VAR_22));
   }
  }
 }

send_aggr_buf:
 if (VAR_18) {
  VAR_23 = FUNC_6(VAR_7, VAR_11, &VAR_15);
  if (!VAR_23) {
   VAR_16 = &VAR_11->tx_data_list[VAR_11->tx_data_ix++];
   VAR_23 = FUNC_4(VAR_7, VAR_11, VAR_8,
            VAR_16, VAR_15);
   if (VAR_23 == -1)
    FUNC_7(VAR_7, VAR_15,
           0, -1);
  }
 }

 if (VAR_19) {
  if (VAR_18) {
   if (FUNC_0(&VAR_11->tx_data_urb_pending) >=
       VAR_1) {
    VAR_11->block_status = 1;
    VAR_7->data_sent =
     FUNC_5(VAR_7);

    VAR_21 = 1;
    goto postcopy_cur_buf;
   }

   if (VAR_11->tx_data_ix >= VAR_1)
    VAR_11->tx_data_ix = 0;
  }

  VAR_12 = VAR_9->data;
  *(u16 *)&VAR_12[2] =
   FUNC_1(VAR_2 | 0x80);
  *(u16 *)VAR_12 = FUNC_1(VAR_9->len);
  VAR_15 = VAR_9;
  VAR_16 = &VAR_11->tx_data_list[VAR_11->tx_data_ix++];
  return FUNC_4(VAR_7, VAR_11, VAR_8,
            VAR_16, VAR_15);
 }

postcopy_cur_buf:
 if (VAR_21) {
  FUNC_9(&VAR_11->tx_aggr.aggr_list, VAR_9);
  VAR_11->tx_aggr.aggr_len += (VAR_9->len + VAR_13);
  VAR_11->tx_aggr.aggr_num++;

  if (!VAR_11->tx_aggr.timer_cnxt.is_hold_timer_set) {
   VAR_11->tx_aggr.timer_cnxt.hold_tmo_msecs =
     VAR_5;
   VAR_22 = VAR_11->tx_aggr.timer_cnxt.hold_tmo_msecs;
   FUNC_2(&VAR_11->tx_aggr.timer_cnxt.hold_timer,
      VAR_6 + FUNC_3(VAR_22));
   VAR_11->tx_aggr.timer_cnxt.is_hold_timer_set = 1;
  }
 }

 return -VAR_0;
}
