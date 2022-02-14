
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int raid_bypass_retry_list_lock; int raid_bypass_retry_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(
 struct pqi_ctrl_info *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->raid_bypass_retry_list_lock, VAR_1);
 FUNC_0(&VAR_0->raid_bypass_retry_list);
 FUNC_2(&VAR_0->raid_bypass_retry_list_lock, VAR_1);
}
