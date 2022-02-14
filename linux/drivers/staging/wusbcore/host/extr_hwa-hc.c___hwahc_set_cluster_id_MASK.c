
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wusbhc {int cluster_id; } ;
struct wahc {TYPE_3__* usb_iface; int usb_dev; } ;
struct hwahc {struct wahc wa; struct wusbhc wusbhc; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; struct device dev; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hwahc *VAR_5, u8 VAR_6)
{
 int VAR_7;
 struct wusbhc *VAR_8 = &VAR_5->wusbhc;
 struct wahc *VAR_9 = &VAR_5->wa;
 struct device *VAR_10 = &VAR_9->usb_iface->dev;

 VAR_7 = FUNC_2(VAR_9->usb_dev, FUNC_3(VAR_9->usb_dev, 0),
   VAR_4,
   VAR_1 | VAR_3 | VAR_2,
   VAR_6,
   VAR_9->usb_iface->cur_altsetting->desc.bInterfaceNumber,
   ((void*)0), 0, VAR_0);
 if (VAR_7 < 0)
  FUNC_0(VAR_10, "Cannot set WUSB Cluster ID to 0x%02x: %d\n",
   VAR_6, VAR_7);
 else
  VAR_8->cluster_id = VAR_6;
 FUNC_1(VAR_10, "Wireless USB Cluster ID set to 0x%02x\n", VAR_6);
 return VAR_7;
}
