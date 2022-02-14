
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct s_smc {struct s_phy* y; } ;
struct s_phy {struct fddi_mib_p* mib; } ;
struct fddi_mib_p {scalar_t__ fddiPORTPCMState; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_12, int VAR_13)
{



 u_short VAR_14 ;
 struct s_phy *VAR_15 ;
 struct fddi_mib_p *VAR_16 ;
 struct fddi_mib_p *VAR_17 ;

 VAR_15 = &VAR_12->y[VAR_9] ;
 VAR_16 = VAR_15->mib ;
 VAR_15 = &VAR_12->y[VAR_10] ;
 VAR_17 = VAR_15->mib ;
}
