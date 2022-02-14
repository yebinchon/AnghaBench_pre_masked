
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int response_queue_lock; int response_queue_list; int immed_queue_lock; int immed_queue_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct iscsi_conn *VAR_0)
{
 bool VAR_1;

 FUNC_1(&VAR_0->immed_queue_lock);
 VAR_1 = FUNC_0(&VAR_0->immed_queue_list);
 FUNC_2(&VAR_0->immed_queue_lock);

 if (!VAR_1)
  return VAR_1;

 FUNC_1(&VAR_0->response_queue_lock);
 VAR_1 = FUNC_0(&VAR_0->response_queue_list);
 FUNC_2(&VAR_0->response_queue_lock);

 return VAR_1;
}
