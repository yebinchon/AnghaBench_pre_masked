
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sas; } ;
struct s_smc {TYPE_1__ s; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct s_smc *VAR_4, int VAR_5)
{
 FUNC_1(1, "ECM : sm_pm_bypass_req(%s)",
  VAR_5 == 128 ? "BP_INSERT" : "BP_DEINSERT");

 if (VAR_4->s.sas != VAR_3)
  return ;
}
