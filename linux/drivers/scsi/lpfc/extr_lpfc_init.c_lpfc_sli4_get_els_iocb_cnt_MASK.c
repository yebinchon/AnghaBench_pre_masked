
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_xri; } ;
struct TYPE_4__ {TYPE_1__ max_cfg_param; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_2__ sli4_hba; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct lpfc_hba *VAR_1)
{
 int VAR_2 = VAR_1->sli4_hba.max_cfg_param.max_xri;

 if (VAR_1->sli_rev == VAR_0) {
  if (VAR_2 <= 100)
   return 10;
  else if (VAR_2 <= 256)
   return 25;
  else if (VAR_2 <= 512)
   return 50;
  else if (VAR_2 <= 1024)
   return 100;
  else if (VAR_2 <= 1536)
   return 150;
  else if (VAR_2 <= 2048)
   return 200;
  else
   return 250;
 } else
  return 0;
}
