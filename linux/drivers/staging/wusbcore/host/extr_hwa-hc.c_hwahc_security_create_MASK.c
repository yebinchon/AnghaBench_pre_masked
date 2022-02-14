
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct wusbhc {struct usb_encryption_descriptor* ccm1_etd; } ;
struct usb_security_descriptor {int wTotalLength; } ;
struct usb_encryption_descriptor {int bLength; int bEncryptionValue; int bEncryptionType; } ;
struct device {int dummy; } ;
struct usb_device {TYPE_3__* actconfig; void** rawdescriptors; TYPE_3__* config; struct device dev; } ;
struct TYPE_4__ {struct usb_device* usb_dev; } ;
struct hwahc {TYPE_1__ wa; struct wusbhc wusbhc; } ;
typedef int buf ;
struct TYPE_5__ {int wTotalLength; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (void*,size_t,int ,void**,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,int,char*,char*,int) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct hwahc *VAR_1)
{
 int VAR_2;
 struct wusbhc *VAR_3 = &VAR_1->wusbhc;
 struct usb_device *VAR_4 = VAR_1->wa.usb_dev;
 struct device *VAR_5 = &VAR_4->dev;
 struct usb_security_descriptor *VAR_6;
 struct usb_encryption_descriptor *VAR_7;
 void *VAR_8, *VAR_9;
 size_t VAR_10, VAR_11, VAR_12;
 u8 VAR_13;
 char VAR_14[64];


 VAR_13 = (VAR_4->actconfig - VAR_4->config) /
  sizeof(VAR_4->config[0]);
 VAR_8 = VAR_4->rawdescriptors[VAR_13];
 VAR_10 = FUNC_4(VAR_4->actconfig->desc.wTotalLength);
 VAR_9 = VAR_8 + VAR_10;
 VAR_2 = FUNC_0(VAR_4->rawdescriptors[VAR_13],
   FUNC_4(VAR_4->actconfig->desc.wTotalLength),
   VAR_0, (void **) &VAR_6, sizeof(*VAR_6));
 if (VAR_2 == -1) {
  FUNC_3(VAR_5, "BUG? WUSB host has no security descriptors\n");
  return 0;
 }
 VAR_11 = sizeof(*VAR_6);
 if (VAR_9 - (void *)VAR_6 < VAR_11) {
  FUNC_1(VAR_5, "BUG? Not enough data to process security "
   "descriptor header (%zu bytes left vs %zu needed)\n",
   VAR_9 - (void *) VAR_6, VAR_11);
  return 0;
 }
 VAR_11 = FUNC_4(VAR_6->wTotalLength);
 if (VAR_9 - (void *)VAR_6 < VAR_11) {
  FUNC_1(VAR_5, "BUG? Not enough data to process security "
   "descriptors (%zu bytes left vs %zu needed)\n",
   VAR_9 - (void *) VAR_6, VAR_11);
  return 0;
 }

 VAR_8 = (void *) VAR_6 + sizeof(*VAR_6);
 VAR_9 = (void *) VAR_6 + FUNC_4(VAR_6->wTotalLength);
 VAR_13 = 0;
 VAR_12 = 0;
 while (VAR_8 < VAR_9) {
  VAR_7 = VAR_8;
  if (VAR_9 - VAR_8 < sizeof(*VAR_7)) {
   FUNC_1(VAR_5, "BUG: bad host security descriptor; "
    "not enough data (%zu vs %zu left)\n",
    VAR_9 - VAR_8, sizeof(*VAR_7));
   break;
  }
  if (VAR_7->bLength < sizeof(*VAR_7)) {
   FUNC_1(VAR_5, "BUG: bad host encryption descriptor; "
    "descriptor is too short "
    "(%zu vs %zu needed)\n",
    (size_t)VAR_7->bLength, sizeof(*VAR_7));
   break;
  }
  VAR_8 += VAR_7->bLength;
  VAR_12 += FUNC_5(VAR_14 + VAR_12, sizeof(VAR_14) - VAR_12,
      "%s (0x%02x) ",
      FUNC_6(VAR_7->bEncryptionType),
      VAR_7->bEncryptionValue);
  VAR_3->ccm1_etd = VAR_7;
 }
 FUNC_2(VAR_5, "supported encryption types: %s\n", VAR_14);
 if (VAR_3->ccm1_etd == ((void*)0)) {
  FUNC_1(VAR_5, "E: host doesn't support CCM-1 crypto\n");
  return 0;
 }

 return 0;
}
