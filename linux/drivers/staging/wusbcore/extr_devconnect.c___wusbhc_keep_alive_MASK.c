
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bLength; } ;
struct wuie_keep_alive {int* bDeviceAddress; TYPE_1__ hdr; } ;
struct wusbhc {unsigned int ports_max; int trust_timeout; struct wuie_keep_alive keep_alive_ie; struct device* dev; } ;
struct wusb_port {struct wusb_dev* wusb_dev; } ;
struct wusb_dev {int addr; scalar_t__ entry_ts; int * usb_dev; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct wusbhc*,struct wusb_port*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 struct wusb_port* FUNC_4 (struct wusbhc*,unsigned int) ;
 int FUNC_5 (struct wusbhc*,TYPE_1__*) ;
 int FUNC_6 (struct wusbhc*,int,int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct wusbhc *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 unsigned VAR_4;
 struct wusb_dev *VAR_5;
 struct wusb_port *VAR_6;
 struct wuie_keep_alive *VAR_7 = &VAR_2->keep_alive_ie;
 unsigned VAR_8, VAR_9;

 VAR_9 = VAR_7->hdr.bLength - sizeof(VAR_7->hdr);
 VAR_8 = 0;
 for (VAR_4 = 0;
      VAR_8 < VAR_0 && VAR_4 < VAR_2->ports_max;
      VAR_4++) {
  unsigned VAR_10 = FUNC_2(VAR_2->trust_timeout);

  VAR_6 = FUNC_4(VAR_2, VAR_4);
  VAR_5 = VAR_6->wusb_dev;

  if (VAR_5 == ((void*)0))
   continue;
  if (VAR_5->usb_dev == ((void*)0))
   continue;

  if (FUNC_3(VAR_1, VAR_5->entry_ts + VAR_10)) {
   FUNC_1(VAR_3, "KEEPALIVE: device %u timed out\n",
    VAR_5->addr);
   FUNC_0(VAR_2, VAR_6);
  } else if (FUNC_3(VAR_1, VAR_5->entry_ts + VAR_10/3)) {

   VAR_7->bDeviceAddress[VAR_8++] = VAR_5->addr;
  }
 }
 if (VAR_8 & 0x1)
  VAR_7->bDeviceAddress[VAR_8++] = 0x7f;
 VAR_7->hdr.bLength = sizeof(VAR_7->hdr) +
  VAR_8*sizeof(VAR_7->bDeviceAddress[0]);
 if (VAR_8 > 0)
  FUNC_6(VAR_2, 10, 5, &VAR_7->hdr);
 else if (VAR_9 != 0)
  FUNC_5(VAR_2, &VAR_7->hdr);
}
