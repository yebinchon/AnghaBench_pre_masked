
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smt_para {int dummy; } ;
struct smt_p_setcount {scalar_t__ count; scalar_t__ timestamp; } ;
struct smt_header {int dummy; } ;
struct TYPE_3__ {scalar_t__ count; scalar_t__ timestamp; } ;
struct TYPE_4__ {TYPE_1__ fddiSMTSetCount; } ;
struct s_smc {TYPE_2__ mib; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (struct s_smc*,struct smt_header*,int ) ;

__attribute__((used)) static int FUNC_2(struct s_smc *VAR_1, struct smt_header *VAR_2)
{
 struct smt_para *VAR_3 ;
 struct smt_p_setcount *VAR_4 ;

 VAR_3 = (struct smt_para *) FUNC_1(VAR_1,VAR_2,VAR_0) ;
 if (VAR_3) {
  VAR_4 = (struct smt_p_setcount *) VAR_3 ;
  if ((VAR_1->mib.fddiSMTSetCount.count != VAR_4->count) ||
   FUNC_0((char *) VAR_1->mib.fddiSMTSetCount.timestamp,
   (char *)VAR_4->timestamp,8))
   return 1;
 }
 return 0;
}
