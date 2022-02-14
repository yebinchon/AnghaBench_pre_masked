
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct uwb_rc_control_intf_class_desc {int bcdRCIVersion; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct uwb_rc {int version; TYPE_1__ uwb_dev; struct hwarc* priv; } ;
struct usb_device {char** rawdescriptors; TYPE_3__* actconfig; TYPE_3__* config; } ;
struct usb_descriptor_header {scalar_t__ bDescriptorType; size_t bLength; } ;
struct hwarc {struct usb_device* usb_dev; } ;
struct TYPE_5__ {int wTotalLength; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (struct device*,char*,...) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct uwb_rc *VAR_3)
{
 int VAR_4;

 struct hwarc *VAR_5 = VAR_3->priv;
 struct uwb_rc_control_intf_class_desc *VAR_6;
 struct device *VAR_7 = &VAR_3->uwb_dev.dev;
 struct usb_device *VAR_8 = VAR_5->usb_dev;
 char *VAR_9;
 struct usb_descriptor_header *VAR_10;
 size_t VAR_11, VAR_12;
 u16 VAR_13;

 VAR_12 = (VAR_8->actconfig - VAR_8->config) /
  sizeof(VAR_8->config[0]);
 VAR_9 = VAR_8->rawdescriptors[VAR_12];
 VAR_11 = FUNC_3(VAR_8->actconfig->desc.wTotalLength);
 while (VAR_11 >= sizeof(*VAR_10)) {
  VAR_10 = (struct usb_descriptor_header *) VAR_9;
  FUNC_1(VAR_7, "Extra device descriptor: "
   "type %02x/%u bytes @ %zu (%zu left)\n",
   VAR_10->bDescriptorType, VAR_10->bLength,
   (VAR_9 - VAR_8->rawdescriptors[VAR_12]),
   VAR_11);
  if (VAR_10->bDescriptorType == VAR_2)
   goto found;
  VAR_9 += VAR_10->bLength;
  VAR_11 -= VAR_10->bLength;
 }
 FUNC_2(VAR_7, "cannot find Radio Control Interface Class descriptor\n");
 return -VAR_1;

found:
 VAR_4 = -VAR_0;
 if (VAR_10->bLength > VAR_11) {
  FUNC_2(VAR_7, "incomplete Radio Control Interface Class "
   "descriptor (%zu bytes left, %u needed)\n",
   VAR_11, VAR_10->bLength);
  goto error;
 }
 if (VAR_10->bLength < sizeof(*VAR_6)) {
  FUNC_2(VAR_7, "short Radio Control Interface Class "
   "descriptor\n");
  goto error;
 }
 VAR_6 = (struct uwb_rc_control_intf_class_desc *) VAR_10;

 VAR_13 = FUNC_0(VAR_6->bcdRCIVersion);
 if (VAR_13 != 0x0100) {
  FUNC_2(VAR_7, "Device reports protocol version 0x%04x. We "
   "do not support that. \n", VAR_13);
  VAR_4 = -VAR_0;
  goto error;
 }
 VAR_3->version = VAR_13;
 FUNC_1(VAR_7, "Device supports WUSB protocol version 0x%04x \n", VAR_3->version);
 VAR_4 = 0;
error:
 return VAR_4;
}
