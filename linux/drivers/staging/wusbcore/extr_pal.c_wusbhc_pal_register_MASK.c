
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* name; int channel_changed; int rc; int device; } ;
struct TYPE_5__ {int controller; } ;
struct TYPE_6__ {TYPE_1__ self; } ;
struct wusbhc {TYPE_3__ pal; int uwb_rc; TYPE_2__ usb_hcd; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;

int FUNC_2(struct wusbhc *VAR_1)
{
 FUNC_0(&VAR_1->pal);

 VAR_1->pal.name = "wusbhc";
 VAR_1->pal.device = VAR_1->usb_hcd.self.controller;
 VAR_1->pal.rc = VAR_1->uwb_rc;
 VAR_1->pal.channel_changed = VAR_0;

 return FUNC_1(&VAR_1->pal);
}
