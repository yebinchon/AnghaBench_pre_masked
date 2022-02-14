
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_2__* altsetting; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; int wMaxPacketSize; } ;
struct usb_device {scalar_t__ speed; } ;
struct em28xx {int analog_ep_isoc; int* alt_max_pkt_size_isoc; int analog_ep_bulk; int dvb_max_pkt_size_isoc; int dvb_ep_isoc; int dvb_alt_isoc; int dvb_ep_bulk; int dvb_max_pkt_size_isoc_ts2; int dvb_ep_isoc_ts2; int dvb_ep_bulk_ts2; } ;
struct TYPE_4__ {TYPE_1__* endpoint; } ;
struct TYPE_3__ {struct usb_endpoint_descriptor desc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_endpoint_descriptor const*) ;
 int FUNC_4 (struct usb_endpoint_descriptor const*) ;
 int FUNC_5 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static void FUNC_6(struct em28xx *VAR_1,
     struct usb_device *VAR_2,
     struct usb_interface *VAR_3,
     int VAR_4, int VAR_5,
     bool *VAR_6,
     bool *VAR_7,
     bool *VAR_8)
{
 const struct usb_endpoint_descriptor *VAR_9;
 int VAR_10, VAR_11;
 VAR_9 = &VAR_3->altsetting[VAR_4].endpoint[VAR_5].desc;

 if (!FUNC_3(VAR_9))
  return;

 VAR_10 = FUNC_2(VAR_9->wMaxPacketSize);
 VAR_11 = VAR_10 & 0x7ff;

 if (VAR_2->speed == VAR_0)
  VAR_11 = VAR_11 * FUNC_1(VAR_10);



 switch (VAR_9->bEndpointAddress) {
 case 0x82:
  *VAR_7 = 1;
  if (FUNC_5(VAR_9)) {
   VAR_1->analog_ep_isoc = VAR_9->bEndpointAddress;
   VAR_1->alt_max_pkt_size_isoc[VAR_4] = VAR_11;
  } else if (FUNC_4(VAR_9)) {
   VAR_1->analog_ep_bulk = VAR_9->bEndpointAddress;
  }
  return;
 case 0x83:
  if (FUNC_5(VAR_9))
   *VAR_6 = 1;
  else
   FUNC_0(&VAR_3->dev,
    "error: skipping audio endpoint 0x83, because it uses bulk transfers !\n");
  return;
 case 0x84:
  if (*VAR_7 && (FUNC_4(VAR_9))) {
   VAR_1->analog_ep_bulk = VAR_9->bEndpointAddress;
  } else {
   if (FUNC_5(VAR_9)) {
    if (VAR_11 > VAR_1->dvb_max_pkt_size_isoc) {







     *VAR_8 = 1;
     VAR_1->dvb_ep_isoc = VAR_9->bEndpointAddress;
     VAR_1->dvb_max_pkt_size_isoc = VAR_11;
     VAR_1->dvb_alt_isoc = VAR_4;
    }
   } else {
    *VAR_8 = 1;
    VAR_1->dvb_ep_bulk = VAR_9->bEndpointAddress;
   }
  }
  return;
 case 0x85:
  if (FUNC_5(VAR_9)) {
   if (VAR_11 > VAR_1->dvb_max_pkt_size_isoc_ts2) {
    VAR_1->dvb_ep_isoc_ts2 = VAR_9->bEndpointAddress;
    VAR_1->dvb_max_pkt_size_isoc_ts2 = VAR_11;
    VAR_1->dvb_alt_isoc = VAR_4;
   }
  } else {
   VAR_1->dvb_ep_bulk_ts2 = VAR_9->bEndpointAddress;
  }
  return;
 }
}
