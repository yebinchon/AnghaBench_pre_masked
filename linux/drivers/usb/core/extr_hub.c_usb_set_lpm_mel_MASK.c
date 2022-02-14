
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_hub {TYPE_3__* descriptor; } ;
struct usb_device {int dummy; } ;
struct usb3_lpm_parameters {int mel; } ;
struct TYPE_4__ {int bHubHdrDecLat; } ;
struct TYPE_5__ {TYPE_1__ ss; } ;
struct TYPE_6__ {TYPE_2__ u; } ;



__attribute__((used)) static void FUNC_0(struct usb_device *VAR_0,
  struct usb3_lpm_parameters *VAR_1,
  unsigned int VAR_2,
  struct usb_hub *VAR_3,
  struct usb3_lpm_parameters *VAR_4,
  unsigned int VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 VAR_6 = VAR_4->mel +
  (VAR_3->descriptor->u.ss.bHubHdrDecLat * 100);
 VAR_7 = VAR_2 * 1000;
 VAR_8 = VAR_5 * 1000;
 if (VAR_7 > VAR_8)
  VAR_6 += VAR_7;
 else
  VAR_6 += VAR_8;

 VAR_1->mel = VAR_6;
}
