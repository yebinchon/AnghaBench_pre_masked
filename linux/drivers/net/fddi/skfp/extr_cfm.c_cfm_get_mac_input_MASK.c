
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fddiSMTCF_State; } ;
struct s_smc {TYPE_1__ mib; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_0(struct s_smc *VAR_4)
{
 return (VAR_4->mib.fddiSMTCF_State == VAR_2 ||
  VAR_4->mib.fddiSMTCF_State == VAR_3) ? VAR_1 : VAR_0;
}
