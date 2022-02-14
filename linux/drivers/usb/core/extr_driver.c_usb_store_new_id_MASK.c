
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct usb_dynids {int lock; int list; } ;
struct TYPE_2__ {int driver_info; int match_flags; scalar_t__ bInterfaceClass; scalar_t__ idProduct; scalar_t__ idVendor; } ;
struct usb_dynid {int node; TYPE_1__ id; } ;
struct usb_device_id {scalar_t__ idVendor; scalar_t__ idProduct; int driver_info; scalar_t__ match_flags; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device_driver*) ;
 int FUNC_2 (struct usb_dynid*) ;
 struct usb_dynid* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,char*,scalar_t__*,scalar_t__*,unsigned int*,scalar_t__*,scalar_t__*) ;

ssize_t FUNC_8(struct usb_dynids *VAR_6,
    const struct usb_device_id *VAR_7,
    struct device_driver *VAR_8,
    const char *VAR_9, size_t VAR_10)
{
 struct usb_dynid *VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 unsigned int VAR_14 = 0;
 u32 VAR_15, VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;

 VAR_17 = FUNC_7(VAR_9, "%x %x %x %x %x", &VAR_12, &VAR_13,
   &VAR_14, &VAR_15, &VAR_16);
 if (VAR_17 < 2)
  return -VAR_0;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 FUNC_0(&VAR_11->node);
 VAR_11->id.idVendor = VAR_12;
 VAR_11->id.idProduct = VAR_13;
 VAR_11->id.match_flags = VAR_4;
 if (VAR_17 > 2 && VAR_14) {
  if (VAR_14 > 255) {
   VAR_18 = -VAR_0;
   goto fail;
  }

  VAR_11->id.bInterfaceClass = (u8)VAR_14;
  VAR_11->id.match_flags |= VAR_5;
 }

 if (VAR_17 > 4) {
  const struct usb_device_id *VAR_19 = VAR_7;

  if (!VAR_19) {
   VAR_18 = -VAR_1;
   goto fail;
  }

  for (; VAR_19->match_flags; VAR_19++)
   if (VAR_19->idVendor == VAR_15 && VAR_19->idProduct == VAR_16)
    break;

  if (VAR_19->match_flags) {
   VAR_11->id.driver_info = VAR_19->driver_info;
  } else {
   VAR_18 = -VAR_1;
   goto fail;
  }
 }

 FUNC_5(&VAR_6->lock);
 FUNC_4(&VAR_11->node, &VAR_6->list);
 FUNC_6(&VAR_6->lock);

 VAR_18 = FUNC_1(VAR_8);

 if (VAR_18)
  return VAR_18;
 return VAR_10;

fail:
 FUNC_2(VAR_11);
 return VAR_18;
}
