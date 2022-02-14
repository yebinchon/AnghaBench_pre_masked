
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ssp_cap_descriptor {int * bmSublinkSpeedAttr; int bmAttributes; } ;
struct usb_device {TYPE_1__* bos; } ;
struct TYPE_2__ {struct usb_ssp_cap_descriptor* ssp_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_3, int VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 int VAR_7;
 struct usb_ssp_cap_descriptor *VAR_8 = VAR_3->bos->ssp_cap;

 if (!VAR_8)
  return 0;

 VAR_5 = FUNC_0(VAR_8->bmAttributes) &
  VAR_0;

 for (VAR_7 = 0; VAR_7 <= VAR_5; VAR_7++) {
  VAR_6 = FUNC_0(VAR_8->bmSublinkSpeedAttr[VAR_7]);
  if (VAR_4 == (VAR_6 & VAR_2))
   return !!(VAR_6 & VAR_1);
 }
 return 0;
}
