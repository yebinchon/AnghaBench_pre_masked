
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_smc {TYPE_1__* y; } ;
struct lem_counter {int lem_on; long lem_errors; } ;
struct TYPE_2__ {struct lem_counter lem; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct s_smc *VAR_4, int VAR_5, int VAR_6)
{
 struct lem_counter *VAR_7 = &VAR_4->y[VAR_5].lem ;

 VAR_7->lem_on = 1 ;
 VAR_7->lem_errors = 0L ;





 FUNC_3(FUNC_0(VAR_5,VAR_2),VAR_6) ;
 (void)FUNC_2(FUNC_0(VAR_5,VAR_3)) ;


 FUNC_1(FUNC_0(VAR_5,VAR_0),VAR_1,VAR_1) ;
}
