
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct wusb_cbaf_assoc_request {int AssociationDataIndex; int AssociationTypeInfoSize; int AssociationSubTypeId; int AssociationTypeId; } ;
struct wusb_cbaf_assoc_info {int NumAssociationRequests; int Length; } ;
struct device {int dummy; } ;
struct cbaf {struct wusb_cbaf_assoc_info* buffer; int buffer_size; TYPE_3__* usb_iface; int usb_dev; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; struct device dev; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int ,size_t,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,struct wusb_cbaf_assoc_info*,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct cbaf *VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = &VAR_6->usb_iface->dev;
 struct wusb_cbaf_assoc_info *VAR_9;
 struct wusb_cbaf_assoc_request *VAR_10;
 size_t VAR_11;
 void *VAR_12, *VAR_13;
 int VAR_14 = 0, VAR_15 = 0;

 VAR_7 = FUNC_4(
  VAR_6->usb_dev, FUNC_5(VAR_6->usb_dev, 0),
  VAR_0,
  VAR_3 | VAR_5 | VAR_4,
  0, VAR_6->usb_iface->cur_altsetting->desc.bInterfaceNumber,
  VAR_6->buffer, VAR_6->buffer_size, VAR_2);
 if (VAR_7 < 0) {
  FUNC_1(VAR_8, "Cannot get available association types: %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_9 = VAR_6->buffer;
 if (VAR_7 < sizeof(*VAR_9)) {
  FUNC_1(VAR_8, "Not enough data to decode association info "
   "header (%zu vs %zu bytes required)\n",
   (size_t)VAR_7, sizeof(*VAR_9));
  return VAR_7;
 }

 VAR_11 = FUNC_2(VAR_9->Length);
 if (VAR_7 < VAR_11) {
  FUNC_1(VAR_8, "Not enough data to decode association info "
   "(%zu vs %zu bytes required)\n",
   (size_t)VAR_11, sizeof(*VAR_9));
  return VAR_7;
 }





 VAR_12 = VAR_6->buffer + sizeof(*VAR_9);
 VAR_13 = VAR_6->buffer + VAR_11;
 FUNC_0(VAR_8, "Found %u association requests (%zu bytes)\n",
   VAR_9->NumAssociationRequests, VAR_11);

 while (VAR_12 < VAR_13) {
  u16 VAR_16, VAR_17;
  u32 VAR_18;
  const char *VAR_19;

  VAR_10 = VAR_12;

  if (VAR_13 - VAR_12 < sizeof(*VAR_10)) {
   FUNC_1(VAR_8, "Not enough data to decode association "
    "request (%zu vs %zu bytes needed)\n",
    VAR_13 - VAR_12, sizeof(*VAR_10));
   break;
  }

  VAR_16 = FUNC_2(VAR_10->AssociationTypeId);
  VAR_17 = FUNC_2(VAR_10->AssociationSubTypeId);
  VAR_18 = FUNC_3(VAR_10->AssociationTypeInfoSize);
  VAR_19 = "unknown";

  switch (VAR_16) {
  case 130:

   switch (VAR_17) {
   case 128:
    VAR_19 = "RETRIEVE_HOST_INFO";
    VAR_14 = 1;
    break;
   case 129:

    VAR_19 = "ASSOCIATE";
    VAR_15 = 1;
    break;
   }
   break;
  }

  FUNC_0(VAR_8, "Association request #%02u: 0x%04x/%04x "
    "(%zu bytes): %s\n",
    VAR_10->AssociationDataIndex, VAR_16,
    VAR_17, (size_t)VAR_18, VAR_19);

  VAR_12 += sizeof(*VAR_10);
 }

 if (!VAR_14) {
  FUNC_1(VAR_8, "Missing RETRIEVE_HOST_INFO association "
   "request\n");
  return -VAR_1;
 }
 if (!VAR_15) {
  FUNC_1(VAR_8, "Missing ASSOCIATE association request\n");
  return -VAR_1;
 }

 return 0;
}
