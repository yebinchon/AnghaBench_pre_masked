
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wusbhc {struct device* dev; } ;
struct wusb_dev {int addr; } ;
struct TYPE_5__ {int bLength; int bIEIdentifier; } ;
struct wuie_disconnect {TYPE_1__ hdr; int bDeviceAddress; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct wusb_dev* wusb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wusbhc*,TYPE_3__*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct wuie_disconnect*) ;
 struct wuie_disconnect* FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 TYPE_3__* FUNC_6 (struct wusbhc*,int ) ;
 int FUNC_7 (struct wusbhc*,TYPE_1__*) ;
 int FUNC_8 (struct wusbhc*,int ,int ,TYPE_1__*) ;

void FUNC_9(struct wusbhc *VAR_2, u8 VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = VAR_2->dev;
 struct wusb_dev *VAR_6;
 struct wuie_disconnect *VAR_7;

 VAR_6 = FUNC_6(VAR_2, VAR_3)->wusb_dev;
 if (VAR_6 == ((void*)0)) {

  FUNC_1(VAR_5, "DISCONNECT: no device at port %u, ignoring\n",
   VAR_3);
  return;
 }
 FUNC_0(VAR_2, FUNC_6(VAR_2, VAR_3));

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_0);
 if (VAR_7 == ((void*)0))
  return;
 VAR_7->hdr.bLength = sizeof(*VAR_7);
 VAR_7->hdr.bIEIdentifier = VAR_1;
 VAR_7->bDeviceAddress = VAR_6->addr;
 VAR_4 = FUNC_8(VAR_2, 0, 0, &VAR_7->hdr);
 if (VAR_4 < 0)
  FUNC_2(VAR_5, "DISCONNECT: can't set MMC: %d\n", VAR_4);
 else {

  FUNC_5(7*4);
  FUNC_7(VAR_2, &VAR_7->hdr);
 }
 FUNC_3(VAR_7);
}
