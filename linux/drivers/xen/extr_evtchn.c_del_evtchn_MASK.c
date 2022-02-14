
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_evtchn {int node; } ;
struct per_user_data {int evtchns; int nr_evtchns; } ;


 int FUNC_0 (struct user_evtchn*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct per_user_data *VAR_0, struct user_evtchn *VAR_1)
{
 VAR_0->nr_evtchns--;
 FUNC_1(&VAR_1->node, &VAR_0->evtchns);
 FUNC_0(VAR_1);
}
