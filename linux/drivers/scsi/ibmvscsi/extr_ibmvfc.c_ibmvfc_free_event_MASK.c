
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_event_pool {int dummy; } ;
struct ibmvfc_host {int free; struct ibmvfc_event_pool pool; } ;
struct ibmvfc_event {int queue; int free; struct ibmvfc_host* vhost; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ibmvfc_event_pool*,struct ibmvfc_event*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct ibmvfc_event *VAR_0)
{
 struct ibmvfc_host *VAR_1 = VAR_0->vhost;
 struct ibmvfc_event_pool *VAR_2 = &VAR_1->pool;

 FUNC_0(!FUNC_2(VAR_2, VAR_0));
 FUNC_0(FUNC_1(&VAR_0->free) != 1);
 FUNC_3(&VAR_0->queue, &VAR_1->free);
}
