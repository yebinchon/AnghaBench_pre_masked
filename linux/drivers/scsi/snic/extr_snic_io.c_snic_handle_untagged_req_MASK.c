
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_req_info {int list; } ;
struct snic {int spl_cmd_lock; int spl_cmd_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct snic *VAR_0, struct snic_req_info *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->list);

 FUNC_2(&VAR_0->spl_cmd_lock, VAR_2);
 FUNC_1(&VAR_1->list, &VAR_0->spl_cmd_list);
 FUNC_3(&VAR_0->spl_cmd_lock, VAR_2);
}
