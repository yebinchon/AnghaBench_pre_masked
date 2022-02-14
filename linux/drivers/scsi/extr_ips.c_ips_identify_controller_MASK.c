
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ad_type; TYPE_2__* pcidev; TYPE_1__* enq; int slot_num; } ;
typedef TYPE_3__ ips_ha_t ;
struct TYPE_6__ {int device; int subsystem_device; int revision; } ;
struct TYPE_5__ {int ucMaxPhysicalDevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;



 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(ips_ha_t * VAR_24)
{
 FUNC_0("ips_identify_controller", 1);

 switch (VAR_24->pcidev->device) {
 case 140:
  if (VAR_24->pcidev->revision <= VAR_20) {
   VAR_24->ad_type = VAR_2;
  } else if (VAR_24->pcidev->revision == VAR_21) {
   VAR_24->ad_type = VAR_3;
  } else if (VAR_24->pcidev->revision == VAR_19) {
   VAR_24->ad_type = VAR_1;
  } else if ((VAR_24->pcidev->revision == VAR_21)
      && (VAR_24->slot_num == 0)) {
   VAR_24->ad_type = VAR_0;
  } else if ((VAR_24->pcidev->revision >= VAR_17) &&
      (VAR_24->pcidev->revision <= VAR_18)) {
   if (VAR_24->enq->ucMaxPhysicalDevices == 15)
    VAR_24->ad_type = VAR_5;
   else
    VAR_24->ad_type = VAR_4;
  } else if ((VAR_24->pcidev->revision >= VAR_22) &&
      (VAR_24->pcidev->revision <= VAR_23)) {
   VAR_24->ad_type = VAR_6;
  }
  break;

 case 138:
  switch (VAR_24->pcidev->subsystem_device) {
  case 137:
   VAR_24->ad_type = VAR_7;
   break;

  case 135:
   VAR_24->ad_type = VAR_9;
   break;

  case 134:
   VAR_24->ad_type = VAR_10;
   break;

  case 136:
   VAR_24->ad_type = VAR_8;
   break;

  case 132:
   VAR_24->ad_type = VAR_12;
   break;

  case 133:
   VAR_24->ad_type = VAR_11;
   break;
  }

  break;

 case 139:
  switch (VAR_24->pcidev->subsystem_device) {
  case 130:
   VAR_24->ad_type = VAR_14;
   break;
  case 131:
   VAR_24->ad_type = VAR_13;
   break;
  case 128:
   VAR_24->ad_type = VAR_16;
   break;
  case 129:
   VAR_24->ad_type = VAR_15;
   break;
  }
  break;
 }
}
