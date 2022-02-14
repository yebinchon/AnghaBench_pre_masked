
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smt_p_sde {int sde_type; int sde_mac_count; int sde_master; int sde_non_master; } ;
struct TYPE_2__ {int fddiSMTMaster_Ct; int fddiSMTNonMaster_Ct; } ;
struct s_smc {TYPE_1__ mib; } ;


 int VAR_0 ;
 int FUNC_0 (struct smt_p_sde*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_4, struct smt_p_sde *VAR_5)
{
 FUNC_0(VAR_5,VAR_1) ;
 VAR_5->sde_non_master = VAR_4->mib.fddiSMTNonMaster_Ct ;
 VAR_5->sde_master = VAR_4->mib.fddiSMTMaster_Ct ;
 VAR_5->sde_mac_count = VAR_0 ;



 VAR_5->sde_type = VAR_3 ;

}
