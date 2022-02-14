
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int stats_periodic; int run_time_calib_work; int alive_start; int init_alive_start; int txpower_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct il_priv*) ;

__attribute__((used)) static void
FUNC_5(struct il_priv *VAR_0)
{
 FUNC_2(&VAR_0->txpower_work);
 FUNC_1(&VAR_0->init_alive_start);
 FUNC_0(&VAR_0->alive_start);
 FUNC_2(&VAR_0->run_time_calib_work);

 FUNC_4(VAR_0);

 FUNC_3(&VAR_0->stats_periodic);
}
