
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int * p; } ;
struct s_smc {TYPE_2__ mib; TYPE_1__* y; } ;
struct TYPE_6__ {scalar_t__ d_sba; scalar_t__ d_ess; scalar_t__ d_plc; scalar_t__ d_cfm; scalar_t__ d_pcm; scalar_t__ d_ecm; scalar_t__ d_rmt; scalar_t__ d_smtf; scalar_t__ d_smt; } ;
struct TYPE_4__ {int * mib; } ;


 int VAR_0 ;
 int FUNC_0 (struct s_smc*) ;
 int FUNC_1 (struct s_smc*,int ) ;
 int FUNC_2 (struct s_smc*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 (struct s_smc*,int ) ;
 int FUNC_4 (struct s_smc*) ;
 int FUNC_5 (struct s_smc*) ;
 int FUNC_6 (struct s_smc*,int *) ;
 int FUNC_7 (struct s_smc*,int,int ) ;
 int FUNC_8 (struct s_smc*) ;
 int FUNC_9 (struct s_smc*,int ) ;
 int FUNC_10 (struct s_smc*) ;
 int FUNC_11 (struct s_smc*) ;
 int FUNC_12 (struct s_smc*) ;
 int FUNC_13 (struct s_smc*) ;
 int FUNC_14 (struct s_smc*) ;
 int FUNC_15 (struct s_smc*) ;
 int FUNC_16 (struct s_smc*) ;
 int FUNC_17 (struct s_smc*) ;

int FUNC_18(struct s_smc *VAR_2, u_char *VAR_3)

{
 int VAR_4 ;
 for ( VAR_4 = 0; VAR_4 < VAR_0; VAR_4 ++ ) {
  VAR_2->y[VAR_4].mib = & VAR_2->mib.p[VAR_4] ;
 }

 FUNC_11(VAR_2) ;
 (void) FUNC_16(VAR_2) ;
 FUNC_6(VAR_2,VAR_3) ;
 FUNC_14(VAR_2) ;

 FUNC_5(VAR_2) ;

 FUNC_15(VAR_2) ;

 FUNC_17(VAR_2) ;
 FUNC_12(VAR_2) ;

 FUNC_8(VAR_2) ;
 FUNC_4(VAR_2) ;
 FUNC_2(VAR_2) ;
 FUNC_10(VAR_2) ;

 for (VAR_4 = 0 ; VAR_4 < VAR_0 ; VAR_4++) {
  FUNC_7(VAR_2,VAR_4,0) ;
 }
 FUNC_3(VAR_2,0) ;
 FUNC_1(VAR_2,0) ;
 FUNC_9(VAR_2,0) ;

 FUNC_13(VAR_2) ;

        FUNC_0(VAR_2) ;

 return 0;
}
