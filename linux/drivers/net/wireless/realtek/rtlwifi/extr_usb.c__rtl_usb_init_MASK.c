
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct usb_interface {TYPE_3__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int wMaxPacketSize; int bEndpointAddress; } ;
struct rtl_usb_priv {int dummy; } ;
struct rtl_usb {scalar_t__ out_ep_nums; scalar_t__ in_ep_nums; int usb_mq_to_hwq; struct usb_interface* intf; } ;
struct rtl_priv {TYPE_5__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_10__ {TYPE_4__* usb_interface_cfg; } ;
struct TYPE_9__ {scalar_t__ in_ep_num; int (* usb_endpoint_mapping ) (struct ieee80211_hw*) ;int usb_mq_to_hwq; } ;
struct TYPE_6__ {size_t bNumEndpoints; } ;
struct TYPE_8__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_7__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (char*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_5 (struct rtl_usb_priv*) ;
 struct rtl_usb_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_8 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_9 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_4(VAR_3);
 struct rtl_usb_priv *VAR_5 = FUNC_6(VAR_3);
 struct rtl_usb *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;
 u8 VAR_8;
 struct usb_interface *VAR_9 = VAR_6->intf;
 u8 VAR_10 = VAR_9->cur_altsetting->desc.bNumEndpoints;

 VAR_6->out_ep_nums = VAR_6->in_ep_nums = 0;
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  struct usb_endpoint_descriptor *VAR_11;

  VAR_11 = &VAR_9->cur_altsetting->endpoint[VAR_8].desc;

  if (FUNC_8(VAR_11))
   VAR_6->in_ep_nums++;
  else if (FUNC_9(VAR_11))
   VAR_6->out_ep_nums++;

  FUNC_0(VAR_4, VAR_0, VAR_1,
    "USB EP(0x%02x), MaxPacketSize=%d, Interval=%d\n",
    VAR_11->bEndpointAddress, VAR_11->wMaxPacketSize,
    VAR_11->bInterval);
 }
 if (VAR_6->in_ep_nums < VAR_4->cfg->usb_interface_cfg->in_ep_num) {
  FUNC_3("Too few input end points found\n");
  return -VAR_2;
 }
 if (VAR_6->out_ep_nums == 0) {
  FUNC_3("No output end points found\n");
  return -VAR_2;
 }

 VAR_7 = VAR_4->cfg->usb_interface_cfg->usb_endpoint_mapping(VAR_3);
 VAR_6->usb_mq_to_hwq = VAR_4->cfg->usb_interface_cfg->usb_mq_to_hwq;
 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 return VAR_7;
}
