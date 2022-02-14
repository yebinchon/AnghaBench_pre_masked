
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint16_t ;
struct wusb_dev {TYPE_4__* wusb_cap_descr; } ;
struct TYPE_12__ {void* cur_window; void* info3; void* info2; void* info1; } ;
struct whc_qset {int max_seq; int max_burst; TYPE_6__ qh; void* max_packet; TYPE_3__* ep; } ;
struct TYPE_11__ {scalar_t__ phy_rate; } ;
struct whc {TYPE_5__ wusbhc; } ;
struct usb_wireless_ep_comp_descriptor {int bMaxSequence; int bMaxBurst; } ;
struct usb_device {int portnum; struct wusb_dev* wusb_dev; } ;
struct urb {int pipe; TYPE_2__* ep; struct usb_device* dev; } ;
struct TYPE_10__ {int wPHYRates; } ;
struct TYPE_9__ {scalar_t__ extra; } ;
struct TYPE_7__ {int wMaxPacketSize; } ;
struct TYPE_8__ {TYPE_1__ desc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 void* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (void*) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct whc *VAR_3, struct whc_qset *VAR_4, struct urb *VAR_5)
{
 struct usb_device *VAR_6 = VAR_5->dev;
 struct wusb_dev *VAR_7 = VAR_6->wusb_dev;
 struct usb_wireless_ep_comp_descriptor *VAR_8;
 bool VAR_9;
 uint8_t VAR_10;

 VAR_9 = FUNC_16(VAR_5->pipe);

 VAR_4->max_packet = FUNC_12(VAR_5->ep->desc.wMaxPacketSize);

 VAR_8 = (struct usb_wireless_ep_comp_descriptor *)VAR_4->ep->extra;
 if (VAR_8) {
  VAR_4->max_seq = VAR_8->bMaxSequence;
  VAR_4->max_burst = VAR_8->bMaxBurst;
 } else {
  VAR_4->max_seq = 2;
  VAR_4->max_burst = 1;
 }






 if (FUNC_14(VAR_5->pipe))
  VAR_10 = VAR_2;
 else {
  uint16_t VAR_11;

  VAR_11 = FUNC_12(VAR_7->wusb_cap_descr->wPHYRates);
  VAR_10 = FUNC_11(VAR_11) - 1;
  if (VAR_10 > VAR_3->wusbhc.phy_rate)
   VAR_10 = VAR_3->wusbhc.phy_rate;
 }

 VAR_4->qh.info1 = FUNC_10(
  FUNC_1(FUNC_15(VAR_5->pipe))
  | (VAR_9 ? VAR_1 : VAR_0)
  | FUNC_13(VAR_5->pipe)
  | FUNC_0(FUNC_17(VAR_6->portnum))
  | FUNC_2(VAR_4->max_packet)
  );
 VAR_4->qh.info2 = FUNC_10(
  FUNC_3(VAR_4->max_burst)
  | FUNC_4(0)
  | FUNC_5(3)
  | FUNC_6(3)
  | FUNC_7(VAR_4->max_seq - 1)
  );




 VAR_4->qh.info3 = FUNC_10(
  FUNC_9(VAR_10)
  | FUNC_8(0)
  );

 VAR_4->qh.cur_window = FUNC_10((1 << VAR_4->max_burst) - 1);
}
