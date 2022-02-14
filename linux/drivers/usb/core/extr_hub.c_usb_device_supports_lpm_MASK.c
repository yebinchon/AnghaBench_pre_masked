
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_device {int quirks; scalar_t__ speed; TYPE_4__* parent; int dev; TYPE_3__* bos; } ;
struct TYPE_8__ {scalar_t__ lpm_capable; } ;
struct TYPE_7__ {TYPE_2__* ss_cap; TYPE_1__* ext_cap; } ;
struct TYPE_6__ {scalar_t__ bU1devExitLat; scalar_t__ bU2DevExitLat; } ;
struct TYPE_5__ {int bmAttributes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct usb_device *VAR_4)
{

 if (VAR_4->quirks & VAR_1)
  return 0;




 if (VAR_4->speed == VAR_3 || VAR_4->speed == VAR_2) {
  if (VAR_4->bos->ext_cap &&
   (VAR_0 &
    FUNC_1(VAR_4->bos->ext_cap->bmAttributes)))
   return 1;
  return 0;
 }






 if (!VAR_4->bos->ss_cap) {
  FUNC_0(&VAR_4->dev, "No LPM exit latency info found, disabling LPM.\n");
  return 0;
 }

 if (VAR_4->bos->ss_cap->bU1devExitLat == 0 &&
   VAR_4->bos->ss_cap->bU2DevExitLat == 0) {
  if (VAR_4->parent)
   FUNC_0(&VAR_4->dev, "LPM exit latency is zeroed, disabling LPM.\n");
  else
   FUNC_0(&VAR_4->dev, "We don't know the algorithms for LPM for this host, disabling LPM.\n");
  return 0;
 }

 if (!VAR_4->parent || VAR_4->parent->lpm_capable)
  return 1;
 return 0;
}
