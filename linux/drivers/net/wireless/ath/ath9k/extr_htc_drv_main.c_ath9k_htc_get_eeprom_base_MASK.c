
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct base_eep_header {int dummy; } ;
struct ath9k_htc_priv {TYPE_6__* ah; } ;
struct TYPE_10__ {int baseEepHeader; } ;
struct TYPE_8__ {int baseEepHeader; } ;
struct TYPE_7__ {int baseEepHeader; } ;
struct TYPE_11__ {TYPE_4__ map9287; TYPE_2__ def; TYPE_1__ map4k; } ;
struct TYPE_9__ {scalar_t__ usbdev; } ;
struct TYPE_12__ {TYPE_5__ eeprom; TYPE_3__ hw_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;

struct base_eep_header *FUNC_1(struct ath9k_htc_priv *VAR_2)
{
 struct base_eep_header *VAR_3 = ((void*)0);






 if (FUNC_0(VAR_2->ah))
  VAR_3 = (struct base_eep_header *)
   &VAR_2->ah->eeprom.map4k.baseEepHeader;
 else if (VAR_2->ah->hw_version.usbdev == VAR_0)
  VAR_3 = (struct base_eep_header *)
   &VAR_2->ah->eeprom.def.baseEepHeader;
 else if (VAR_2->ah->hw_version.usbdev == VAR_1)
  VAR_3 = (struct base_eep_header *)
   &VAR_2->ah->eeprom.map9287.baseEepHeader;
 return VAR_3;
}
