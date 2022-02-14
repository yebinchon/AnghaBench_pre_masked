
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2net_status_wait {int ns_sys_status; int ns_wq; int ns_id; int ns_status; int ns_node_item; } ;
struct o2net_node {int nn_status_idr; int nn_lock; } ;
typedef int s32 ;
typedef enum o2net_system_error { ____Placeholder_o2net_system_error } o2net_system_error ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct o2net_node *VAR_0,
          struct o2net_status_wait *VAR_1,
          enum o2net_system_error VAR_2,
          s32 VAR_3)
{
 FUNC_0(&VAR_0->nn_lock);

 if (!FUNC_3(&VAR_1->ns_node_item)) {
  FUNC_2(&VAR_1->ns_node_item);
  VAR_1->ns_sys_status = VAR_2;
  VAR_1->ns_status = VAR_3;
  FUNC_1(&VAR_0->nn_status_idr, VAR_1->ns_id);
  FUNC_4(&VAR_1->ns_wq);
 }
}
