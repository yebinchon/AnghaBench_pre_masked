
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int tc_flower_initialized; int flower_stats_timer; int flower_stats_work; int flower_ht_params; int flower_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ) ;

int FUNC_4(struct adapter *VAR_6)
{
 int VAR_7;

 if (VAR_6->tc_flower_initialized)
  return -VAR_0;

 VAR_6->flower_ht_params = VAR_4;
 VAR_7 = FUNC_2(&VAR_6->flower_tbl, &VAR_6->flower_ht_params);
 if (VAR_7)
  return VAR_7;

 FUNC_0(&VAR_6->flower_stats_work, VAR_3);
 FUNC_3(&VAR_6->flower_stats_timer, VAR_2, 0);
 FUNC_1(&VAR_6->flower_stats_timer, VAR_5 + VAR_1);
 VAR_6->tc_flower_initialized = 1;
 return 0;
}
