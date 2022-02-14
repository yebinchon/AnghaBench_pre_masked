
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {int rmt_timer0; int timer0_exp; } ;
struct s_smc {TYPE_1__ r; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct s_smc*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_2, u_long VAR_3, int VAR_4)
{
 VAR_2->r.timer0_exp = VAR_1 ;
 FUNC_1(VAR_2,&VAR_2->r.rmt_timer0,VAR_3,FUNC_0(VAR_0,VAR_4));
}
