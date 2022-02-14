
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct videomode {int flags; int vsync_len; int vback_porch; int vfront_porch; int vactive; int hsync_len; int hback_porch; int hfront_porch; int hactive; int pixelclock; } ;
struct TYPE_18__ {int typ; } ;
struct TYPE_17__ {int typ; } ;
struct TYPE_16__ {int typ; } ;
struct TYPE_15__ {int typ; } ;
struct TYPE_14__ {int typ; } ;
struct TYPE_13__ {int typ; } ;
struct TYPE_12__ {int typ; } ;
struct TYPE_11__ {int typ; } ;
struct TYPE_10__ {int typ; } ;
struct display_timing {int flags; TYPE_9__ vsync_len; TYPE_8__ vback_porch; TYPE_7__ vfront_porch; TYPE_6__ vactive; TYPE_5__ hsync_len; TYPE_4__ hback_porch; TYPE_3__ hfront_porch; TYPE_2__ hactive; TYPE_1__ pixelclock; } ;



void FUNC_0(const struct display_timing *VAR_0,
     struct videomode *VAR_1)
{
 VAR_1->pixelclock = VAR_0->pixelclock.typ;
 VAR_1->hactive = VAR_0->hactive.typ;
 VAR_1->hfront_porch = VAR_0->hfront_porch.typ;
 VAR_1->hback_porch = VAR_0->hback_porch.typ;
 VAR_1->hsync_len = VAR_0->hsync_len.typ;

 VAR_1->vactive = VAR_0->vactive.typ;
 VAR_1->vfront_porch = VAR_0->vfront_porch.typ;
 VAR_1->vback_porch = VAR_0->vback_porch.typ;
 VAR_1->vsync_len = VAR_0->vsync_len.typ;

 VAR_1->flags = VAR_0->flags;
}
