
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wusb_cbaf_device_info {int BandGroups; int CDID; int DeviceFriendlyName; int Length; } ;
struct device {int dummy; } ;
struct cbaf {int device_band_groups; int cdid; int device_name; int buffer_size; TYPE_3__* usb_iface; int usb_dev; struct wusb_cbaf_device_info* buffer; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; struct device dev; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,size_t,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int,int ,struct wusb_cbaf_device_info*,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct cbaf *VAR_7)
{
 int VAR_8;
 struct device *VAR_9 = &VAR_7->usb_iface->dev;
 struct wusb_cbaf_device_info *VAR_10;
 size_t VAR_11;

 VAR_10 = VAR_7->buffer;
 VAR_8 = FUNC_4(
  VAR_7->usb_dev, FUNC_5(VAR_7->usb_dev, 0),
  VAR_0,
  VAR_4 | VAR_6 | VAR_5,
  0x0200, VAR_7->usb_iface->cur_altsetting->desc.bInterfaceNumber,
  VAR_10, VAR_7->buffer_size, VAR_3);
 if (VAR_8 < 0) {
  FUNC_0(VAR_9, "Cannot request device information: %d\n",
   VAR_8);
  return VAR_8;
 }

 VAR_11 = VAR_8 < sizeof(*VAR_10) ? sizeof(*VAR_10) : FUNC_2(VAR_10->Length);
 if (VAR_8 < VAR_11) {
  FUNC_0(VAR_9, "Not enough data in DEVICE_INFO reply (%zu vs "
   "%zu bytes needed)\n", (size_t)VAR_8, VAR_11);
  return -VAR_2;
 }

 FUNC_3(VAR_7->device_name, VAR_10->DeviceFriendlyName, VAR_1);
 VAR_7->cdid = VAR_10->CDID;
 VAR_7->device_band_groups = FUNC_1(VAR_10->BandGroups);

 return 0;
}
