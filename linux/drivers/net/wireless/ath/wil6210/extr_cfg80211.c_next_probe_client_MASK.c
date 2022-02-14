
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct list_head* next; } ;
struct wil6210_vif {int probe_client_mutex; TYPE_1__ probe_client_pending; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct list_head *FUNC_4(struct wil6210_vif *VAR_0)
{
 struct list_head *VAR_1 = ((void*)0);

 FUNC_2(&VAR_0->probe_client_mutex);

 if (!FUNC_1(&VAR_0->probe_client_pending)) {
  VAR_1 = VAR_0->probe_client_pending.next;
  FUNC_0(VAR_1);
 }

 FUNC_3(&VAR_0->probe_client_mutex);

 return VAR_1;
}
