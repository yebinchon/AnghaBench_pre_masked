
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wahc {struct usb_wa_descriptor* wa_descr; struct usb_device* usb_dev; TYPE_1__* usb_iface; } ;
struct usb_wa_descriptor {int bcdWAVersion; } ;
struct usb_device {char** rawdescriptors; TYPE_3__* actconfig; TYPE_3__* config; } ;
struct usb_descriptor_header {scalar_t__ bDescriptorType; size_t bLength; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int wTotalLength; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,scalar_t__,size_t,int,size_t) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct wahc *VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = &VAR_3->usb_iface->dev;
 char *VAR_6;
 struct usb_device *VAR_7 = VAR_3->usb_dev;
 struct usb_descriptor_header *VAR_8;
 struct usb_wa_descriptor *VAR_9;
 size_t VAR_10, VAR_11;

 VAR_11 = (VAR_7->actconfig - VAR_7->config) /
   sizeof(VAR_7->config[0]);
 VAR_6 = VAR_7->rawdescriptors[VAR_11];
 VAR_10 = FUNC_3(VAR_7->actconfig->desc.wTotalLength);
 while (VAR_10 >= sizeof(*VAR_8)) {
  VAR_8 = (struct usb_descriptor_header *) VAR_6;
  FUNC_0(VAR_5, "Extra device descriptor: "
   "type %02x/%u bytes @ %zu (%zu left)\n",
   VAR_8->bDescriptorType, VAR_8->bLength,
   (VAR_6 - VAR_7->rawdescriptors[VAR_11]),
   VAR_10);
  if (VAR_8->bDescriptorType == VAR_2)
   goto found;
  VAR_6 += VAR_8->bLength;
  VAR_10 -= VAR_8->bLength;
 }
 FUNC_1(VAR_5, "cannot find Wire Adapter Class descriptor\n");
 return -VAR_1;

found:
 VAR_4 = -VAR_0;
 if (VAR_8->bLength > VAR_10) {
  FUNC_1(VAR_5, "incomplete Wire Adapter Class descriptor "
   "(%zu bytes left, %u needed)\n",
   VAR_10, VAR_8->bLength);
  goto error;
 }
 if (VAR_8->bLength < sizeof(*VAR_3->wa_descr)) {
  FUNC_1(VAR_5, "short Wire Adapter Class descriptor\n");
  goto error;
 }
 VAR_3->wa_descr = VAR_9 = (struct usb_wa_descriptor *) VAR_8;
 if (FUNC_3(VAR_9->bcdWAVersion) > 0x0100)
  FUNC_2(VAR_5, "Wire Adapter v%d.%d newer than groked v1.0\n",
    (FUNC_3(VAR_9->bcdWAVersion) & 0xff00) >> 8,
    FUNC_3(VAR_9->bcdWAVersion) & 0x00ff);
 VAR_4 = 0;
error:
 return VAR_4;
}
