
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int logical_speed; int speed; } ;
struct TYPE_4__ {TYPE_1__ link_state; } ;
struct lpfc_hba {scalar_t__ sli_rev; int fc_linkspeed; TYPE_2__ sli4_hba; } ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lpfc_hba*) ;

uint32_t
FUNC_1(struct lpfc_hba *VAR_1)
{
 uint32_t VAR_2;

 if (!FUNC_0(VAR_1))
  return 0;

 if (VAR_1->sli_rev <= VAR_0) {
  switch (VAR_1->fc_linkspeed) {
  case 131:
   VAR_2 = 1000;
   break;
  case 130:
   VAR_2 = 2000;
   break;
  case 129:
   VAR_2 = 4000;
   break;
  case 128:
   VAR_2 = 8000;
   break;
  case 133:
   VAR_2 = 10000;
   break;
  case 132:
   VAR_2 = 16000;
   break;
  default:
   VAR_2 = 0;
  }
 } else {
  if (VAR_1->sli4_hba.link_state.logical_speed)
   VAR_2 =
         VAR_1->sli4_hba.link_state.logical_speed;
  else
   VAR_2 = VAR_1->sli4_hba.link_state.speed;
 }
 return VAR_2;
}
