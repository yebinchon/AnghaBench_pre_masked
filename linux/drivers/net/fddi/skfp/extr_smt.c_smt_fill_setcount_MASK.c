
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smt_p_setcount {scalar_t__ timestamp; int count; } ;
struct TYPE_3__ {scalar_t__ timestamp; int count; } ;
struct TYPE_4__ {TYPE_1__ fddiSMTSetCount; } ;
struct s_smc {TYPE_2__ mib; } ;


 int FUNC_0 (struct s_smc*) ;
 int FUNC_1 (struct smt_p_setcount*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct s_smc *VAR_1, struct smt_p_setcount *VAR_2)
{
 FUNC_0(VAR_1) ;
 FUNC_1(VAR_2,VAR_0) ;
 VAR_2->count = VAR_1->mib.fddiSMTSetCount.count ;
 FUNC_2((char *)VAR_2->timestamp,
  (char *)VAR_1->mib.fddiSMTSetCount.timestamp,8) ;
}
