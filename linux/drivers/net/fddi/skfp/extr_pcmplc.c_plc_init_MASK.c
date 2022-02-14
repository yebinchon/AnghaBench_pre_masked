
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sas; } ;
struct s_smc {TYPE_2__ s; TYPE_1__* y; } ;
struct TYPE_6__ {int para; scalar_t__ timer; } ;
struct TYPE_4__ {scalar_t__ pmd_scramble; } ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct s_smc*,int) ;
 int VAR_20 ;
 TYPE_3__* VAR_21 ;

__attribute__((used)) static void FUNC_4(struct s_smc *VAR_22, int VAR_23)
{
 int VAR_24 ;

 int VAR_25 ;



 FUNC_2(FUNC_0(VAR_23,VAR_10),0) ;
 FUNC_2(FUNC_0(VAR_23,VAR_10),VAR_14) ;
 FUNC_2(FUNC_0(VAR_23,VAR_9),0) ;





 VAR_25 = FUNC_1(FUNC_0(VAR_23,VAR_15)) & VAR_7 ;
 if (VAR_25 != VAR_6)

 {
  if (VAR_22->y[VAR_23].pmd_scramble) {
   FUNC_2(FUNC_0(VAR_23,VAR_11),VAR_0) ;




  }
  else {
   FUNC_2(FUNC_0(VAR_23,VAR_11),VAR_1) ;




  }
 }




 for ( VAR_24 = 0 ; VAR_21[VAR_24].timer; VAR_24++)
  FUNC_2(FUNC_0(VAR_23,VAR_21[VAR_24].timer),VAR_21[VAR_24].para) ;

 (void)FUNC_1(FUNC_0(VAR_23,VAR_12)) ;
 FUNC_3(VAR_22,VAR_23) ;
 FUNC_2(FUNC_0(VAR_23,VAR_13),VAR_20);
 if ((VAR_22->s.sas == VAR_19) && (VAR_23 == VAR_18)) {
  FUNC_2(FUNC_0(VAR_23,VAR_10),VAR_8) ;
 }

}
