
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smt_p_latency {int lt_latency1; int lt_latency2; void* lt_phyout_idx2; void* lt_phyout_idx1; } ;
struct TYPE_2__ {scalar_t__ sas; } ;
struct s_smc {TYPE_1__ s; } ;


 int FUNC_0 (struct smt_p_latency*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (struct s_smc*,int) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_2, struct smt_p_latency *VAR_3)
{
 FUNC_0(VAR_3,VAR_1) ;

 VAR_3->lt_phyout_idx1 = FUNC_1(VAR_2,0) ;
 VAR_3->lt_latency1 = 10 ;




 if (VAR_2->s.sas == VAR_0) {
  VAR_3->lt_phyout_idx2 = FUNC_1(VAR_2,1) ;
  VAR_3->lt_latency2 = 10 ;
 }
 else {
  VAR_3->lt_phyout_idx2 = 0 ;
  VAR_3->lt_latency2 = 0 ;
 }
}
