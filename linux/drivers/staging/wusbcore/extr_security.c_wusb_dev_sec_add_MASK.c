
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct usb_encryption_descriptor {int bLength; scalar_t__ bEncryptionType; int bEncryptionValue; int bAuthKeyIndex; } ;
struct wusb_dev {struct usb_encryption_descriptor ccm1_etd; } ;
struct usb_security_descriptor {int wTotalLength; } ;
struct device {int dummy; } ;
struct usb_device {struct device dev; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*,char*,char*,char*,int,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct usb_security_descriptor*) ;
 struct usb_security_descriptor* FUNC_3 (int,int ) ;
 struct usb_security_descriptor* FUNC_4 (struct usb_security_descriptor*,int,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,int,char*,char*,int,int) ;
 int FUNC_7 (struct usb_device*,int ,int ,struct usb_security_descriptor*,int) ;
 char* FUNC_8 (scalar_t__) ;

int FUNC_9(struct wusbhc *VAR_5,
       struct usb_device *VAR_6, struct wusb_dev *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct device *VAR_11 = &VAR_6->dev;
 struct usb_security_descriptor *VAR_12, *VAR_13;
 const struct usb_encryption_descriptor *VAR_14, *VAR_15 = ((void*)0);
 const void *VAR_16, *VAR_17;
 char VAR_18[64];

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_2);
 if (VAR_12 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_8 = FUNC_7(VAR_6, VAR_3,
        0, VAR_12, sizeof(*VAR_12));
 if (VAR_8 < (int)sizeof(*VAR_12)) {
  FUNC_1(VAR_11, "Can't read security descriptor or "
   "not enough data: %d\n", VAR_8);
  goto out;
 }
 VAR_10 = FUNC_5(VAR_12->wTotalLength);
 VAR_13 = FUNC_4(VAR_12, VAR_10, VAR_2);
 if (VAR_13 == ((void*)0)) {
  FUNC_1(VAR_11,
   "Can't allocate space for security descriptors\n");
  VAR_8 = -VAR_1;
  goto out;
 }
 VAR_12 = VAR_13;
 VAR_8 = FUNC_7(VAR_6, VAR_3,
        0, VAR_12, VAR_10);
 if (VAR_8 < VAR_10) {
  FUNC_1(VAR_11, "Can't read security descriptor or "
   "not enough data: %d\n", VAR_8);
  goto out;
 }
 VAR_9 = 0;
 VAR_16 = &VAR_12[1];
 VAR_17 = (void *)VAR_12 + VAR_8;
 while (VAR_16 < VAR_17) {
  VAR_14 = VAR_16;
  if (VAR_17 - VAR_16 < sizeof(*VAR_14)) {
   FUNC_1(VAR_11, "BUG: bad device security descriptor; "
    "not enough data (%zu vs %zu bytes left)\n",
    VAR_17 - VAR_16, sizeof(*VAR_14));
   break;
  }
  if (VAR_14->bLength < sizeof(*VAR_14)) {
   FUNC_1(VAR_11, "BUG: bad device encryption descriptor; "
    "descriptor is too short "
    "(%u vs %zu needed)\n",
    VAR_14->bLength, sizeof(*VAR_14));
   break;
  }
  VAR_16 += VAR_14->bLength;
  VAR_9 += FUNC_6(VAR_18 + VAR_9, sizeof(VAR_18) - VAR_9,
      "%s (0x%02x/%02x) ",
      FUNC_8(VAR_14->bEncryptionType),
      VAR_14->bEncryptionValue, VAR_14->bAuthKeyIndex);
  if (VAR_14->bEncryptionType == VAR_4)
   VAR_15 = VAR_14;
 }



 if (VAR_15 == ((void*)0)) {
  FUNC_1(VAR_11, "WUSB device doesn't support CCM1 encryption, "
   "can't use!\n");
  VAR_8 = -VAR_0;
  goto out;
 }
 VAR_7->ccm1_etd = *VAR_15;
 FUNC_0(VAR_11, "supported encryption: %s; using %s (0x%02x/%02x)\n",
  VAR_18, FUNC_8(VAR_15->bEncryptionType),
  VAR_15->bEncryptionValue, VAR_15->bAuthKeyIndex);
 VAR_8 = 0;
out:
 FUNC_2(VAR_12);
 return VAR_8;
}
