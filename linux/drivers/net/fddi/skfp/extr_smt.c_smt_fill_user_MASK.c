
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smp_p_user {scalar_t__ us_data; } ;
struct TYPE_2__ {scalar_t__ fddiSMTUserData; } ;
struct s_smc {TYPE_1__ mib; } ;


 int FUNC_0 (struct smp_p_user*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_1, struct smp_p_user *VAR_2)
{
 FUNC_0(VAR_2,VAR_0) ;
 FUNC_1((char *) VAR_2->us_data,
  (char *) VAR_1->mib.fddiSMTUserData,
  sizeof(VAR_2->us_data)) ;
}
