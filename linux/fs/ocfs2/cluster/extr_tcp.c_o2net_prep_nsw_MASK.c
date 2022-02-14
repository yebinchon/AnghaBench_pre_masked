
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2net_status_wait {int ns_id; scalar_t__ ns_status; int ns_sys_status; int ns_wq; int ns_node_item; } ;
struct o2net_node {int nn_lock; int nn_status_list; int nn_status_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct o2net_status_wait*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct o2net_node *VAR_2, struct o2net_status_wait *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_2->nn_lock);
 VAR_4 = FUNC_0(&VAR_2->nn_status_idr, VAR_3, 0, 0, VAR_0);
 if (VAR_4 >= 0) {
  VAR_3->ns_id = VAR_4;
  FUNC_2(&VAR_3->ns_node_item, &VAR_2->nn_status_list);
 }
 FUNC_4(&VAR_2->nn_lock);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(&VAR_3->ns_wq);
 VAR_3->ns_sys_status = VAR_1;
 VAR_3->ns_status = 0;
 return 0;
}
