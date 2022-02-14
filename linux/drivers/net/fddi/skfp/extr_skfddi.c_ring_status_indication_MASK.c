
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct s_smc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*) ;

void FUNC_1(struct s_smc *VAR_16, u_long VAR_17)
{
 FUNC_0("ring_status_indication( ");
 if (VAR_17 & VAR_8)
  FUNC_0("RS_RES15 ");
 if (VAR_17 & VAR_4)
  FUNC_0("RS_HARDERROR ");
 if (VAR_17 & VAR_13)
  FUNC_0("RS_SOFTERROR ");
 if (VAR_17 & VAR_0)
  FUNC_0("RS_BEACON ");
 if (VAR_17 & VAR_6)
  FUNC_0("RS_PATHTEST ");
 if (VAR_17 & VAR_12)
  FUNC_0("RS_SELFTEST ");
 if (VAR_17 & VAR_10)
  FUNC_0("RS_RES9 ");
 if (VAR_17 & VAR_1)
  FUNC_0("RS_DISCONNECT ");
 if (VAR_17 & VAR_9)
  FUNC_0("RS_RES7 ");
 if (VAR_17 & VAR_2)
  FUNC_0("RS_DUPADDR ");
 if (VAR_17 & VAR_5)
  FUNC_0("RS_NORINGOP ");
 if (VAR_17 & VAR_15)
  FUNC_0("RS_VERSION ");
 if (VAR_17 & VAR_14)
  FUNC_0("RS_STUCKBYPASSS ");
 if (VAR_17 & VAR_3)
  FUNC_0("RS_EVENT ");
 if (VAR_17 & VAR_11)
  FUNC_0("RS_RINGOPCHANGE ");
 if (VAR_17 & VAR_7)
  FUNC_0("RS_RES0 ");
 FUNC_0("]\n");
}
