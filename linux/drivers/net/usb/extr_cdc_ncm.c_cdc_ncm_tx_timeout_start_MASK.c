
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdc_ncm_ctx {int timer_interval; int tx_timer; int stop; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct cdc_ncm_ctx *VAR_1)
{

 if (!(FUNC_1(&VAR_1->tx_timer) || FUNC_0(&VAR_1->stop)))
  FUNC_2(&VAR_1->tx_timer,
    VAR_1->timer_interval,
    VAR_0);
}
