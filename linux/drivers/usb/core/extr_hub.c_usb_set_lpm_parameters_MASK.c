
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_hub {int dummy; } ;
struct usb_device {scalar_t__ speed; int u2_params; int u1_params; TYPE_5__* parent; TYPE_2__* bos; int lpm_capable; } ;
struct TYPE_10__ {int u2_params; int u1_params; TYPE_4__* bos; } ;
struct TYPE_9__ {TYPE_3__* ss_cap; } ;
struct TYPE_8__ {unsigned int bU1devExitLat; int bU2DevExitLat; } ;
struct TYPE_7__ {TYPE_1__* ss_cap; } ;
struct TYPE_6__ {unsigned int bU1devExitLat; int bU2DevExitLat; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 struct usb_hub* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct usb_device*,int *,unsigned int,struct usb_hub*,int *,unsigned int) ;
 int FUNC_3 (struct usb_device*,int *,unsigned int,struct usb_hub*,int *,unsigned int,unsigned int) ;
 int FUNC_4 (struct usb_device*,int *) ;

__attribute__((used)) static void FUNC_5(struct usb_device *VAR_1)
{
 struct usb_hub *VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 if (!VAR_1->lpm_capable || VAR_1->speed < VAR_0)
  return;

 VAR_2 = FUNC_1(VAR_1->parent);



 if (!VAR_2)
  return;

 VAR_4 = VAR_1->bos->ss_cap->bU1devExitLat;
 VAR_5 = FUNC_0(VAR_1->bos->ss_cap->bU2DevExitLat);
 VAR_6 = VAR_1->parent->bos->ss_cap->bU1devExitLat;
 VAR_7 = FUNC_0(VAR_1->parent->bos->ss_cap->bU2DevExitLat);

 FUNC_2(VAR_1, &VAR_1->u1_params, VAR_4,
   VAR_2, &VAR_1->parent->u1_params, VAR_6);

 FUNC_2(VAR_1, &VAR_1->u2_params, VAR_5,
   VAR_2, &VAR_1->parent->u2_params, VAR_7);
 VAR_3 = 1;

 FUNC_3(VAR_1, &VAR_1->u1_params, VAR_4,
   VAR_2, &VAR_1->parent->u1_params, VAR_6,
   VAR_3);

 if (VAR_7 > VAR_6)
  VAR_3 = 1 + VAR_7 - VAR_6;
 else
  VAR_3 = 1 + VAR_6;

 FUNC_3(VAR_1, &VAR_1->u2_params, VAR_5,
   VAR_2, &VAR_1->parent->u2_params, VAR_7,
   VAR_3);


 FUNC_4(VAR_1, &VAR_1->u1_params);
 FUNC_4(VAR_1, &VAR_1->u2_params);
}
