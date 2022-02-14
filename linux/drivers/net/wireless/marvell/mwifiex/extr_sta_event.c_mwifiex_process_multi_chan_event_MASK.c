
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct mwifiex_private {scalar_t__ usb_port; struct mwifiex_adapter* adapter; } ;
struct TYPE_3__ {int type; } ;
struct mwifiex_ie_types_multi_chan_info {scalar_t__ tlv_buffer; int status; TYPE_1__ header; } ;
struct TYPE_4__ {scalar_t__ usb_ep_num; } ;
struct mwifiex_ie_types_mc_group_info {int intf_num; int* bss_type_numlist; TYPE_2__ hid_num; } ;
struct mwifiex_ie_types_header {int len; int type; } ;
struct mwifiex_adapter {scalar_t__ iface_type; int tx_lock_flag; int usb_mc_setup; scalar_t__ usb_mc_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;
 struct mwifiex_private* FUNC_2 (struct mwifiex_adapter*,int,int) ;
 int FUNC_3 (struct mwifiex_adapter*) ;

void FUNC_4(struct mwifiex_private *VAR_8,
          struct sk_buff *VAR_9)
{
 struct mwifiex_ie_types_multi_chan_info *VAR_10;
 struct mwifiex_ie_types_mc_group_info *VAR_11;
 struct mwifiex_adapter *VAR_12 = VAR_8->adapter;
 struct mwifiex_ie_types_header *VAR_13;
 u16 VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 struct mwifiex_private *VAR_21;

 VAR_14 = VAR_9->len - sizeof(u32);
 VAR_10 = (void *)VAR_9->data + sizeof(u32);

 if (FUNC_0(VAR_10->header.type) != VAR_7 ||
     VAR_14 < sizeof(struct mwifiex_ie_types_multi_chan_info)) {
  FUNC_1(VAR_12, VAR_1,
       "unknown TLV in chan_info event\n");
  return;
 }

 VAR_12->usb_mc_status = FUNC_0(VAR_10->status);
 FUNC_1(VAR_12, VAR_2, "multi chan operation %s\n",
      VAR_12->usb_mc_status ? "started" : "over");

 VAR_14 -= sizeof(struct mwifiex_ie_types_multi_chan_info);
 VAR_13 = (struct mwifiex_ie_types_header *)VAR_10->tlv_buffer;

 while (VAR_14 >= (int)sizeof(struct mwifiex_ie_types_header)) {
  VAR_15 = FUNC_0(VAR_13->type);
  VAR_16 = FUNC_0(VAR_13->len);
  if ((sizeof(struct mwifiex_ie_types_header) + VAR_16) >
      VAR_14) {
   FUNC_1(VAR_12, VAR_1, "wrong tlv: tlvLen=%d,\t"
        "tlvBufLeft=%d\n", VAR_16, VAR_14);
   break;
  }
  if (VAR_15 != VAR_6) {
   FUNC_1(VAR_12, VAR_1, "wrong tlv type: 0x%x\n",
        VAR_15);
   break;
  }

  VAR_11 = (struct mwifiex_ie_types_mc_group_info *)VAR_13;
  VAR_17 = VAR_11->intf_num;
  for (VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
   VAR_18 = VAR_11->bss_type_numlist[VAR_20] >> 4;
   VAR_19 = VAR_11->bss_type_numlist[VAR_20] & VAR_0;
   VAR_21 = FUNC_2(VAR_12, VAR_19,
          VAR_18);
   if (!VAR_21) {
    FUNC_1(VAR_12, VAR_1,
         "Invalid bss_type bss_num\t"
         "in multi channel event\n");
    continue;
   }
   if (VAR_12->iface_type == VAR_3) {
    u8 VAR_22;

    VAR_22 = VAR_11->hid_num.usb_ep_num;
    if (VAR_22 == VAR_4 ||
        VAR_22 == VAR_5)
     VAR_21->usb_port = VAR_22;
   }
  }

  VAR_14 -= sizeof(struct mwifiex_ie_types_header) +
    VAR_16;
  VAR_13 = (void *)((u8 *)VAR_13 + VAR_16 +
          sizeof(struct mwifiex_ie_types_header));
 }

 if (VAR_12->iface_type == VAR_3) {
  VAR_12->tx_lock_flag = 1;
  VAR_12->usb_mc_setup = 1;
  FUNC_3(VAR_12);
 }
}
