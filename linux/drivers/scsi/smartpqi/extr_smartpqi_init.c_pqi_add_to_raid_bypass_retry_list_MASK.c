
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_io_request {int request_list_entry; } ;
struct pqi_ctrl_info {int raid_bypass_retry_list_lock; int raid_bypass_retry_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(
 struct pqi_ctrl_info *VAR_0,
 struct pqi_io_request *VAR_1, bool VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_0->raid_bypass_retry_list_lock, VAR_3);
 if (VAR_2)
  FUNC_0(&VAR_1->request_list_entry,
   &VAR_0->raid_bypass_retry_list);
 else
  FUNC_1(&VAR_1->request_list_entry,
   &VAR_0->raid_bypass_retry_list);
 FUNC_3(&VAR_0->raid_bypass_retry_list_lock, VAR_3);
}
