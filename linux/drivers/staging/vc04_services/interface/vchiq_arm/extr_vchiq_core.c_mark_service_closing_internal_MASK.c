
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {scalar_t__ conn_state; struct vchiq_service_quota* service_quotas; int slot_mutex; int recycle_mutex; } ;
struct vchiq_service_quota {int quota_event; } ;
struct vchiq_service {int closing; size_t localport; struct vchiq_state* state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct vchiq_service *VAR_1, int VAR_2)
{
 struct vchiq_state *VAR_3 = VAR_1->state;
 struct vchiq_service_quota *VAR_4;

 VAR_1->closing = 1;


 FUNC_1(&VAR_3->recycle_mutex);
 FUNC_2(&VAR_3->recycle_mutex);
 if (!VAR_2 || (VAR_3->conn_state != VAR_0)) {




  FUNC_1(&VAR_3->slot_mutex);
  FUNC_2(&VAR_3->slot_mutex);
 }


 VAR_4 = &VAR_3->service_quotas[VAR_1->localport];
 FUNC_0(&VAR_4->quota_event);
}
