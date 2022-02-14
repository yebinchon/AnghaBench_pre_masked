
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_device_id {int match_flags; scalar_t__ driver_info; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_device*,struct usb_device_id const*) ;
 int FUNC_1 (struct usb_device*,struct usb_device_id const*) ;

__attribute__((used)) static u32 FUNC_2(struct usb_device *VAR_1,
        const struct usb_device_id *VAR_2)
{
 u32 VAR_3 = 0;

 for (; VAR_2->match_flags; VAR_2++) {
  if (!FUNC_1(VAR_1, VAR_2))
   continue;

  if ((VAR_2->match_flags & VAR_0) &&
      !FUNC_0(VAR_1, VAR_2))
   continue;

  VAR_3 |= (u32)(VAR_2->driver_info);
 }

 return VAR_3;
}
