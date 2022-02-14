
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {int auto_tdls_timer_active; int auto_tdls_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;

void FUNC_3(struct mwifiex_private *VAR_3)
{
 FUNC_2(&VAR_3->auto_tdls_timer, VAR_2, 0);
 VAR_3->auto_tdls_timer_active = 1;
 FUNC_0(&VAR_3->auto_tdls_timer,
    VAR_1 + FUNC_1(VAR_0));
}
