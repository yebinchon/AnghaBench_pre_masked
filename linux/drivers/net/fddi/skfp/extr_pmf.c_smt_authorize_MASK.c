
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smt_para {int p_len; } ;
struct smt_header {int smt_sid; } ;
struct TYPE_2__ {scalar_t__ fddiPRPMFPasswd; int fddiPRPMFStation; } ;
struct s_smc {TYPE_1__ mib; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (struct s_smc*,struct smt_header*,int ) ;

__attribute__((used)) static int FUNC_2(struct s_smc *VAR_1, struct smt_header *VAR_2)
{
 struct smt_para *VAR_3 ;
 int VAR_4 ;
 char *VAR_5 ;




 VAR_5 = (char *) &VAR_1->mib.fddiPRPMFStation ;
 for (VAR_4 = 0 ; VAR_4 < 8 && !VAR_5[VAR_4] ; VAR_4++)
  ;
 if (VAR_4 != 8) {
  if (FUNC_0((char *) &VAR_2->smt_sid,
   (char *) &VAR_1->mib.fddiPRPMFStation,8))
   return 1;
 }



 VAR_5 = (char *) VAR_1->mib.fddiPRPMFPasswd ;
 for (VAR_4 = 0 ; VAR_4 < 8 && !VAR_5[VAR_4] ; VAR_4++)
  ;
 if (VAR_4 != 8) {
  VAR_3 = (struct smt_para *) FUNC_1(VAR_1,VAR_2,VAR_0) ;
  if (!VAR_3)
   return 1;
  if (VAR_3->p_len != 8)
   return 1;
  if (FUNC_0((char *)(VAR_3+1),(char *)VAR_1->mib.fddiPRPMFPasswd,8))
   return 1;
 }
 return 0;
}
