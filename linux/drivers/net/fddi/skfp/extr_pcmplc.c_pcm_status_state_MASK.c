
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_smc {struct s_phy* y; } ;
struct s_phy {struct fddi_mib_p* mib; } ;
struct TYPE_2__ {int R_val; } ;
struct fddi_mib_p {int fddiPORTMy_Type; int fddiPORTConnectState; int fddiPORTNeighborType; int fddiPORTPCMState; TYPE_1__ fddiPORTMacIndicated; } ;




void FUNC_0(struct s_smc *VAR_0, int VAR_1, int *VAR_2, int *VAR_3,
        int *VAR_4, int *VAR_5)
{
 struct s_phy *VAR_6 = &VAR_0->y[VAR_1] ;
 struct fddi_mib_p *VAR_7 ;

 VAR_7 = VAR_6->mib ;


 *VAR_5 = 0 ;
 *VAR_2 = VAR_7->fddiPORTMy_Type ;
 *VAR_3 = VAR_7->fddiPORTConnectState ;
 *VAR_4 = VAR_7->fddiPORTNeighborType ;

 switch(VAR_7->fddiPORTPCMState) {
 case 128 :
  *VAR_5 = VAR_7->fddiPORTMacIndicated.R_val ;
  break ;
 }
}
