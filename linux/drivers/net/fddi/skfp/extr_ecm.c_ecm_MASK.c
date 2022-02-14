
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fddiSMTECMState; } ;
struct s_smc {TYPE_1__ mib; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ,int ) ;
 int * VAR_1 ;
 int FUNC_1 (struct s_smc*,int) ;
 int FUNC_2 (struct s_smc*,int) ;
 int * VAR_2 ;

void FUNC_3(struct s_smc *VAR_3, int VAR_4)
{
 int VAR_5 ;

 do {
  FUNC_0("ECM : state %s%s event %s",
         VAR_3->mib.fddiSMTECMState & VAR_0 ? "ACTIONS " : "",
         VAR_2[VAR_3->mib.fddiSMTECMState & ~VAR_0],
         VAR_1[VAR_4]);
  VAR_5 = VAR_3->mib.fddiSMTECMState ;
  FUNC_1(VAR_3,VAR_4) ;
  VAR_4 = 0 ;
 } while (VAR_5 != VAR_3->mib.fddiSMTECMState) ;
 FUNC_2(VAR_3,(int)VAR_3->mib.fddiSMTECMState) ;
}
