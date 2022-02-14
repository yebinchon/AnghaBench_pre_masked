
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fddiSMTNonMaster_Ct; int fddiSMTMaster_Ct; } ;
struct TYPE_3__ {int sas; } ;
struct s_smc {TYPE_2__ mib; TYPE_1__ s; } ;


 int VAR_0 ;




void FUNC_0(struct s_smc *VAR_1)
{
 switch (VAR_1->s.sas) {
 case 128 :
  VAR_1->mib.fddiSMTNonMaster_Ct = 1 ;
  break ;
 case 130 :
  VAR_1->mib.fddiSMTNonMaster_Ct = 2 ;
  break ;
 }
 VAR_1->mib.fddiSMTMaster_Ct = 0 ;

}
