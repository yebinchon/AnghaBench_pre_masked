
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int feaLevelHigh; } ;
struct TYPE_16__ {TYPE_3__ rev; } ;
struct lpfc_hba {int cfg_topology; int fc_pref_ALPA; TYPE_6__ vpd; TYPE_2__* pcidev; } ;
typedef TYPE_6__ lpfc_vpd_t ;
struct TYPE_14__ {int link_flags; int fabric_AL_PA; void* link_speed; } ;
struct TYPE_15__ {TYPE_4__ varInitLnk; } ;
struct TYPE_17__ {TYPE_5__ un; int mbxOwner; scalar_t__ mbxCommand; } ;
struct TYPE_11__ {TYPE_7__ mb; } ;
struct TYPE_18__ {TYPE_1__ u; } ;
struct TYPE_12__ {scalar_t__ device; } ;
typedef TYPE_7__ MAILBOX_t ;
typedef TYPE_8__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;




 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (TYPE_8__*,int ,int) ;

void
FUNC_1(struct lpfc_hba * VAR_16,
        LPFC_MBOXQ_t * VAR_17, uint32_t VAR_18, uint32_t VAR_19)
{
 lpfc_vpd_t *VAR_20;
 MAILBOX_t *VAR_21;

 VAR_21 = &VAR_17->u.mb;
 FUNC_0(VAR_17, 0, sizeof (LPFC_MBOXQ_t));

 switch (VAR_18) {
 case 139:
  VAR_21->un.varInitLnk.link_flags = 140;
  VAR_21->un.varInitLnk.link_flags |= VAR_2;
  break;
 case 137:
  VAR_21->un.varInitLnk.link_flags = 137;
  break;
 case 140:
  VAR_21->un.varInitLnk.link_flags = 140;
  break;
 case 138:
  VAR_21->un.varInitLnk.link_flags = 137;
  VAR_21->un.varInitLnk.link_flags |= VAR_2;
  break;
 case 141:
  VAR_21->un.varInitLnk.link_flags = 141;
  break;
 }

 if ((VAR_16->pcidev->device == VAR_14 ||
      VAR_16->pcidev->device == VAR_15) &&
     VAR_21->un.varInitLnk.link_flags & 140) {
  VAR_21->un.varInitLnk.link_flags = 137;
  VAR_16->cfg_topology = 137;
 }


 VAR_21->un.varInitLnk.link_flags |= VAR_0;




 VAR_20 = &VAR_16->vpd;
 if (VAR_20->rev.feaLevelHigh >= 0x02){
  switch(VAR_19){
  case 134:
   VAR_21->un.varInitLnk.link_flags |= VAR_1;
   VAR_21->un.varInitLnk.link_speed = VAR_5;
   break;
  case 133:
   VAR_21->un.varInitLnk.link_flags |= VAR_1;
   VAR_21->un.varInitLnk.link_speed = VAR_6;
   break;
  case 131:
   VAR_21->un.varInitLnk.link_flags |= VAR_1;
   VAR_21->un.varInitLnk.link_speed = VAR_8;
   break;
  case 129:
   VAR_21->un.varInitLnk.link_flags |= VAR_1;
   VAR_21->un.varInitLnk.link_speed = VAR_10;
   break;
  case 136:
   VAR_21->un.varInitLnk.link_flags |= VAR_1;
   VAR_21->un.varInitLnk.link_speed = VAR_3;
   break;
  case 135:
   VAR_21->un.varInitLnk.link_flags |= VAR_1;
   VAR_21->un.varInitLnk.link_speed = VAR_4;
   break;
  case 132:
   VAR_21->un.varInitLnk.link_flags |= VAR_1;
   VAR_21->un.varInitLnk.link_speed = VAR_7;
   break;
  case 130:
   VAR_21->un.varInitLnk.link_flags |= VAR_1;
   VAR_21->un.varInitLnk.link_speed = VAR_9;
   break;
  case 128:
  default:
   VAR_21->un.varInitLnk.link_speed = VAR_11;
   break;
  }

 }
 else
  VAR_21->un.varInitLnk.link_speed = VAR_11;

 VAR_21->mbxCommand = (volatile uint8_t)VAR_12;
 VAR_21->mbxOwner = VAR_13;
 VAR_21->un.varInitLnk.fabric_AL_PA = VAR_16->fc_pref_ALPA;
 return;
}
