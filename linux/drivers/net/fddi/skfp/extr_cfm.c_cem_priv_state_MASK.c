
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sas; } ;
struct s_smc {TYPE_2__* y; TYPE_1__ s; } ;
struct TYPE_4__ {scalar_t__ cem_pst; scalar_t__ wc_flag; scalar_t__ cf_join; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct s_smc*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_9, int VAR_10)

{
 int VAR_11;
 int VAR_12;


 if (VAR_9->s.sas != VAR_8 )
  return ;

 VAR_11 = VAR_10 - VAR_3;

 if (VAR_11 != VAR_5 && VAR_11 != VAR_6) {
  return ;
 }

 if (VAR_9->y[VAR_11].cf_join) {
  VAR_9->y[VAR_11].cem_pst = VAR_2 ;
 } else if (!VAR_9->y[VAR_11].wc_flag) {

  VAR_9->y[VAR_11].cem_pst = VAR_0 ;
 }




 for (VAR_12 = 0 ; VAR_12 < 2 ; VAR_12 ++ ) {

  if ( VAR_9->y[VAR_12].cem_pst == VAR_1 && !VAR_9->y[VAR_12].wc_flag ) {
   VAR_9->y[VAR_12].cem_pst = VAR_0;
   FUNC_0(VAR_9,(int)(VAR_4+VAR_12),VAR_7) ;
  }
  if ( VAR_9->y[VAR_12].cem_pst == VAR_2 && VAR_9->y[VAR_12].wc_flag ) {
   VAR_9->y[VAR_12].cem_pst = VAR_1;
   FUNC_0(VAR_9,(int)(VAR_4+VAR_12),VAR_7) ;
  }
  if ( VAR_9->y[VAR_12].cem_pst == VAR_0 && VAR_9->y[VAR_12].wc_flag ) {




   VAR_9->y[VAR_12].cem_pst = VAR_1;
  }
 }
 return ;
}
